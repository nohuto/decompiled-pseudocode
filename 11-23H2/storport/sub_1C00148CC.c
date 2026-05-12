/*
 * XREFs of sub_1C00148CC @ 0x1C00148CC
 * Callers:
 *     sub_1C0014870 @ 0x1C0014870 (sub_1C0014870.c)
 *     sub_1C0075020 @ 0x1C0075020 (sub_1C0075020.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C00148CC(__int64 a1, _BYTE *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v8; // ebx
  void *v9; // rax

  LODWORD(v5) = a3;
  if ( a3 == -1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  if ( (unsigned int)v5 > 0xFFFE )
    return 3221225621LL;
  v8 = (unsigned __int16)v5;
  v9 = (void *)sub_1C0007CF4(64LL, (unsigned __int16)v5 + 1LL, 1396990290LL, a5);
  *(_QWORD *)(a1 + 8) = v9;
  if ( !v9 )
    return 3221225495LL;
  memmove(v9, a2, v8);
  *(_WORD *)a1 = v8;
  *(_WORD *)(a1 + 2) = v8 + 1;
  return 0LL;
}
