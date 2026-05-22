/*
 * XREFs of ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1801171F4
 * Callers:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180003048 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801195FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002AC0 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180003154 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AE4F4 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x1800B051C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B3A58 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall ViewHierarchyWithWindowManager::GetAllAncestors(unsigned __int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // rdi
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  _BYTE *v12; // r12
  __int64 v13; // rsi
  _BYTE *v14; // r14
  int v15; // r8d
  __int64 *View; // r13
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // rcx
  __int64 v18; // r13
  __int64 *v19; // r13
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-49h] BYREF
  __int64 v23; // [rsp+28h] [rbp-41h] BYREF
  __int64 v24; // [rsp+30h] [rbp-39h] BYREF
  __int128 v25; // [rsp+38h] [rbp-31h] BYREF
  _BYTE *v26; // [rsp+48h] [rbp-21h]
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  __int64 v28; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+68h] [rbp-1h] BYREF
  __int64 v31; // [rsp+70h] [rbp+7h] BYREF
  __int64 v32[9]; // [rsp+78h] [rbp+Fh] BYREF
  int v35; // [rsp+E0h] [rbp+77h] BYREF
  _BYTE *v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = 0;
  v29 = 0;
  v25 = 0LL;
  v36 = 0LL;
  v26 = 0LL;
  ViewHierarchyWithWindowManager::GetView(a1, &v22, a3);
  v7 = v22;
  if ( !v22 )
  {
    v26 = 0LL;
    v25 = 0uLL;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    goto LABEL_45;
  }
  v8 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                            &v22,
                                                            &v28);
  if ( v8 )
  {
    v24 = 0LL;
    (**v8)(
      v8,
      &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
      &v24);
    v9 = v24;
    v10 = v24;
    v11 = v24;
    v5 = v24;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
  }
  v23 = v9;
  if ( v28 )
  {
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v28);
    v11 = v5;
  }
  if ( v10 )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
      &v23,
      &v27);
    v12 = (_BYTE *)*((_QWORD *)&v25 + 1);
    v13 = v27;
    v14 = v36;
    while ( 1 )
    {
      if ( !v13 )
      {
        v36 = v14;
        v26 = 0LL;
        v20 = v25;
        v25 = 0uLL;
        v3 = a2;
        *a2 = v20;
        a2[1] = v12;
        a2[2] = v36;
        if ( v9 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
        if ( v7 )
          goto LABEL_40;
        goto LABEL_45;
      }
      v15 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
               &v27,
               &v36);
      v35 = v15;
      if ( v12 == v14 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)&v25, v12, &v35);
        v14 = v26;
        v12 = (_BYTE *)*((_QWORD *)&v25 + 1);
        v15 = v35;
      }
      else
      {
        *(_DWORD *)v12 = v15;
        v12 += 4;
        *((_QWORD *)&v25 + 1) = v12;
      }
      View = ViewHierarchyWithWindowManager::GetView(v4, &v28, v15);
      if ( &v22 != View )
      {
        if ( v7 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
        v7 = *View;
        *View = 0LL;
        v22 = v7;
      }
      if ( v28 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v28);
      v17 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                                 &v22,
                                                                 &v31);
      if ( v17 )
      {
        v30 = 0LL;
        (**v17)(
          v17,
          &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
          &v30);
        v18 = v30;
      }
      else
      {
        v18 = 0LL;
      }
      if ( v9 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
      v9 = v18;
      v23 = v18;
      if ( v31 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v31);
      if ( !v18 )
        break;
      v19 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
              &v23,
              v32);
      v6 |= 2u;
      if ( &v27 != v19 )
        goto LABEL_30;
LABEL_31:
      if ( (v6 & 4) != 0 )
      {
        v6 &= ~4u;
        if ( v24 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v24);
      }
      v4 = a1;
      if ( (v6 & 2) != 0 )
      {
        v6 &= ~2u;
        if ( v32[0] )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v32);
      }
    }
    v24 = 0LL;
    v19 = &v24;
    v6 |= 4u;
LABEL_30:
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v27);
    v13 = *v19;
    *v19 = 0LL;
    v27 = v13;
    goto LABEL_31;
  }
  v26 = 0LL;
  v25 = 0uLL;
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  if ( v11 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
LABEL_40:
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
LABEL_45:
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v25);
  return v3;
}
