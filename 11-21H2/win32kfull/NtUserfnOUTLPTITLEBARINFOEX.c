/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1C0109810
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6)
{
  _BYTE *v10; // rdx
  __int64 v11; // rdi
  _OWORD v13[9]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v13, 0, 0x8CuLL);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[139] = v10[139];
  v13[0] = *(_OWORD *)a4;
  v13[1] = *(_OWORD *)(a4 + 16);
  v13[2] = *(_OWORD *)(a4 + 32);
  v13[3] = *(_OWORD *)(a4 + 48);
  v13[4] = *(_OWORD *)(a4 + 64);
  v13[5] = *(_OWORD *)(a4 + 80);
  v13[6] = *(_OWORD *)(a4 + 96);
  v13[7] = *(_OWORD *)(a4 + 112);
  *(_QWORD *)&v13[8] = *(_QWORD *)(a4 + 128);
  DWORD2(v13[8]) = *(_DWORD *)(a4 + 136);
  if ( LODWORD(v13[0]) == 140 )
  {
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
            a1,
            a2,
            a3,
            v13,
            a5);
    *(_OWORD *)a4 = v13[0];
    *(_OWORD *)(a4 + 16) = v13[1];
    *(_OWORD *)(a4 + 32) = v13[2];
    *(_OWORD *)(a4 + 48) = v13[3];
    *(_OWORD *)(a4 + 64) = v13[4];
    *(_OWORD *)(a4 + 80) = v13[5];
    *(_OWORD *)(a4 + 96) = v13[6];
    *(_OWORD *)(a4 + 112) = v13[7];
    *(_QWORD *)(a4 + 128) = *(_QWORD *)&v13[8];
    *(_DWORD *)(a4 + 136) = DWORD2(v13[8]);
  }
  else
  {
    v11 = 0LL;
    UserSetLastError(87LL, (__int64)v13);
  }
  return v11;
}
