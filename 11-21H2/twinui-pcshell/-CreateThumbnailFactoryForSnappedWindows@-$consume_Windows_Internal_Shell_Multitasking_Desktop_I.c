/*
 * XREFs of ?CreateThumbnailFactoryForSnappedWindows@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUSnappedWindowThumbnailFactory@Desktop@Multitasking@Shell@Internal@Windows@3@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@AEBURect@Foundation@93@@Z @ 0x180602164
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForSnappedWindows(
        __int64 *a1,
        _QWORD *a2,
        __m128i *a3,
        __int128 *a4)
{
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, __int128 *, __int64 *); // r11
  __int64 v9; // r8
  signed int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    v13 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v7)(
      v7,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice2>,
      &v13);
    v7 = v13;
  }
  v14 = v7;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64 *))(*(_QWORD *)v7 + 48LL);
  v9 = 4LL;
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*a3, 8)) )
    v9 = a3->m128i_i64[0];
  v12 = *a4;
  v10 = v8(v7, a3->m128i_u32[2], v9, &v12, &v15);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  *a2 = v15;
  return a2;
}
