/*
 * XREFs of sub_14075C9D4 @ 0x14075C9D4
 * Callers:
 *     sub_14057D548 @ 0x14057D548 (sub_14057D548.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

__int64 __fastcall sub_14075C9D4(__int64 a1, _WORD *a2, _WORD *a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  size_t v10; // rbx
  size_t v11; // rdi
  __int64 v12; // rsi
  size_t v13; // rbp
  PVOID v14; // rax
  __int16 v15; // si
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !a1 )
  {
    v17 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v17 + 1] = -1073740768;
    dword_140C2A220[2 * v17] = 197324;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("ResultString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x2CCu, 0LL);
  }
  if ( !a2 )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v18 + 1] = -1073740768;
    dword_140C2A220[2 * v18] = 197325;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("LeftString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x2CDu, 0LL);
  }
  if ( !a3 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v19 + 1] = -1073740768;
    dword_140C2A220[2 * v19] = 197326;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("RightString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x2CEu, 0LL);
  }
  v8 = -1LL;
  *(_OWORD *)a1 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v10 = 2 * v9;
  do
    ++v8;
  while ( a3[v8] );
  v11 = 2 * v8;
  v12 = -(__int64)(a4 != 0) & 2;
  v13 = v10 + v12 + v11;
  if ( v13 + 1 > 0xFFFE )
    return 2147483653LL;
  v14 = sub_1402D84BC(v13 + 2);
  if ( !v14 )
    return 3221225495LL;
  *(_QWORD *)(a1 + 8) = v14;
  memmove(v14, a2, v10);
  if ( a4 )
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v10 >> 1)) = 92;
  memmove((void *)(*(_QWORD *)(a1 + 8) + 2 * ((v12 + v10) >> 1)), a3, v11);
  v15 = v11 + v10 + v12;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v13 >> 1)) = 0;
  *(_WORD *)a1 = v15;
  *(_WORD *)(a1 + 2) = v15 + 2;
  return 0LL;
}
