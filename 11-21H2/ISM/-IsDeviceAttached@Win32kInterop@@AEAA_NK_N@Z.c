/*
 * XREFs of ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800E01D0
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180018D90 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800E0580 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800E062C (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800E090C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x1800E0E2C (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003FF48 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULeg.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C06C (--$As@UIInputDeviceInfoStore@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Win32kInterop::IsDeviceAttached(Win32kInterop *this, unsigned int a2, char a3)
{
  __int64 appended; // rax
  int v7; // eax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v12, 4uLL);
  if ( !std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::_Find_last<unsigned long>(
          (_QWORD *)this + 8,
          v9,
          &v12,
          appended)[1] )
  {
    if ( !a3 )
      return 0;
    v11 = 0LL;
    v7 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6,
           &v11);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    if ( (*(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v11 + 24LL))(v11, a2, &v13) < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
      return 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  }
  return 1;
}
