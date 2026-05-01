/*
 * XREFs of ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806854F0
 * Callers:
 *     ?SnapWindows@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@IPEAURect@Foundation@Windows@3@@Z @ 0x180685460 (-SnapWindows@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x180681220 (--$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@-$vector@U-$pair@_KURect@Foundat.c)
 *     winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___ @ 0x180682488 (winrt--make_winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveShellThread.c)
 *     ?DispatchToImmersiveShellThread@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcher@UIImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x180683520 (-DispatchToImmersiveShellThread@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellTh.c)
 *     ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x1806848A4 (-IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@w.c)
 *     ?_Reallocate_exactly@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAX_K@Z @ 0x180685CB4 (-_Reallocate_exactly@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pa.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindows(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        __int64 a2,
        __int64 *a3)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v5; // r8
  unsigned int v6; // edi
  char *v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  char *v10; // rbx
  const struct winrt::Windows::Foundation::Rect *v11; // r15
  _QWORD *v12; // r8
  void *v13; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  char *v15; // [rsp+30h] [rbp-30h]
  void *v16[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v5 = this;
  v6 = *(_DWORD *)(a2 + 8);
  if ( *((_DWORD *)a3 + 2) != v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x112,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80070057LL,
      v14);
  v14 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  if ( v6 )
  {
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocate_exactly(&v14, v6, this);
    v7 = v15;
    v5 = this;
  }
  v8 = 0;
  if ( v6 )
  {
    v9 = *a3;
    v21 = *a3;
    v10 = (char *)*((_QWORD *)&v14 + 1);
    do
    {
      v11 = (const struct winrt::Windows::Foundation::Rect *)(v9 + 16LL * v8);
      if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
              v5,
              v11) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x11B,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
          (const char *)0x80070057LL,
          v14);
      v12 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v8);
      if ( v10 == v7 )
      {
        std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Emplace_reallocate<unsigned __int64 const &,winrt::Windows::Foundation::Rect const &>(
          (__int64 *)&v14,
          (__int64)v10,
          v12,
          v11);
        v7 = v15;
        v10 = (char *)*((_QWORD *)&v14 + 1);
      }
      else
      {
        *(_QWORD *)v10 = *v12;
        *(_OWORD *)(v10 + 8) = *(_OWORD *)v11;
        v10 += 24;
        *((_QWORD *)&v14 + 1) = v10;
      }
      ++v8;
      v5 = this;
      v9 = v21;
    }
    while ( v8 < v6 );
  }
  else
  {
    v10 = (char *)*((_QWORD *)&v14 + 1);
  }
  v15 = 0LL;
  v13 = (void *)v14;
  v14 = 0uLL;
  v16[0] = v13;
  v16[1] = v10;
  v17 = (__int64)v7;
  v18[0] = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
  winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___(
    &v21,
    (__int64 *)v16);
  winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcher<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>::DispatchToImmersiveShellThread(
    (_QWORD *)this + 11,
    &v21);
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  if ( v18[0] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v18);
  if ( v16[0] )
    std::_Deallocate<16,0>(v16[0], 8 * ((signed __int64)(v17 - (unsigned __int64)v16[0]) >> 3));
}
