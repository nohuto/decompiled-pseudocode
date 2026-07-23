/*
 * XREFs of sub_1405CF320 @ 0x1405CF320
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CF3DC @ 0x1405CF3DC (sub_1405CF3DC.c)
 */

__int64 __fastcall sub_1405CF320(__int64 a1, ULONG_PTR a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  ULONG_PTR v5; // rsi
  __int64 v7; // r14
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v3 && *(_QWORD *)(v3 + 104) )
  {
    v7 = a2 + 40;
    if ( (unsigned __int8)sub_14042A5E0(*(_QWORD *)(a1 + 72), a3 != 0 ? 22 : 19) )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 )
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v8 + 192);
      sub_1405CF3DC(v5, a2, 0x703uLL, *(_DWORD *)(a2 + 28), v7);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
