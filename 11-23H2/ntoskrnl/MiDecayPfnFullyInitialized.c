/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x14033F044
 * Callers:
 *     MiDeleteVaTail @ 0x1402793B0 (MiDeleteVaTail.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140267630 (MiAcquirePageListLock.c)
 *     MiReleasePageListLock @ 0x1402DDD60 (MiReleasePageListLock.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // r15
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  _BYTE v10[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v10, 0, 0x68uLL);
  v2 = 0;
  v3 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v4 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
  {
    MiAcquirePageListLock(v3 + 3384, BugCheckParameter2, 1, (__int64)v10);
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140C65B40 && (v5 & 0x10) == 0 )
      v5 &= ~qword_140C65B40;
    if ( ((v5 >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL
                                        * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
    {
      MiUnlinkPageFromListEx(BugCheckParameter2, (unsigned int)(v10[0] != 0) + 1);
      v2 = 1;
    }
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
    MiReleasePageListLock(v3 + 3384, (__int64)v10);
  }
  else
  {
    v2 = 1;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( v2 )
    return (__int64)RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)BugCheckParameter2);
  return result;
}
