/*
 * XREFs of ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18003360C
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180032D3C (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180124224 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1800334E0 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ??0?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextManager@@@Z @ 0x180033704 (--0-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextMan.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180033740 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180033AE0 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180035638 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x1800C00D8 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18015D034 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall InputConfigContextProvider::Broadcast(InputConfigContextProvider *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  const char *v4; // r9
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v6; // rax
  SystemContextManager *v7; // rbx
  struct InputConfigContextProvider *Instance; // rax
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  char v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  char v13; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  SystemContextManager *v15; // [rsp+70h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 33);
  v2 = *((_QWORD *)this + 32);
  *(_QWORD *)&v10 = -1431655765 * (unsigned int)((v1 - v2) >> 3);
  v3 = 0LL;
  if ( v2 != v1 )
    v3 = v2;
  *((_QWORD *)&v10 + 1) = v3;
  v12 = v10;
  v13 = 1;
  SystemContextProvider::BroadcastMessageToObservers(this, &v12);
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL)
                                            + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL);
    wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::com_ptr_t<SystemContextManager,wil::err_exception_policy>(
      &v15,
      v6);
    v7 = v15;
    if ( *((_QWORD *)v15 + 7) != *((_QWORD *)v15 + 8) )
    {
      v11 = 0;
      Instance = InputConfigContextProvider::GetInstance();
      if ( (int)InputConfigContextProvider::GetCurrentContext((__int64)Instance, (__int64)&v10) >= 0 )
      {
        if ( v11 != 1 )
          std::_Throw_bad_variant_access();
        v9 = SystemContextManager::ProcessInputConfigMessage(v7, (const struct InputConfigContextMessage *)&v10, 0LL);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5A,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v9,
            v10);
      }
      std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)&v10);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v7 + 2) + 8LL))((__int64)v7 + 16);
  }
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)&v12);
}
