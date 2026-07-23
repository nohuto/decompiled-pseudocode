/*
 * XREFs of sub_14075C924 @ 0x14075C924
 * Callers:
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     sub_1407ED3AC @ 0x1407ED3AC (sub_1407ED3AC.c)
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 *     sub_14085C084 @ 0x14085C084 (sub_14085C084.c)
 *     sub_140963878 @ 0x140963878 (sub_140963878.c)
 *     sub_140964E64 @ 0x140964E64 (sub_140964E64.c)
 *     sub_1409651B8 @ 0x1409651B8 (sub_1409651B8.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

__int64 __fastcall sub_14075C924(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  size_t v5; // rbx
  PVOID v6; // rax
  PVOID v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v9 + 1] = -1073740768;
    dword_140C2A220[2 * v9] = 197202;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x252u, 0LL);
  }
  v4 = -1LL;
  *(_OWORD *)a1 = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( v5 > 0xFFFE )
    return 3221225990LL;
  v6 = sub_1402D84BC(v5);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  memmove(v6, a2, v5);
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)a1 = v5 - 2;
  result = 0LL;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
