/*
 * XREFs of ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800EFA20
 * Callers:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18000235C (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800F1DBC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180001EDC (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E50 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180084F2C (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180086E8C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18008A328 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall ViewHierarchyWithWindowManager::GetAllAncestors(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rdi
  int v5; // r12d
  __int64 v6; // rsi
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // rbx
  _BYTE *v9; // r13
  __int64 v10; // r14
  _BYTE *v11; // r15
  int v12; // r8d
  __int64 *View; // rdi
  void (__fastcall ***v14)(_QWORD, void *, __int64 *); // rcx
  __int64 v15; // rdi
  __int64 *v16; // rdi
  __int64 v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+28h] [rbp-41h] BYREF
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  __int128 v21; // [rsp+38h] [rbp-31h] BYREF
  _BYTE *v22; // [rsp+48h] [rbp-21h]
  __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  __int64 v27; // [rsp+70h] [rbp+7h] BYREF
  int v28; // [rsp+78h] [rbp+Fh]
  int v31; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v28 = 0;
  v21 = 0LL;
  v22 = 0LL;
  ViewHierarchyWithWindowManager::GetView(a1, &v18, a3);
  v6 = v18;
  if ( !v18 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    goto LABEL_43;
  }
  v7 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                            &v18,
                                                            &v20);
  if ( v7 )
  {
    v32 = 0LL;
    (**v7)(
      v7,
      &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
      &v32);
    v8 = v32;
  }
  else
  {
    v8 = 0LL;
  }
  v19 = v8;
  if ( v20 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
  if ( !v8 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    goto LABEL_40;
  }
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
    &v19,
    &v23);
  v9 = (_BYTE *)*((_QWORD *)&v21 + 1);
  v10 = v23;
  v11 = v22;
  while ( v10 )
  {
    v12 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
             &v23,
             &v32);
    v31 = v12;
    if ( v9 == v11 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)&v21, v9, &v31);
      v9 = (_BYTE *)*((_QWORD *)&v21 + 1);
      v12 = v31;
      v11 = v22;
    }
    else
    {
      *(_DWORD *)v9 = v12;
      v9 += 4;
      *((_QWORD *)&v21 + 1) = v9;
    }
    View = ViewHierarchyWithWindowManager::GetView(v4, &v24, v12);
    if ( &v18 != View )
    {
      if ( v6 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
      v6 = *View;
      *View = 0LL;
      v18 = v6;
    }
    if ( v24 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v24);
    v14 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                                                               &v18,
                                                               &v26);
    if ( v14 )
    {
      v25 = 0LL;
      (**v14)(
        v14,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v25);
      v15 = v25;
    }
    else
    {
      v15 = 0LL;
    }
    if ( v8 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
    v8 = v15;
    v19 = v15;
    if ( v26 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v26);
    if ( !v15 )
    {
      v20 = 0LL;
      v16 = &v20;
      v5 |= 4u;
LABEL_30:
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
      v10 = *v16;
      *v16 = 0LL;
      v23 = v10;
      goto LABEL_31;
    }
    v16 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
            &v19,
            &v27);
    v5 |= 2u;
    if ( &v23 != v16 )
      goto LABEL_30;
LABEL_31:
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( v20 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
    }
    v4 = a1;
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v27 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v27);
    }
  }
  v3 = a2;
  *a2 = v21;
  a2[1] = v9;
  a2[2] = v22;
  v21 = 0LL;
  v22 = 0LL;
  if ( v8 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
  if ( v6 )
LABEL_40:
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
LABEL_43:
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v21);
  return v3;
}
