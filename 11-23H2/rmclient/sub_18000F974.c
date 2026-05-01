/*
 * XREFs of sub_18000F974 @ 0x18000F974
 * Callers:
 *     sub_18000A774 @ 0x18000A774 (sub_18000A774.c)
 *     sub_18000CF64 @ 0x18000CF64 (sub_18000CF64.c)
 *     sub_180015620 @ 0x180015620 (sub_180015620.c)
 * Callees:
 *     sub_180011428 @ 0x180011428 (sub_180011428.c)
 *     sub_180012160 @ 0x180012160 (sub_180012160.c)
 */

__int64 __fastcall sub_18000F974(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned int *v3; // rbx
  __int64 result; // rax

  v1 = *(unsigned int **)(a1 + 56);
  v3 = *(unsigned int **)(a1 + 48);
  result = (char *)v1 - (char *)v3;
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      sub_180012160(*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    return sub_180011428(0LL, 254LL, 0LL, 0LL);
  }
  return result;
}
