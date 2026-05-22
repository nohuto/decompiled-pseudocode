/*
 * XREFs of ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x180151CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801518F0 (-erase@-$vector@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpointProxy::OnDisconnected(SystemContextEndpointProxy *this)
{
  __int64 v2; // r9
  SystemContextEndpointProxy **i; // r8
  char v4; // al
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 8);
  for ( i = *(SystemContextEndpointProxy ***)(v2 + 56); ; ++i )
  {
    if ( i == *(SystemContextEndpointProxy ***)(v2 + 64) )
    {
      v4 = 1;
      goto LABEL_6;
    }
    if ( *i == this )
      break;
  }
  v4 = 0;
LABEL_6:
  if ( v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
      (const char *)v2);
  std::vector<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>::erase(v2 + 56, &v8, (__int64)i);
  v5 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 8LL))(v5 + 16);
  return 0LL;
}
