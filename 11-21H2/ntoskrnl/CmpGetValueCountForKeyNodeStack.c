/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x1402260D0
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140225E68 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140200068 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpValueEnumStackAdvance @ 0x14065AED8 (CmpValueEnumStackAdvance.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackCleanup @ 0x14069F374 (CmpSortedValueEnumStackCleanup.c)
 *     CmpValueEnumStackCleanup @ 0x14069F3D4 (CmpValueEnumStackCleanup.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpValueEnumStackInitialize @ 0x14069F47C (CmpValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackInitialize @ 0x14069F4C8 (CmpSortedValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackAdvance @ 0x140921AA8 (CmpSortedValueEnumStackAdvance.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140921D8C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(__int16 *a1, _DWORD *a2)
{
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v5; // r9
  char v6; // r10
  __int16 v7; // r11
  int v8; // ebx
  int v10; // eax
  int v11; // esi
  int i; // eax
  int j; // eax
  _BYTE v14[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v15[96]; // [rsp+80h] [rbp-39h] BYREF

  memset(v14, 0, 0x58uLL);
  memset(v15, 0, 0x58uLL);
  CmpSortedValueEnumStackInitialize(v14);
  CmpValueEnumStackInitialize(v15);
  if ( *a1 >= 0 )
  {
    do
      EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
    while ( (!EntryAtLayerHeight[2] || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight))
         && (__int16)(v5 - 1) >= 0 );
    if ( v7 )
    {
      if ( !v6 )
      {
        *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1) + 16) + 36LL);
        goto LABEL_7;
      }
      if ( v7 > 1 )
      {
        v10 = CmpSortedValueEnumStackStartFromKeyNodeStack(v14, a1);
        v8 = v10;
        if ( v10 >= 0 )
        {
          v11 = 0;
          for ( i = CmpSortedValueEnumStackAdvance(v14); ; i = CmpSortedValueEnumStackAdvance(v14) )
          {
            v8 = i;
            if ( i == -2147483622 )
              break;
            if ( i < 0 )
              goto LABEL_8;
            ++v11;
          }
LABEL_17:
          *a2 = v11;
          goto LABEL_7;
        }
        if ( v10 != -1073741670 )
          goto LABEL_8;
        CmpSortedValueEnumStackCleanup(v14);
        CmpSortedValueEnumStackInitialize(v14);
      }
      v8 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v15, a1);
      if ( v8 < 0 )
        goto LABEL_8;
      v11 = 0;
      for ( j = CmpValueEnumStackAdvance(v15); ; j = CmpValueEnumStackAdvance(v15) )
      {
        v8 = j;
        if ( j == -2147483622 )
          break;
        if ( j < 0 )
          goto LABEL_8;
        ++v11;
      }
      goto LABEL_17;
    }
  }
  *a2 = 0;
LABEL_7:
  v8 = 0;
LABEL_8:
  CmpValueEnumStackCleanup(v15);
  CmpSortedValueEnumStackCleanup(v14);
  return (unsigned int)v8;
}
