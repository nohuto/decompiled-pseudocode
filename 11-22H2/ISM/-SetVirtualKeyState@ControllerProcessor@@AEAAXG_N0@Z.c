/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801A6348
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x1801A5838 (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x1801A5D34 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x1801A6900 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z @ 0x1801A69A8 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x18006A8E4 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsGamepadInterceptionActive@GamepadInterceptionHelper@@QEAA_NXZ @ 0x18006A9D0 (-IsGamepadInterceptionActive@GamepadInterceptionHelper@@QEAA_NXZ.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x18006A9E0 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x180072358 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x1800AA6F4 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800AB490 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x1801A2660 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ??$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x1801A2720 (--$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@-$unordered_map@GUActiveKeyP.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A47CC (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x1801A7E8C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 */

void __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3,
        char a4)
{
  float *v4; // r15
  unsigned __int16 v6; // si
  unsigned __int64 appended; // rax
  __int64 v10; // rcx
  __int64 v11; // r11
  char v12; // bl
  char v13; // bl
  unsigned __int64 v14; // rax
  _QWORD *v15; // r11
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rbx
  GamepadInterceptionHelper *v17; // rcx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v22[8]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v28; // [rsp+7Ch] [rbp-84h]
  __int16 v29; // [rsp+9Eh] [rbp-62h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  LOWORD(v21) = a2;
  v4 = (float *)((char *)this + 88);
  v6 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v21, 2uLL);
  v11 = std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
          v4,
          v23,
          &v21,
          appended)[1];
  if ( !v11 )
    v11 = *((_QWORD *)v4 + 1);
  if ( a3 )
  {
    if ( v11 != *((_QWORD *)this + 12) )
      return;
    v22[0] = a4;
    std::unordered_map<unsigned short,ControllerProcessor::ActiveKeyProperties>::_Insert_or_assign<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
      v4,
      (__int64)v23,
      (unsigned __int8 *)&v21,
      v22);
    v6 = v21;
    v12 = a4 ^ 1;
  }
  else
  {
    if ( v11 == *((_QWORD *)this + 12) )
      return;
    v13 = *(_BYTE *)(v11 + 18);
    v14 = std::_Fnv1a_append_bytes(v10, (const unsigned __int8 *const)(v11 + 16), 2uLL);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
      (__int64)v4,
      v15,
      v14 & *((_QWORD *)v4 + 6));
    std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(v4 + 2);
    v12 = v13 == 0;
  }
  if ( v12 )
  {
    GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
    if ( GamepadInterceptionHelper::IsGamepadInterceptionActive(GamepadInterceptionHelper) )
    {
      GamepadInterceptionHelper::InterceptGamepadInput(v17, v6, a3 ^ 1);
    }
    else
    {
      memset_0(v24, 0, 0x170uLL);
      v24[2] = *((_DWORD *)this + 39);
      v25 = *((_QWORD *)this + 20);
      v27 = *((_QWORD *)this + 21);
      v29 = 64;
      v26 = 368;
      v24[0] = 4;
      v28 = v6;
      if ( !a3 )
        v29 = 65;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
      {
        if ( v6 == 7
          || IsEdition(253345LL)
          || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
          || (v18 = *((_DWORD *)this + 1953)) != 0
          && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(GamepadInterceptionHelper, v18) )
        {
          v19 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v24);
          if ( v19 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x9DA,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
              (const char *)(unsigned int)v19,
              v21);
        }
      }
      else if ( v6 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
      {
        v20 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v24);
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x9E6,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v20,
            v21);
      }
    }
  }
}
