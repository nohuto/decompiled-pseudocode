/*
 * XREFs of sub_14075CDF8 @ 0x14075CDF8
 * Callers:
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 *     sub_14075ECF4 @ 0x14075ECF4 (sub_14075ECF4.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

__int64 __fastcall sub_14075CDF8(__int64 a1, const void **a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  _WORD *v6; // rax
  _WORD *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v9 + 1] = -1073740768;
    dword_140C2A220[2 * v9] = 197261;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x28Du, 0LL);
  }
  *(_OWORD *)a1 = 0LL;
  v4 = *(unsigned __int16 *)a2;
  v5 = v4 + 2;
  v6 = sub_1402D84BC(v4 + 2);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  memmove(v6, a2[1], (unsigned int)v4);
  v7[(v5 >> 1) - 1] = 0;
  *(_WORD *)a1 = v4;
  result = 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
