/*
 * XREFs of ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180029E7C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x180029960 (std--_Func_impl_no_alloc__lambda_82f4e949cc86c4cc5d6fceb255c2514d__void__MIT_INPUT__ea_180029960.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800FA218 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 * Callees:
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180029E20 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180040EF8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180044B80 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180097384 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800FA2C4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1800FA300 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1800FA354 (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801346CC (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
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
  int v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-28h]
  _BYTE v13[24]; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v10[1] = 0;
  v1 = *((_QWORD *)this + 33);
  v2 = *((_QWORD *)this + 32);
  v10[0] = -1431655765 * ((v1 - v2) >> 3);
  v3 = 0LL;
  if ( v2 != v1 )
    v3 = v2;
  v11 = v3;
  v12 = 1;
  SystemContextProvider::BroadcastMessageToObservers((__int64)this, (__int64)v10);
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 29) + 8LL)
                                            + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 29) + 8LL);
    v7 = (SystemContextManager *)v6;
    if ( v6 )
      (**(void (__fastcall ***)(__int64))(v6 + 16))(v6 + 16);
    if ( *((_QWORD *)v7 + 7) != *((_QWORD *)v7 + 8) )
    {
      v14 = 0;
      Instance = InputConfigContextProvider::GetInstance();
      if ( (int)InputConfigContextProvider::GetCurrentContext(Instance, v13) >= 0 )
      {
        if ( v14 != 1 )
          std::_Throw_bad_variant_access();
        v9 = SystemContextManager::ProcessInputConfigMessage(v7, (const struct InputConfigContextMessage *)v13, 0LL);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5A,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v9,
            v10[0]);
      }
      std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(v13);
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v7 + 2) + 8LL))((_QWORD *)v7 + 2);
  }
  if ( v12 != -1 && v12 && v12 != 1 )
  {
    if ( v12 == 2 )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v10);
    }
    else if ( v12 == 3 )
    {
      std::vector<VirtualTouchpadRect>::_Tidy(v10);
    }
  }
}
