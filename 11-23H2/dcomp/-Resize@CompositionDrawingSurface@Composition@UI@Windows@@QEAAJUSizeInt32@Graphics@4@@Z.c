/*
 * XREFs of ?Resize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18010A52C
 * Callers:
 *     ?Resize@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@@Z @ 0x18010A4A0 (-Resize@Api@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@@Z.c)
 *     ?Resize@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUtagSIZE@@@Z @ 0x18010A5A0 (-Resize@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJUtagSIZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850 (-RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4.c)
 *     ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ @ 0x180061C34 (-IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Resize(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Windows::UI::Composition::CompositionGraphicsDevice::IsValid(*(Windows::UI::Composition::CompositionGraphicsDevice **)(a1 + 160)) )
  {
    v4 = -2005270523;
    v5 = 243LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Windows::UI::Composition::CompositionDrawingSurface::RecreateUnderlying(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 246LL;
    goto LABEL_3;
  }
  return 0LL;
}
