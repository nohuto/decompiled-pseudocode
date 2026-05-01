/*
 * XREFs of ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805B4898
 * Callers:
 *     ?SnapWindow@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAH_KURect@Foundation@Windows@3@IPEAU4563@@Z @ 0x1805B4820 (-SnapWindow@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$_Emplace_reallocate@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAPEAURect@Foundation@Windows@@QEAU234@AEBU234@@Z @ 0x1805B2CC8 (--$_Emplace_reallocate@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$alloc.c)
 *     ??$call_factory@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@V_lambda_628681d27142a38a5eac87ccb28ad64e_@@@impl@winrt@@YA?AURect@Foundation@Windows@1@$$QEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@Z @ 0x1805B3034 (--$call_factory@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@V_lambda_628681d2714.c)
 *     winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e_____lambda_4820608d764e205befb540f09a70bd1e___ @ 0x1805B3528 (winrt--make_winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveShellThread.c)
 *     _lambda_4820608d764e205befb540f09a70bd1e_::_lambda_4820608d764e205befb540f09a70bd1e_ @ 0x1805B35F4 (_lambda_4820608d764e205befb540f09a70bd1e_--_lambda_4820608d764e205befb540f09a70bd1e_.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUPoint@Foundation@Windows@3@XZ @ 0x1805B4BB8 (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ?WorkAreaSize@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUSize@Foundation@Windows@3@XZ @ 0x1805B4BFC (-WorkAreaSize@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagem.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rdi
  int v8; // xmm2_4
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm3_4
  const char *v11; // r9
  _BYTE *v13; // r14
  float *v14; // rbx
  __int64 v15; // rsi
  _BYTE *v16; // rdi
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  const char *v20; // r9
  __int64 v22; // rbx
  signed int v23; // eax
  __int128 v24; // [rsp+30h] [rbp-99h] BYREF
  __int128 v25; // [rsp+40h] [rbp-89h] BYREF
  __int128 v26; // [rsp+50h] [rbp-79h] BYREF
  __int128 *v27; // [rsp+60h] [rbp-69h] BYREF
  __int128 *v28; // [rsp+68h] [rbp-61h]
  __int128 v29; // [rsp+70h] [rbp-59h] BYREF
  _BYTE *v30; // [rsp+80h] [rbp-49h]
  __int128 *v31[3]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v32[40]; // [rsp+A0h] [rbp-29h] BYREF
  char v33[24]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v34[8]; // [rsp+E0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]
  __int64 v36; // [rsp+130h] [rbp+67h] BYREF
  __int64 v37; // [rsp+138h] [rbp+6Fh] BYREF
  char v38; // [rsp+140h] [rbp+77h] BYREF

  v37 = a2;
  v7 = (_QWORD *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaSize(
                   a1 + 64,
                   &v36);
  *(_QWORD *)&v24 = *(_QWORD *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
                                 a1 + 64,
                                 &v38);
  *((_QWORD *)&v24 + 1) = *v7;
  v8 = *(_DWORD *)(a3 + 12);
  v9 = *(_DWORD *)(a3 + 8);
  *(float *)&v10 = *((float *)&v24 + 1) + *(float *)(a3 + 4);
  *(float *)&v26 = *(float *)&v24 + *(float *)a3;
  *(_QWORD *)((char *)&v26 + 4) = __PAIR64__(v9, v10);
  HIDWORD(v26) = v8;
  v27 = &v24;
  v28 = &v26;
  winrt::impl::call_factory<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics,_lambda_628681d27142a38a5eac87ccb28ad64e_>(
    (__int64 *)&v25,
    &v27);
  if ( *(float *)&v25 != *(float *)&v24
    || *((float *)&v25 + 1) != *((float *)&v24 + 1)
    || *((float *)&v25 + 2) != *((float *)&v24 + 2)
    || *((float *)&v25 + 3) != *((float *)&v24 + 3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2F,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      v11);
  }
  v29 = 0LL;
  v13 = 0LL;
  v30 = 0LL;
  v14 = *(float **)a4;
  v15 = *(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8);
  if ( *(_QWORD *)a4 != v15 )
  {
    v16 = (_BYTE *)*((_QWORD *)&v29 + 1);
    do
    {
      v17 = v14[3];
      v18 = v14[2];
      v19 = *((float *)&v24 + 1) + v14[1];
      *(float *)&v25 = *(float *)&v24 + *v14;
      *(_QWORD *)((char *)&v25 + 4) = __PAIR64__(LODWORD(v18), LODWORD(v19));
      *((float *)&v25 + 3) = v17;
      if ( *(float *)&v25 != *(float *)&v26
        || v19 != *((float *)&v26 + 1)
        || v18 != *((float *)&v26 + 2)
        || v17 != *((float *)&v26 + 3) )
      {
        v31[0] = &v24;
        v31[1] = &v25;
        winrt::impl::call_factory<winrt::Windows::UI::Xaml::RectHelper,winrt::Windows::UI::Xaml::IRectHelperStatics,_lambda_628681d27142a38a5eac87ccb28ad64e_>(
          (__int64 *)&v27,
          v31);
        if ( *(float *)&v27 != *(float *)&v24
          || *((float *)&v27 + 1) != *((float *)&v24 + 1)
          || *(float *)&v28 != *((float *)&v24 + 2)
          || *((float *)&v28 + 1) != *((float *)&v24 + 3) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x37,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
            v20);
        }
        if ( v16 == v13 )
        {
          std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect const &>(
            (const void **)&v29,
            v16,
            &v25);
          v13 = v30;
          v16 = (_BYTE *)*((_QWORD *)&v29 + 1);
        }
        else
        {
          *(_OWORD *)v16 = v25;
          v16 += 16;
          *((_QWORD *)&v29 + 1) = v16;
        }
      }
      v14 += 4;
    }
    while ( v14 != (float *)v15 );
  }
  lambda_4820608d764e205befb540f09a70bd1e_::_lambda_4820608d764e205befb540f09a70bd1e_(
    (__int64)v32,
    &v24,
    &v37,
    &v26,
    (__int64 *)&v29,
    (__int64 *)(a1 + 56));
  winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e_____lambda_4820608d764e205befb540f09a70bd1e___(
    &v36,
    (__int64)v32);
  v22 = v36;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 48LL))(*(_QWORD *)(a1 + 72), v36);
  if ( v23 < 0 )
    winrt::throw_hresult(v23);
  if ( v22 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
  if ( v34[0] )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(v34);
  std::vector<Geometry::CRect>::_Tidy((__int64)v33);
  std::vector<Geometry::CRect>::_Tidy((__int64)&v29);
}
