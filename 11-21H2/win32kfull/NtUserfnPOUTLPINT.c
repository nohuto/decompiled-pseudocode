/*
 * XREFs of NtUserfnPOUTLPINT @ 0x1C0203A90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnPOUTLPINT(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  ProbeForWrite(a4, 4 * a3, 4u);
  return ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, volatile void *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a4,
           a5);
}
