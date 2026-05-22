/*
 * XREFs of ?RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Z @ 0x180018790
 * Callers:
 *     ??$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Details@WRL@Microsoft@@YAJPEAPEAVAppContentRoot@UI@Windows@@$$QEAPEAUICompositionIsland@Composition@45@$$QEAPEAUIInputSite@Input@Internal@45@@Z @ 0x180018600 (--$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@$$QEAPEAVAppContentRoot@45@@Z @ 0x180018860 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@Y.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910 (-InternalRelease@-$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::AppContentRoot::RuntimeClassInitialize(
        Windows::UI::AppContentRoot *this,
        struct Windows::UI::Composition::ICompositionIsland *a2,
        struct Windows::UI::Internal::Input::IInputSite *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::AppContentRoot *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct Windows::UI::Composition::ICompositionIsland **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionIsland *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = (Windows::UI::AppContentRoot *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
  }
  if ( *((struct Windows::UI::Internal::Input::IInputSite **)this + 12) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::UI::Internal::Input::IInputSite *))(*(_QWORD *)a3 + 8LL))(a3);
    v10 = (Windows::UI::AppContentRoot *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a3;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
  }
  v10 = this;
  Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease((char *)this + 88);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::UIContext,Windows::UI::UIContext,Windows::UI::AppContentRoot *>(
         (char *)this + 88,
         &v10);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
