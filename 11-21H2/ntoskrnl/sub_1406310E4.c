/*
 * XREFs of sub_1406310E4 @ 0x1406310E4
 * Callers:
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F59C @ 0x14024F59C (sub_14024F59C.c)
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1406310E4(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  int v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  _BYTE v14[64]; // [rsp+40h] [rbp-58h] BYREF

  v11 = 0;
  result = sub_14024F59C(a1, &v11);
  if ( (_DWORD)result )
  {
    v3 = a1[2];
    v12 = *(_OWORD *)a1;
    v13 = v3;
    sub_14024F6E4(v14, 64LL, v12);
    HIDWORD(v12) = 0;
    *(_QWORD *)&v12 = v14;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    EtwTelemetryCoverageReport((__int64 *)&v12);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = HIDWORD(v12);
    *((_DWORD *)a1 + 3) = HIDWORD(v12);
  }
  return result;
}
