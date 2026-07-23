/*
 * XREFs of sub_14066CF00 @ 0x14066CF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402033F0 @ 0x1402033F0 (sub_1402033F0.c)
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 */

__int64 __fastcall sub_14066CF00(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int *a5)
{
  bool v8; // al
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  int v11; // eax

  v8 = sub_1402033F0(a3, a4);
  v10 = v9 & 0xFFFFFFFE;
  if ( !v8 )
    v10 = v9;
  if ( (v10 & *a5) != 0 && (unsigned __int8)sub_14066CFE4(a2, a3, a4) )
    return 3221225506LL;
  if ( *(_QWORD *)(a4 + 2240) && !*(_QWORD *)(a3 + 2240) && a2 && (~DWORD2(xmmword_140C1BE40) & *a5) != 0 )
    return 3221225506LL;
  v11 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 2172) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v11 |= 0x1000u;
    *a5 = v11;
  }
  if ( (v11 & 0x200) != 0 )
    *a5 = v11 | 0x2000;
  return 0LL;
}
