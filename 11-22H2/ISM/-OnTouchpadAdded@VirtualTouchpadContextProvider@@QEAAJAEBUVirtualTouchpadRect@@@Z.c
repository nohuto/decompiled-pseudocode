/*
 * XREFs of ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9970
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180152E70 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801530A0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnInserted@TouchpadRectListProxy@@MEAAJI@Z @ 0x180158E20 (-OnInserted@TouchpadRectListProxy@@MEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextManager@@@Z @ 0x180033704 (--0-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextMan.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180033740 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A4E04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x18015896C (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 *     ?OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18015CD60 (-OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801C96A4 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualTouchpadContextProvider::OnTouchpadAdded(
        VirtualTouchpadContextProvider *this,
        const struct VirtualTouchpadRect *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  char v6; // al
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v12; // rax
  SystemContextManager *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF
  SystemContextManager *v16; // [rsp+38h] [rbp+10h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 88));
  v4 = (_QWORD *)*((_QWORD *)this + 17);
  v5 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v5 == v4 )
  {
LABEL_4:
    v6 = 0;
  }
  else
  {
    while ( *v5 != *(_QWORD *)a2 )
    {
      v5 += 3;
      if ( v5 == v4 )
        goto LABEL_4;
    }
    v6 = 1;
  }
  if ( v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\virtualtouchpadcontextprovider.cpp",
      (const char *)retaddr);
  if ( v4 == *((_QWORD **)this + 18) )
  {
    std::vector<VirtualTouchpadRect>::_Emplace_reallocate<VirtualTouchpadRect const &>(
      (const void **)this + 16,
      v4,
      (__int64)a2);
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    v4[2] = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 17) += 24LL;
  }
  v7 = VirtualTouchpadContextProvider::Broadcast(this);
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
        &v16,
        v12);
      v13 = v16;
      SystemContextManager::OnTouchpadAdded(v16, a2);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v13 + 2) + 8LL))((__int64)v13 + 16);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\virtualtouchpadcontextprovider.cpp",
      (const char *)(unsigned int)v7);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
    return v9;
  }
}
