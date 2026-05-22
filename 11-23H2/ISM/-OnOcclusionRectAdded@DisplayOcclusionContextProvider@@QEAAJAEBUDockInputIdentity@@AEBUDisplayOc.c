/*
 * XREFs of ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801BCDF4
 * Callers:
 *     ?OnInserted@OcclusionRectListProxy@@MEAAJI@Z @ 0x180149930 (-OnInserted@OcclusionRectListProxy@@MEAAJI@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18019CB80 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextManager@@@Z @ 0x180031F14 (--0-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextMan.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180031F50 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x18014C214 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z @ 0x18014E4F8 (-OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z.c)
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x1801BC73C (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801BCADC (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DisplayOcclusionContextProvider::OnOcclusionRectAdded(
        DisplayOcclusionContextProvider *this,
        const struct DockInputIdentity *a2,
        const struct DisplayOcclusionRect *a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 i; // r11
  __int64 v7; // rcx
  char v8; // al
  _OWORD *v9; // r9
  int v10; // eax
  const char *v11; // r9
  unsigned int v12; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v15; // rax
  SystemContextManager *v16; // rbx
  SystemContextManager *v17; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-B8h]
  __int128 v20; // [rsp+50h] [rbp-A8h]
  __int128 v21; // [rsp+60h] [rbp-98h]
  __int128 v22; // [rsp+70h] [rbp-88h]
  __int128 v23; // [rsp+80h] [rbp-78h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int128 v25; // [rsp+A0h] [rbp-58h]
  __int128 v26; // [rsp+B0h] [rbp-48h]
  __int128 v27; // [rsp+C0h] [rbp-38h]
  __int128 v28; // [rsp+D0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = *((_QWORD *)this + 12);
  v5 = *((_QWORD *)this + 11);
  for ( i = 176LL; ; v5 = i + v7 )
  {
    if ( v5 == v4 )
    {
      v8 = 0;
      goto LABEL_6;
    }
    if ( operator==(v5, (__int64)a2) )
      break;
  }
  v8 = 1;
LABEL_6:
  if ( v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)v4);
  v18 = *(_OWORD *)a3;
  v19 = *((_OWORD *)a3 + 1);
  v20 = *((_OWORD *)a3 + 2);
  v21 = *((_OWORD *)a3 + 3);
  v22 = *((_OWORD *)a3 + 4);
  v23 = *((_OWORD *)a3 + 5);
  v24 = *((_OWORD *)a3 + 6);
  v25 = *((_OWORD *)a3 + 7);
  v26 = *((_OWORD *)a3 + 8);
  v27 = *((_OWORD *)a3 + 9);
  v28 = *((_OWORD *)a3 + 10);
  v18 = *(_OWORD *)a2;
  *(_QWORD *)&v19 = *((_QWORD *)a2 + 2);
  if ( v4 == *((_QWORD *)this + 13) )
  {
    std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(
      (const void **)this + 11,
      (_BYTE *)v4,
      &v18);
  }
  else
  {
    *(_OWORD *)v4 = v18;
    *(_OWORD *)(v4 + 16) = v19;
    *(_OWORD *)(v4 + 32) = v20;
    *(_OWORD *)(v4 + 48) = v21;
    *(_OWORD *)(v4 + 64) = v22;
    *(_OWORD *)(v4 + 80) = v23;
    *(_OWORD *)(v4 + 96) = v24;
    v9 = (_OWORD *)(v4 + 128);
    *(v9 - 1) = v25;
    *v9 = v26;
    v9[1] = v27;
    v9[2] = v28;
    *((_QWORD *)this + 12) += i;
  }
  v10 = DisplayOcclusionContextProvider::Broadcast(this);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( !ISMScenarios::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
        v11);
    if ( !*(_DWORD *)ISMScenarios::s_instance )
    {
      InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL)
                                               + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL);
      wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        &v17,
        v15);
      v16 = v17;
      SystemContextManager::OnOcclusionRectAdded(v17, (const struct DisplayOcclusionRect *)&v18);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v16 + 2) + 8LL))((__int64)v16 + 16);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v10);
    return v12;
  }
}
