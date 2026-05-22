/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180081C68
 * Callers:
 *     ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037D34 (-AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV-$TMilRect@IUMilRectU@.c)
 *     ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4 (-RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 * Callees:
 *     ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x180081D8C (-Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z.c)
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r11
  const struct FastRegion::Internal::CStripe *v4; // r9
  int v5; // ecx
  const struct FastRegion::Internal::CStripe *v6; // r15
  const struct FastRegion::Internal::CStripe *v7; // rbp
  const struct FastRegion::Internal::CStripe *v8; // r11
  const struct FastRegion::Internal::CStripe *v9; // rbx
  const struct FastRegion::Internal::CStripe *v10; // rcx
  const struct FastRegion::Internal::CStripe *v11; // rdx
  const struct FastRegion::Internal::CStripe *v12; // r11
  int v14; // esi
  int v15; // edi
  const struct FastRegion::Internal::CStripe *v16; // rdx
  int v17; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = (const struct FastRegion::Internal::CStripe *)v3;
  v5 = *((_DWORD *)a2 + 3);
  v6 = (const struct FastRegion::Internal::CStripe *)&v3[2 * v2];
  v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * *(int *)a2 + 12);
  if ( *v3 >= v5 )
  {
    v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( *v3 > v5 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)v9;
        if ( *v3 < *(_DWORD *)v9 )
        {
          v11 = (const struct FastRegion::Internal::CStripe *)((char *)v9 - 8);
LABEL_21:
          v10 = (const struct FastRegion::Internal::CStripe *)v3;
          goto LABEL_9;
        }
        v11 = v9;
        v9 = (const struct FastRegion::Internal::CStripe *)((char *)v9 + 8);
        if ( *v3 <= v17 )
          break;
        if ( v9 == v7 )
          return 0;
      }
      if ( v9 != v7 )
        goto LABEL_21;
      return 0;
    }
  }
  else
  {
    v8 = (const struct FastRegion::Internal::CStripe *)(v3 + 2);
    while ( *(_DWORD *)v8 < v5 )
    {
      v8 = (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8);
      if ( v8 == v6 )
        return 0;
    }
    v4 = v8;
    v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( *(_DWORD *)v8 > v5 )
    {
      v10 = (const struct FastRegion::Internal::CStripe *)((char *)v8 - 8);
      goto LABEL_8;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8) == v6 )
      return 0;
  }
  v10 = v4;
LABEL_8:
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_9:
  if ( FastRegion::Internal::CStripe::Intersects(v10, v11) )
    return 1;
  v14 = *(_DWORD *)v9;
  while ( 1 )
  {
    v15 = *(_DWORD *)v12;
    while ( 1 )
    {
      v16 = v9;
      if ( v15 < v14 )
        break;
      v9 = (const struct FastRegion::Internal::CStripe *)((char *)v9 + 8);
      if ( v15 <= v14 )
      {
        if ( (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8) == v6 || v9 == v7 )
          return 0;
        if ( FastRegion::Internal::CStripe::Intersects(v12, v16) )
          return 1;
        v15 = *(_DWORD *)v12;
      }
      else
      {
        if ( v9 == v7 )
          return 0;
        if ( FastRegion::Internal::CStripe::Intersects(
               (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8),
               v16) )
        {
          return 1;
        }
      }
      v14 = *(_DWORD *)v9;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8) == v6 )
      break;
    if ( FastRegion::Internal::CStripe::Intersects(v12, (const struct FastRegion::Internal::CStripe *)((char *)v9 - 8)) )
      return 1;
  }
  return 0;
}
