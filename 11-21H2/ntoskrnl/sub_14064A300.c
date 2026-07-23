/*
 * XREFs of sub_14064A300 @ 0x14064A300
 * Callers:
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 * Callees:
 *     sub_140204AE4 @ 0x140204AE4 (sub_140204AE4.c)
 *     sub_140205030 @ 0x140205030 (sub_140205030.c)
 *     sub_14064A5F8 @ 0x14064A5F8 (sub_14064A5F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14064A300(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  unsigned int i; // esi
  unsigned __int16 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rbp
  int v13; // eax
  unsigned int v14; // ecx

  v3 = *(_WORD *)(a2 + 16);
  *a3 = 0;
  if ( *(_WORD *)(a1 + 48) != v3 )
    return 3221225485LL;
  for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
  {
    v9 = *(_WORD *)(a1 + 48);
    if ( !v9 )
      return 3221225485LL;
    if ( v9 <= 2u )
    {
LABEL_13:
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * i);
      goto LABEL_14;
    }
    if ( v9 != 3 )
    {
      if ( v9 == 4 )
      {
        v10 = *(_QWORD *)(a2 + 32) + 24LL * i;
        goto LABEL_14;
      }
      if ( v9 != 5 )
      {
        if ( v9 == 6 )
          goto LABEL_13;
        if ( v9 != 16 )
          return 3221225485LL;
      }
    }
    v10 = *(_QWORD *)(a2 + 32) + 16LL * i;
LABEL_14:
    v11 = sub_140205030(a1, v10, v9);
    v12 = (_DWORD *)v11;
    if ( !v11 )
      return 3221226021LL;
    v13 = *(_DWORD *)(v11 + 32);
    if ( (v13 & 4) != 0 )
      return 3221226021LL;
    if ( (v13 & 1) != 0 )
    {
      v12[8] = v13 | 4;
      sub_140204AE4(a1, (__int64)v12, 0, 1);
      ++*(_DWORD *)(a1 + 64);
    }
    else
    {
      sub_14064A5F8(a1, v12, 0LL);
      ExFreePoolWithTag(v12, 0);
    }
  }
  v14 = *(_DWORD *)(a1 + 60);
  result = 0LL;
  if ( v14 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 88) <= v14 )
    *a3 = 1;
  return result;
}
