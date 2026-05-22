/*
 * XREFs of ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019DE54
 * Callers:
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A4A0 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnInserted@TouchpadRectListProxy@@MEAAJI@Z @ 0x180130580 (-OnInserted@TouchpadRectListProxy@@MEAAJI@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007B458 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextManager@@@Z @ 0x1800FA098 (--0-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextMan.c)
 *     ??$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAPEAUVirtualTouchpadRect@@QEAU2@AEBU2@@Z @ 0x1801300B4 (--$_Emplace_reallocate@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVi.c)
 *     ?OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x1801343F8 (-OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x18019DB98 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualTouchpadContextProvider::OnTouchpadAdded(
        VirtualTouchpadContextProvider *this,
        const struct VirtualTouchpadRect *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  char v7; // al
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // ebx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v12; // rax
  SystemContextManager *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SystemContextManager *v16; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v17 = v4;
  v5 = (_QWORD *)*((_QWORD *)this + 17);
  v6 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v6 == v5 )
  {
LABEL_4:
    v7 = 0;
  }
  else
  {
    while ( *v6 != *(_QWORD *)a2 )
    {
      v6 += 3;
      if ( v6 == v5 )
        goto LABEL_4;
    }
    v7 = 1;
  }
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      64LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\virtualtouchpadcontextprovider.cpp",
      (const char *)retaddr);
  if ( v5 == *((_QWORD **)this + 18) )
  {
    std::vector<VirtualTouchpadRect>::_Emplace_reallocate<VirtualTouchpadRect const &>(
      (const void **)this + 16,
      v5,
      (__int64)a2);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    v5[2] = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 17) += 24LL;
  }
  v8 = VirtualTouchpadContextProvider::Broadcast(this);
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
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 29) + 8LL)
                                               + 40LL))(*((_QWORD *)InputSystemInternalServerConnection + 29) + 8LL);
      wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        &v16,
        v12);
      v13 = v16;
      SystemContextManager::OnTouchpadAdded(v16, a2);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v13 + 2) + 8LL))((__int64)v13 + 16);
    }
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\virtualtouchpadcontextprovider.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  return v10;
}
