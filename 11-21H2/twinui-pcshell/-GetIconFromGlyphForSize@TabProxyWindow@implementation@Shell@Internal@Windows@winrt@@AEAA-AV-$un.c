/*
 * XREFs of ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x1801BB400 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_1801BB400.c)
 * Callees:
 *     ?IconGlyph@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180024C88 (-IconGlyph@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800F2B2C (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64 (--1-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integr.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1?DeleteDC@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180237828 (--1-$unique_storage@U-$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1-DeleteDC@@YAH0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1802384AC (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18054F470 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180554BF0 (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18057B584 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ?IconFontFamily@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x18057BB68 (-IconFontFamily@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Inte.c)
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x18057C088 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
HICON *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
        __int64 a1,
        HICON *a2,
        HDC a3)
{
  LONG v3; // esi
  __int64 v5; // rbx
  winrt::impl **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  winrt::impl **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  LONG v15; // edi
  const wchar_t *StringRawBuffer; // rax
  HFONT v17; // r14
  HDC CompatibleDC; // rbx
  HBITMAP v19; // rdi
  PCWSTR v20; // r12
  unsigned __int16 v21; // r9
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v22; // rcx
  const struct Geometry::CRect *offset; // [rsp+28h] [rbp-D8h]
  HBITMAP v25; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v27; // [rsp+40h] [rbp-C0h] BYREF
  HDC v28; // [rsp+48h] [rbp-B8h] BYREF
  HFONT v29; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 v30; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31[4]; // [rsp+60h] [rbp-A0h] BYREF
  UINT32 length; // [rsp+70h] [rbp-90h] BYREF
  void *ppvBits; // [rsp+78h] [rbp-88h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  BITMAPINFO pbmi; // [rsp+90h] [rbp-70h] BYREF
  LOGFONTW lf; // [rsp+C0h] [rbp-40h] BYREF

  v3 = (int)a3;
  v25 = (HBITMAP)a2;
  v28 = a3;
  v27 = 0LL;
  string = 0LL;
  v5 = a1 + 48;
  v6 = (winrt::impl **)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconGlyph(
                         (__int64 *)(a1 + 48),
                         &v25);
  winrt::hstring::operator=((struct winrt::impl::hstring_header **)&v27, v6);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v25, v7, v8, v9);
  v10 = (winrt::impl **)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconFontFamily(
                          v5,
                          &v25);
  winrt::hstring::operator=((struct winrt::impl::hstring_header **)&string, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v25, v11, v12, v13);
  memset_0(&lf, 0, sizeof(lf));
  v14 = HIDWORD(v28);
  v15 = -HIDWORD(v28);
  lf.lfHeight = -HIDWORD(v28);
  lf.lfWeight = 400;
  lf.lfCharSet = 0;
  lf.lfQuality = 5;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  StringCchCopyW(lf.lfFaceName, 32LL, StringRawBuffer);
  v17 = CreateFontIndirectW(&lf);
  v29 = v17;
  if ( v17 )
  {
    CompatibleDC = CreateCompatibleDC(0LL);
    v28 = CompatibleDC;
    if ( CompatibleDC )
    {
      pbmi.bmiHeader.biSize = 44;
      memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
      pbmi.bmiHeader.biWidth = v3;
      pbmi.bmiHeader.biHeight = v15;
      *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
      v19 = CreateDIBSection(CompatibleDC, &pbmi, 0, &ppvBits, 0LL, 0);
      v25 = v19;
      if ( v19 && (v20 = WindowsGetStringRawBuffer(v27, &v30), v30 == 1) )
      {
        wil::SelectObject(&v34, CompatibleDC, v19);
        v31[0] = 0;
        v31[1] = 0;
        v31[2] = v3;
        v31[3] = v14;
        GDIHelpers::RenderTransparentCenteredGlyph(CompatibleDC, (HDC)v17, (HFONT)*v20, v21, (unsigned int)v31, offset);
        __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v34);
        *a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(v22, v19);
      }
      else
      {
        *a2 = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v25);
    }
    else
    {
      *a2 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>(&v28);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)&v29);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v27);
  return a2;
}
