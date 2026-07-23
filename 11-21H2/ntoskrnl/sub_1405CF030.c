/*
 * XREFs of sub_1405CF030 @ 0x1405CF030
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CF3DC @ 0x1405CF3DC (sub_1405CF3DC.c)
 */

__int64 __fastcall sub_1405CF030(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  ULONG_PTR v5; // rsi
  __int64 v6; // r14

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v6 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)sub_14042A5E0(v5, 3LL) )
      sub_1405CF3DC(v5, a2, 0x700uLL, *(_DWORD *)(a2 + 16), v6);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
