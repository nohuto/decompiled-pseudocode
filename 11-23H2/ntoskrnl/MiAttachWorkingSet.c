/*
 * XREFs of MiAttachWorkingSet @ 0x14033DC74
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025B730 (MiTrimOrAgeWorkingSet.c)
 *     MiHandleForceTrimWorkingSets @ 0x140635010 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     MiAttachSessionGlobal @ 0x14033DD2C (MiAttachSessionGlobal.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

char __fastcall MiAttachWorkingSet(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v2; // rcx
  struct _KTHREAD *v3; // r8
  ULONG_PTR ApcStateIndex; // rax
  _OWORD v6[3]; // [rsp+30h] [rbp-48h] BYREF

  LOBYTE(CurrentThread) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)CurrentThread )
  {
    if ( (_BYTE)CurrentThread == 1 )
      LOBYTE(CurrentThread) = MiAttachSessionGlobal(
                                a1 - 192,
                                *(unsigned int *)(*(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                                + 17000LL));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (_KPROCESS *)(a1 - 1664);
    if ( CurrentThread->Process != v2 )
    {
      memset(v6, 0, sizeof(v6));
      v3 = KeGetCurrentThread();
      ApcStateIndex = v3->ApcStateIndex;
      if ( (_BYTE)ApcStateIndex )
        KeBugCheckEx(5u, (ULONG_PTR)v2, (ULONG_PTR)v3->ApcState.Process, ApcStateIndex, 0LL);
      LOBYTE(CurrentThread) = KiStackAttachProcess(v2, 1, (__int64)v6);
    }
  }
  return (char)CurrentThread;
}
