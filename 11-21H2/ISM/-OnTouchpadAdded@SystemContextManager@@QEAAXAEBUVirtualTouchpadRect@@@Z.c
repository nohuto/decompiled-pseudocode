/*
 * XREFs of ?OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x1801343F8
 * Callers:
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019DE54 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180131A28 (--0-$com_ptr_t@V-$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@U.c)
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x180131F9C (-Add@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 */

void __fastcall SystemContextManager::OnTouchpadAdded(SystemContextManager *this, const struct VirtualTouchpadRect *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  void (__fastcall ***v5)(_QWORD); // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = *((_QWORD *)this + 8);
  while ( v3 != v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 48LL))(*(_QWORD *)v3 + 8LL);
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>(
      &v8,
      v5);
    v6 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::Add(
           v8,
           (__int64)a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        198LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v8);
    v3 += 8LL;
  }
}
