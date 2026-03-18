/*
 * XREFs of NtUserfnINWPARAMCHAR @ 0x1C0202FC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025A63C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall NtUserfnINWPARAMCHAR(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a7 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v11[0] = (unsigned __int16)v12;
      RtlMBMessageWParamCharToWCS(a2, v11);
      v12 = (WORD1(v12) << 16) | LOWORD(v11[0]);
    }
    else
    {
      RtlMBMessageWParamCharToWCS(a2, &v12);
    }
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           v12,
           a4,
           a5);
}
