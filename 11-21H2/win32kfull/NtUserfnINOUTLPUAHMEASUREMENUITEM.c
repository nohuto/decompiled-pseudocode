/*
 * XREFs of NtUserfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0202670
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTLPUAHMEASUREMENUITEM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  _BYTE *v10; // rdx
  __int64 result; // rax
  _OWORD v12[7]; // [rsp+50h] [rbp-A8h] BYREF

  memset(v12, 0, sizeof(v12));
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[111] = v10[111];
  v12[0] = *a4;
  v12[1] = a4[1];
  v12[2] = a4[2];
  v12[3] = a4[3];
  v12[4] = a4[4];
  v12[5] = a4[5];
  v12[6] = a4[6];
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v12,
             a5);
  *a4 = v12[0];
  a4[1] = v12[1];
  a4[2] = v12[2];
  a4[3] = v12[3];
  a4[4] = v12[4];
  a4[5] = v12[5];
  a4[6] = v12[6];
  return result;
}
