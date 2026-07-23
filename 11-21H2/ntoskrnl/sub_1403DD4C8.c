/*
 * XREFs of sub_1403DD4C8 @ 0x1403DD4C8
 * Callers:
 *     sub_1403BBD58 @ 0x1403BBD58 (sub_1403BBD58.c)
 *     sub_1403DD420 @ 0x1403DD420 (sub_1403DD420.c)
 *     sub_14050E930 @ 0x14050E930 (sub_14050E930.c)
 *     sub_14050EB80 @ 0x14050EB80 (sub_14050EB80.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403DD4C8(__int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx

  v3 = *(_QWORD *)(a1 + 192);
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 > 0x28 )
    v7 = 0x9896800000000000uLL;
  else
    v7 = 10000000 * (1LL << v5) - 10000000;
  v8 = v7 / v3;
  result = *(unsigned int *)(a1 + 224);
  if ( (result & 0x80u) != 0LL )
  {
    LODWORD(v10) = v8;
    v8 = (unsigned int)v8 * (unsigned __int64)*(unsigned int *)(a1 + 216);
  }
  else
  {
    result = 0x989680 / v3;
    v10 = 0x989680 / v3;
  }
  *a2 = v8;
  *a3 = v10;
  return result;
}
