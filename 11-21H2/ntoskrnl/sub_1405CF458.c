/*
 * XREFs of sub_1405CF458 @ 0x1405CF458
 * Callers:
 *     sub_14023B5A0 @ 0x14023B5A0 (sub_14023B5A0.c)
 * Callees:
 *     sub_14023BABC @ 0x14023BABC (sub_14023BABC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405CF458(__int64 a1, __int64 a2, char a3)
{
  bool v5; // si
  char result; // al
  int v7; // eax
  __int64 v8; // rdx

  v5 = *(_BYTE *)(a1 + 486) || *(_BYTE *)(a1 + 481) != 0xFD && a3;
  result = *(_DWORD *)(a2 + 104) != *(_DWORD *)(a1 + 728);
  if ( a3 )
  {
    *(_DWORD *)(a2 + 104) = 0;
  }
  else if ( *(_DWORD *)(a2 + 104) == *(_DWORD *)(a1 + 728) )
  {
    goto LABEL_10;
  }
  v7 = *(_DWORD *)(a2 + 72);
  v8 = a2 + 64;
  *(_DWORD *)(a2 + 112) = v7;
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(v8 + 12);
  *(_OWORD *)v8 = *(_OWORD *)(a1 + 736);
  *(_OWORD *)(v8 + 16) = *(_OWORD *)(a1 + 752);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 768);
  result = sub_14042A5E0(*(_QWORD *)(a2 + 8), v8);
LABEL_10:
  if ( *(_DWORD *)(a2 + 16) == 1 && !a3 )
    return sub_14023BABC(*(_QWORD *)a2, v5, 0);
  return result;
}
