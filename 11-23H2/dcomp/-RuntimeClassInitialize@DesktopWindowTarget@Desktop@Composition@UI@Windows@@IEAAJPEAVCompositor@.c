/*
 * XREFs of ?RuntimeClassInitialize@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAVCompositor@345@@Z @ 0x1800854B4
 * Callers:
 *     ?RuntimeClassInitialize@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHWND__@@W4_HwndTargetType@@@Z @ 0x1800850F0 (-RuntimeClassInitialize@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition.c)
 *     ?RuntimeClassInitialize@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHWND__@@W4_HwndTargetType@@@Z @ 0x18008534C (-RuntimeClassInitialize@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@@?$vector@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@V?$allocator@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@QEAPEAV23456@AEBQEAV23456@@Z @ 0x180085EDC (--$_Emplace_reallocate@AEBQEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@@-$vector@PEAV.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::RuntimeClassInitialize(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _QWORD *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::Desktop::DesktopWindowTarget *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdesktopwindowtarget.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v9 = this;
    v6 = (_QWORD *)*((_QWORD *)a2 + 110);
    if ( v6 == *((_QWORD **)a2 + 111) )
    {
      std::vector<Windows::UI::Composition::Desktop::DesktopWindowTarget *>::_Emplace_reallocate<Windows::UI::Composition::Desktop::DesktopWindowTarget * const &>(
        (char *)a2 + 872,
        v6,
        &v9);
    }
    else
    {
      *v6 = this;
      *((_QWORD *)a2 + 110) += 8LL;
    }
    return 0LL;
  }
}
