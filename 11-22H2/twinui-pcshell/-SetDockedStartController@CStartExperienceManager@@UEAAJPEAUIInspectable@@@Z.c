/*
 * XREFs of ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801E2FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCStartExperienceManager@@@Z @ 0x180136F54 (--$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exce.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$swap@U?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1801E10D4 (--$swap@U-$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU-.c)
 *     ??1?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1801E12BC (--1-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8.c)
 *     ??1?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x1801E1318 (--1-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUd_ea_1801E1318.c)
 *     ?DismissAnimationCompleted@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x1801E1AF4 (-DismissAnimationCompleted@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartContro.c)
 *     ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x1801E1C44 (-Dismissed@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedSta.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::SetDockedStartController(
        CStartExperienceManager *this,
        struct IUnknown *a2,
        void *a3)
{
  char *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  char *v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  char *v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+30h] BYREF
  char **v29; // [rsp+C0h] [rbp+40h] BYREF

  v4 = (char *)this + 544;
  winrt::copy_from_abi((CStartExperienceManager *)((char *)this + 544), a2, a3);
  v29 = (char **)((char *)this - 40);
  wil::com_weak_query<CStartExperienceManager *>(&v28, (__int64 *)&v29);
  v18 = (char *)this - 40;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v19, &v28);
  v29 = &v18;
  v5 = operator new(0x20uLL);
  v5[1] = v18;
  v6 = v19;
  v19 = 0LL;
  v5[2] = v6;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v5 + 6) = 1;
  *v5 = off_1807C4A60;
  v29 = (char **)v5;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  v8 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::DismissAnimationCompleted(
                    (void (__fastcall ****)(_QWORD, void *, _QWORD))v4,
                    (__int64)v26,
                    v7,
                    (__int64)&v29);
  v9 = *v8;
  *v8 = 0LL;
  v22 = v9;
  v23 = v8[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>,0>(&v22, (__int64 *)this + 69);
  v10 = v23;
  v23 = *((_QWORD *)this + 70);
  *((_QWORD *)this + 70) = v10;
  __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAA_XZ(&v22);
  __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAA_XZ(v26);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  v20 = (char *)this - 40;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v21, &v28);
  v29 = &v20;
  v11 = operator new(0x20uLL);
  v11[1] = v20;
  v12 = v21;
  v21 = 0LL;
  v11[2] = v12;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v11 + 6) = 1;
  *v11 = off_1807C4AA0;
  v29 = (char **)v11;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  v14 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::Dismissed(
                     (void (__fastcall ****)(_QWORD, void *, _QWORD))v4,
                     (__int64)v27,
                     v13,
                     (__int64)&v29);
  v15 = *v14;
  *v14 = 0LL;
  v24 = v15;
  v25 = v14[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>,0>(&v24, (__int64 *)this + 71);
  v16 = v25;
  v25 = *((_QWORD *)this + 72);
  *((_QWORD *)this + 72) = v16;
  __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ(&v24);
  __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ(v27);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  return 0LL;
}
