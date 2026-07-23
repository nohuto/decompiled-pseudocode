/*
 * XREFs of sub_14042B7A0 @ 0x14042B7A0
 * Callers:
 *     sub_1406CDFAC @ 0x1406CDFAC (sub_1406CDFAC.c)
 * Callees:
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 */

__int64 __fastcall sub_14042B7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 CurrentIrql; // rax
  int v7; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v9; // r10
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v11[0] = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  _InterlockedExchange64(v11, CurrentIrql);
  RtlCaptureContext(*((PCONTEXT *)KeGetCurrentPrcb() + 4408));
  sub_14041F720((__int64)KeGetCurrentPrcb() + 256, v7);
  CurrentPrcb = KeGetCurrentPrcb();
  *((_QWORD *)CurrentPrcb + 52) = v11[0];
  v9 = (_QWORD *)*((_QWORD *)CurrentPrcb + 4408);
  v9[16] = a1;
  *(_QWORD *)((char *)v9 + 68) = v11[1];
  v9[19] = &retaddr;
  v9[31] = sub_14042B7A0;
  __writecr8(v11[0]);
  return sub_140A6CC50(a1, a5);
}
