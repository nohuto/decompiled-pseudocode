/*
 * XREFs of ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806852A8
 * Callers:
 *     ?SnapWindow@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAH_KURect@Foundation@Windows@3@IPEAU4563@@Z @ 0x180685230 (-SnapWindow@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wind.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$emplace_back@AEBURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA?A_TAEBURect@Foundation@Windows@@@Z @ 0x180678F84 (--$emplace_back@AEBURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___ @ 0x18068252C (winrt--make_winrt--Windows--Internal--Shell--SnapComponent--implementation--Immersi_ea_18068252C.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x180682D68 (--9Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 *     ?DispatchToImmersiveShellThread@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcher@UIImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x180683520 (-DispatchToImmersiveShellThread@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellTh.c)
 *     ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x1806848A4 (-IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  const struct winrt::Windows::Foundation::Rect *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-38h]
  _QWORD v18[3]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
          this,
          a3) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80070057LL,
      v13);
  v14 = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  v9 = *(const struct winrt::Windows::Foundation::Rect **)a4;
  v10 = *(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8);
  if ( v9 != (const struct winrt::Windows::Foundation::Rect *)v10 )
  {
    do
    {
      if ( winrt::Windows::Foundation::operator!=((float *)v9, (float *)a3) )
      {
        if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
                this,
                v9) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xF9,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
            (const char *)0x80070057LL,
            v13);
        std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect const &>((__int64)&v14, v9);
      }
      v9 = (const struct winrt::Windows::Foundation::Rect *)((char *)v9 + 16);
    }
    while ( v9 != (const struct winrt::Windows::Foundation::Rect *)v10 );
    v8 = v15;
  }
  v16 = a2;
  v17 = *(_OWORD *)a3;
  v15 = 0LL;
  v11 = *((_QWORD *)&v14 + 1);
  v12 = v14;
  v14 = 0uLL;
  v18[0] = v12;
  v18[1] = v11;
  v18[2] = v8;
  v19[0] = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
  winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___(
    &v13,
    (__int64)&v16);
  winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcher<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>::DispatchToImmersiveShellThread(
    (_QWORD *)this + 11,
    &v13);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  if ( v19[0] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v19);
  std::vector<Geometry::CRect>::_Tidy((__int64)v18);
  std::vector<Geometry::CRect>::_Tidy((__int64)&v14);
}
