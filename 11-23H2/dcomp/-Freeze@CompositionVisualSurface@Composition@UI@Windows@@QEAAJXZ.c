/*
 * XREFs of ?Freeze@CompositionVisualSurface@Composition@UI@Windows@@QEAAJXZ @ 0x180158E54
 * Callers:
 *     ?CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPEAVCompositionVisualSurface@234@@Z @ 0x180094B24 (-CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPE.c)
 *     ?Freeze@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJXZ @ 0x180158EF0 (-Freeze@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C (-Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVisualSurface::Freeze(
        Windows::UI::Composition::CompositionVisualSurface *this)
{
  __int64 v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((float *)this + 50) < 0.5 || *((float *)this + 51) < 0.5 )
  {
    v2 = Windows::UI::Composition::ApiErrorMessageTable::Lookup(9);
    RoOriginateErrorW(2147942487LL, 0LL, v2);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvisualsurface.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      5,
      1LL);
    return 0LL;
  }
}
