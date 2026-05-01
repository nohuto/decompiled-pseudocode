/*
 * XREFs of ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x1802DAB6A
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x18051C52C (-_Clear_and_reserve_geometric@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std.c)
 */

__int64 __fastcall ViewOptions::operator=(__int64 a1, __int64 a2)
{
  void **v2; // rsi
  const void *v4; // rbp
  signed __int64 v5; // r14
  char *v6; // rbx

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v2 = (void **)(a1 + 32);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 32 )
  {
    v4 = *(const void **)(a2 + 32);
    v5 = *(_QWORD *)(a2 + 40) - (_QWORD)v4;
    if ( v5 >> 4 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 4) )
      std::vector<Geometry::CRect>::_Clear_and_reserve_geometric(a1 + 32);
    v6 = (char *)*v2;
    memmove_0(*v2, v4, v5);
    v2[1] = &v6[v5];
  }
  return a1;
}
