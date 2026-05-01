/*
 * XREFs of ?OnKeyboardButtonRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180475C10
 * Callers:
 *     ?OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180463270 (-OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18022E74A (-GetForegroundAppId@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?close@?$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x18022F79C (-close@-$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18046EBEC (--0-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@.c)
 *     ?ensure_data@?$tip_test@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@@std@@XZ @ 0x18047DC04 (-ensure_data@-$tip_test@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@.c)
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481BB0 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnKeyboardButtonRequestShow(
        KeyboardHosting::TabTipAdapterPolicy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  KeyboardHosting::TabTipAdapterPolicy *v5; // rbx
  int ShellState; // eax
  __int64 v7; // rdx
  IhmNotification *v8; // rcx
  bool v9; // r8
  std::_Ref_count_base *v10; // rdi
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  struct HWND__ v25[2]; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+38h] [rbp-40h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-30h] BYREF
  std::_Ref_count_base *v28; // [rsp+50h] [rbp-28h]
  __int64 v29; // [rsp+58h] [rbp-20h] BYREF
  std::_Ref_count_base *v30; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  int v32; // [rsp+A0h] [rbp+28h] BYREF
  std::_Ref_count_base *v33; // [rsp+A8h] [rbp+30h] BYREF
  int v34; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+40h] BYREF

  v2 = KeyboardHosting::TabTipAdapterPolicy::HandleInvocationBySystemButton(
         this[14],
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v32);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x974,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  if ( v32 == 1 )
  {
    v34 = 0;
    v35 = 0LL;
    v5 = this[14];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v5, 0LL, &v33, (__int64)&v32, &v34, &v35);
    v3 = ShellState;
    if ( ShellState < 0 )
    {
      v7 = 2429LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)ShellState);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
      return v3;
    }
    ShellState = (*((__int64 (__fastcall **)(char *, _QWORD, _QWORD))this[1] + 4))(
                   (char *)this + 8,
                   (unsigned int)v34,
                   0LL);
    v3 = ShellState;
    if ( ShellState < 0 )
    {
      v7 = 2430LL;
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 132) == *((_DWORD *)this[8] + 191) )
    {
      LOBYTE(v8) = 1;
      IhmNotification::SendKeyboardSetVisible(v8, 0, v9);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  }
  else
  {
    *(_OWORD *)v26 = 0LL;
    v10 = (std::_Ref_count_base *)operator new(0xD8uLL);
    v33 = v10;
    *(_OWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 1;
    *((_DWORD *)v10 + 3) = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>>::`vftable';
    tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>(
      (__int64)v10 + 16,
      0LL,
      0LL);
    v27 = (_DWORD *)((char *)v10 + 16);
    v28 = v10;
    std::shared_ptr<KBViewInfo>::operator=(v26, (__int64 *)&v27);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v26) )
    {
      v11 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::ensure_data(v26);
      v12 = (volatile signed __int32 *)v11[1];
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v12 = (volatile signed __int32 *)v11[1];
      }
      v13 = *v11;
      v29 = v13;
      v30 = (std::_Ref_count_base *)v12;
      tip::details::test_common_data<1>::begin_update(v13 + 8);
      v14 = v13 + 192;
      v15 = 48LL;
      if ( !v13 )
        v14 = 48LL;
      v16 = *(_DWORD *)v14;
      tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(&v29);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      if ( !v16 )
      {
        v17 = (__int64 *)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::ensure_data(v26);
        v18 = (volatile signed __int32 *)v17[1];
        if ( v18 )
        {
          _InterlockedIncrement(v18 + 2);
          v18 = (volatile signed __int32 *)v17[1];
        }
        v19 = *v17;
        v27 = (_DWORD *)v19;
        v28 = (std::_Ref_count_base *)v18;
        tip::details::test_common_data<1>::begin_update(v19 + 8);
        TouchKeyboardExperienceManager::GetForegroundAppId((LPVOID *)v25, v20, v21, v22);
        if ( *(_QWORD *)&v25[0].unused )
        {
          v23 = v19 + 160;
          if ( !v19 )
            v23 = 16LL;
          v24 = -1LL;
          do
            ++v24;
          while ( *(_WORD *)(*(_QWORD *)&v25[0].unused + 2 * v24) );
          std::wstring::assign((char *)v23, *(const void **)&v25[0].unused, v24);
        }
        if ( v19 )
          v15 = v19 + 192;
        *(_DWORD *)v15 = 5;
        tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close((__int64 *)&v27);
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((__int64 *)v26);
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)v25);
        tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close((__int64 *)&v27);
        if ( v28 )
          std::_Ref_count_base::_Decref(v28);
      }
    }
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
  }
  return 0LL;
}
