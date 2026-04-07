/*
 * XREFs of ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x18006BAE8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B634 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800AC604 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAfterAtlasImage(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        struct CAtlasedImage *a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  unsigned int v6; // eax
  struct CAtlasedImage **i; // r9
  unsigned int v8; // ebx
  int inserted; // eax

  v4 = 0;
  if ( a3 )
  {
    v5 = *((_DWORD *)this + 68);
    v6 = 0;
    for ( i = (struct CAtlasedImage **)*((_QWORD *)this + 31); v6 < v5; ++i )
    {
      if ( a3 == *i )
        break;
      ++v6;
    }
    if ( v6 == v5 )
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x38u);
      return v8;
    }
    v4 = v6 + 1;
  }
  inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, a2, v4);
  v8 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3Fu);
  return v8;
}
