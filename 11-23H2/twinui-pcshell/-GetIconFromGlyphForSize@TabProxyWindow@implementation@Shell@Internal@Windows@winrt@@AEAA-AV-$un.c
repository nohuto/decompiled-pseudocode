/*
 * XREFs of ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18063B2F4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x18021B4D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_18021B4D0.c)
 * Callees:
 *     ?IconGlyph@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800516C0 (-IconGlyph@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1802E7358 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1802E738C (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ?IconFontFamily@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802E865C (-IconFontFamily@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Inte.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18063B250 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x18063BDE8 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
volatile signed __int32 *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3)
{
  LONG v3; // r12d
  __int64 *v5; // rbx
  winrt::impl **v6; // rax
  unsigned int v7; // r8d
  winrt::impl **v8; // rax
  unsigned int v9; // r8d
  LONG v10; // esi
  HSTRING v11; // rbx
  const wchar_t *StringRawBuffer; // rax
  HFONT v13; // r15
  HSTRING v14; // rcx
  HDC CompatibleDC; // rdi
  HBITMAP v16; // r14
  HSTRING v17; // rsi
  unsigned __int16 v18; // r9
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v19; // rcx
  const struct Geometry::CRect *offset; // [rsp+28h] [rbp-D8h]
  volatile signed __int32 *v22; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v23; // [rsp+38h] [rbp-C8h] BYREF
  UINT32 v24; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  unsigned int v27[5]; // [rsp+58h] [rbp-A8h] BYREF
  UINT32 length; // [rsp+6Ch] [rbp-94h] BYREF
  HFONT v29; // [rsp+70h] [rbp-90h]
  HDC v30; // [rsp+78h] [rbp-88h]
  void *ppvBits[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v32; // [rsp+90h] [rbp-70h] BYREF
  BITMAPINFO pbmi; // [rsp+A0h] [rbp-60h] BYREF
  LOGFONTW lf; // [rsp+D0h] [rbp-30h] BYREF

  v3 = a3;
  v22 = a2;
  v26 = a3;
  v23 = 0LL;
  string = 0LL;
  v5 = (__int64 *)(a1 + 48);
  v6 = (winrt::impl **)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconGlyph(
                         (__int64 *)(a1 + 48),
                         &v22);
  winrt::hstring::operator=((volatile signed __int32 **)&v23, v6, v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  v8 = (winrt::impl **)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconFontFamily(
                         v5,
                         &v22);
  winrt::hstring::operator=((volatile signed __int32 **)&string, v8, v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  memset_0(&lf, 0, sizeof(lf));
  v10 = -HIDWORD(v26);
  lf.lfHeight = -HIDWORD(v26);
  lf.lfWeight = 400;
  lf.lfCharSet = 0;
  lf.lfQuality = 5;
  v11 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  StringCchCopyW(lf.lfFaceName, 32LL, StringRawBuffer);
  v13 = CreateFontIndirectW(&lf);
  v29 = v13;
  if ( !v13 )
  {
    *(_QWORD *)a2 = 0LL;
    goto LABEL_3;
  }
  CompatibleDC = CreateCompatibleDC(0LL);
  v30 = CompatibleDC;
  if ( !CompatibleDC )
  {
    *(_QWORD *)a2 = 0LL;
LABEL_9:
    DeleteObject(v13);
LABEL_3:
    if ( v11 )
      WindowsDeleteString(v11);
    v14 = v23;
    if ( v23 )
      goto LABEL_19;
    return a2;
  }
  pbmi.bmiHeader.biSize = 44;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biWidth = v3;
  pbmi.bmiHeader.biHeight = v10;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v16 = CreateDIBSection(CompatibleDC, &pbmi, 0, ppvBits, 0LL, 0);
  ppvBits[1] = v16;
  if ( !v16 )
  {
    *(_QWORD *)a2 = 0LL;
    DeleteDC(CompatibleDC);
    goto LABEL_9;
  }
  v17 = v23;
  v22 = (volatile signed __int32 *)WindowsGetStringRawBuffer(v23, &v24);
  if ( v24 == 1 )
  {
    wil::SelectObject(&v32, CompatibleDC, v16);
    v27[0] = 0;
    v27[1] = 0;
    v27[2] = v3;
    v27[3] = HIDWORD(v26);
    GDIHelpers::RenderTransparentCenteredGlyph(
      CompatibleDC,
      (HDC)v13,
      (HFONT)*(unsigned __int16 *)v22,
      v18,
      (unsigned int)v27,
      offset);
    __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v32);
    *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(v19, v16);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  DeleteObject(v16);
  DeleteDC(CompatibleDC);
  DeleteObject(v13);
  if ( v11 )
    WindowsDeleteString(v11);
  if ( v17 )
  {
    v14 = v17;
LABEL_19:
    WindowsDeleteString(v14);
  }
  return a2;
}
