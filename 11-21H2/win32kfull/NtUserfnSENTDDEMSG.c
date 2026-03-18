/*
 * XREFs of NtUserfnSENTDDEMSG @ 0x1C0203B60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnSENTDDEMSG(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a6 == 692 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))qword_1C03352E0)(
             a1,
             a2 | 0x40000000u,
             a3,
             a4,
             a5);
  else
    return 0LL;
}
