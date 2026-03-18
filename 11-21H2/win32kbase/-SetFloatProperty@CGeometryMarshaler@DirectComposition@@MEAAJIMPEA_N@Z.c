/*
 * XREFs of ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C021F190
 * Callers:
 *     ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C009CB30 (-SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CGeometryMarshaler::SetFloatProperty(
        DirectComposition::CGeometryMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( a2 )
  {
    case 1u:
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 22) = a3;
      goto LABEL_8;
    case 2u:
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 23) = a3;
      goto LABEL_8;
    case 3u:
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 24) = a3;
LABEL_8:
      *a4 = 1;
      return v4;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
