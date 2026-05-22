/*
 * XREFs of ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18019EE70
 * Callers:
 *     ?OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18012F450 (-OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017D9DC (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextManager@@@Z @ 0x1800FA098 (--0-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextMan.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x180131D14 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013403C (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x18019E7C0 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
        DisplayOcclusionContextProvider *this,
        const struct DockInputIdentity *a2,
        const struct tagRECT *a3)
{
  DisplayOcclusionContextProvider *v5; // r9
  __int64 i; // rcx
  char v7; // al
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v13; // rax
  SystemContextManager *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SystemContextManager *v16; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  for ( i = *((_QWORD *)this + 11); ; i += 176LL )
  {
    if ( i == *((_QWORD *)v5 + 12) )
    {
      v7 = 1;
      goto LABEL_6;
    }
    if ( operator==(i, (__int64)a2) )
      break;
  }
  v7 = 0;
LABEL_6:
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      92LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)v5);
  *(struct tagRECT *)(i + 24) = *a3;
  v8 = DisplayOcclusionContextProvider::Broadcast(v5);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        28LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v9);
    if ( !*(_DWORD *)ISMScenarios::s_instance )
    {
      InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 29) + 8LL)
                                               + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 29) + 8LL);
      wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        &v16,
        v13);
      v14 = v16;
      SystemContextManager::OnOcclusionRectUpdated(v16, a2, a3);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v14 + 2) + 8LL))((__int64)v14 + 16);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v8);
    return v10;
  }
}
