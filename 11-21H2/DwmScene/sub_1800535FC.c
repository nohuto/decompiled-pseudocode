/*
 * XREFs of sub_1800535FC @ 0x1800535FC
 * Callers:
 *     sub_1800511A0 @ 0x1800511A0 (sub_1800511A0.c)
 *     sub_180053690 @ 0x180053690 (sub_180053690.c)
 * Callees:
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 *     sub_180050C00 @ 0x180050C00 (sub_180050C00.c)
 *     sub_180050F64 @ 0x180050F64 (sub_180050F64.c)
 */

void __fastcall sub_1800535FC(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx

  v2 = (__int64 *)(a1 + 104);
  v3 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3);
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      if ( a2 <= 0x2E8BA2E8BA2E8BA3LL * ((v2[2] - *v2) >> 3) )
        v2[1] = (__int64)sub_180050F64((_QWORD *)v2[1], a2 - v3);
      else
        sub_180050C00(v2, a2);
    }
  }
  else
  {
    v4 = *v2 + 88 * a2;
    sub_180050B9C(v4, v2[1]);
    v2[1] = v4;
  }
}
