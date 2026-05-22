/*
 * XREFs of ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90
 * Callers:
 *     ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x18003A7D0 (-RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Gra.c)
 *     ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850 (-RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4.c)
 *     ?EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x180061A78 (-EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061B00 (-BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUta.c)
 *     ?ResumeDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x1800648B8 (-ResumeDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?SuspendDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ @ 0x180064910 (-SuspendDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIUnknown@@@Z @ 0x180064968 (-RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180109EF8 (-BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_G.c)
 *     ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x18010A094 (-CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@.c)
 *     ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x18010A140 (-CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISur.c)
 *     ?HasValidPixels@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x18010A3C0 (-HasValidPixels@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z @ 0x180152D20 (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x18015751C (-SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x180195930 (-CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUt.c)
 *     ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x180195A10 (-CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::TranslateDCompError(Windows::UI::Composition *this)
{
  __int64 result; // rax

  if ( (int)this >= 0 )
    return 0LL;
  result = 2289696773LL;
  if ( (int)this > -2005270523 )
  {
    if ( (_DWORD)this != -2005270522
      && (_DWORD)this != -2005270521
      && (_DWORD)this != -2005270496
      && (_DWORD)this != -2005270494 )
    {
      if ( (_DWORD)this == -2003302399 || (_DWORD)this == -2003302398 )
      {
        return 2148734217LL;
      }
      else if ( (_DWORD)this != -2003238900 )
      {
        return (unsigned int)this;
      }
    }
  }
  else if ( (_DWORD)this != -2005270523 )
  {
    switch ( (_DWORD)this )
    {
      case 0x80004002:
        return 2147942487LL;
      case 0x80070005:
      case 0x8007000E:
      case 0x80070057:
        return (unsigned int)this;
      case 0x8876017C:
        return 2147942414LL;
      case 0x88760870:
      case 0x887A0001:
        break;
      default:
        return (unsigned int)this;
    }
  }
  return result;
}
