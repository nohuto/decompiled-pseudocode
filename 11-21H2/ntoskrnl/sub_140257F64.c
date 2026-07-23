/*
 * XREFs of sub_140257F64 @ 0x140257F64
 * Callers:
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402E7400 @ 0x1402E7400 (sub_1402E7400.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 * Callees:
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 */

__int64 __fastcall sub_140257F64(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  unsigned int i; // r9d
  __int64 v5; // rax

  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= 0x7FFFFFFEFFFFLL )
    {
      v5 = sub_1402D03D0(a1);
      sub_14028FB74(v5, a2);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
