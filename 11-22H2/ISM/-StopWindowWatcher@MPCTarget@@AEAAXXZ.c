/*
 * XREFs of ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x18011BD5C
 * Callers:
 *     ??1MPCTarget@@UEAA@XZ @ 0x18011B104 (--1MPCTarget@@UEAA@XZ.c)
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18011B9E0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AFD7C (-Stop@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatche.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCTarget::StopWindowWatcher(MPCTarget *this)
{
  __int64 *v2; // rbx
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  v3 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 8);
  if ( v3 )
  {
    v5 = 0LL;
    (**v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>,
      &v5);
    v4 = v5;
    v6 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 248LL))(v5, *((_QWORD *)this + 9));
      *((_QWORD *)this + 9) = 0LL;
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stop(v2);
    if ( v2 != &v5 )
    {
      if ( *v2 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
      *v2 = 0LL;
    }
    if ( v4 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
  }
}
