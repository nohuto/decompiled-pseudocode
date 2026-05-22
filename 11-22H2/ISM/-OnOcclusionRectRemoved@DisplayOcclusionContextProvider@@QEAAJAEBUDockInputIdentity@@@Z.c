/*
 * XREFs of ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801CA8BC
 * Callers:
 *     ?OnRemoved@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180157D80 (-OnRemoved@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x1801AAB60 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextManager@@@Z @ 0x180033704 (--0-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextMan.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180033740 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x18015A4F4 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18015C884 (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801CA344 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DisplayOcclusionContextProvider::OnOcclusionRectRemoved(
        DisplayOcclusionContextProvider *this,
        const struct DockInputIdentity *a2)
{
  __int64 v4; // r8
  __int64 i; // rcx
  char v6; // al
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v12; // rax
  SystemContextManager *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SystemContextManager *v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 12);
  for ( i = *((_QWORD *)this + 11); ; i += 176LL )
  {
    if ( i == v4 )
    {
      v6 = 1;
      goto LABEL_6;
    }
    if ( operator==(i, (__int64)a2) )
      break;
  }
  v6 = 0;
LABEL_6:
  if ( v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x75,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)retaddr);
  memmove_0((void *)i, (const void *)(i + 176), v4 - (i + 176));
  *((_QWORD *)this + 12) -= 176LL;
  v7 = DisplayOcclusionContextProvider::Broadcast(this);
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v8);
    if ( !*(_DWORD *)ISMScenarios::s_instance )
    {
      InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL)
                                               + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL);
      wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        &v15,
        v12);
      v13 = v15;
      SystemContextManager::OnOcclusionRectRemoved(v15, a2);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v13 + 2) + 8LL))((__int64)v13 + 16);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v7);
    return v9;
  }
}
