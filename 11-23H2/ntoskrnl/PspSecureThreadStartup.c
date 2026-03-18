/*
 * XREFs of PspSecureThreadStartup @ 0x1409B18F0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PspTerminateThreadByPointer @ 0x14076D980 (PspTerminateThreadByPointer.c)
 *     PspNotifyThreadCreation @ 0x14076F800 (PspNotifyThreadCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076F8E0 (PspDisablePrimaryTokenExchange.c)
 */

__int64 PspSecureThreadStartup()
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v3; // zf
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r8
  _BYTE v9[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v3 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange((__int64)CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v5) = 1;
    PspTerminateThreadByPointer((__int64)CurrentThread, 3221225547LL, v5);
  }
  PspNotifyThreadCreation((__int64)CurrentThread);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  memset(v9, 0, 0x68uLL);
  v6 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v9);
  LOBYTE(v7) = 1;
  return PspTerminateThreadByPointer((__int64)CurrentThread, v6, v7);
}
