/*
 * XREFs of NtUserfnINLPDRAWITEMSTRUCT @ 0x1C014FE40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserfnINLPDRAWITEMSTRUCT(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _OWORD v11[4]; // [rsp+40h] [rbp-78h] BYREF

  memset(v11, 0, sizeof(v11));
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v11[0] = *a4;
  v11[1] = a4[1];
  v11[2] = a4[2];
  v11[3] = a4[3];
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v11,
           a5);
}
