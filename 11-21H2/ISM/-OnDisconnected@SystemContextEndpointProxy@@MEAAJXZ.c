/*
 * XREFs of ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x1801375F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18013720C (-erase@-$vector@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpointProxy::OnDisconnected(SystemContextEndpointProxy *this)
{
  __int64 v2; // rax
  const char *v3; // r9
  SystemContextEndpointProxy **i; // r8
  char v5; // al
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 8);
  v3 = (const char *)(v2 + 56);
  for ( i = *(SystemContextEndpointProxy ***)(v2 + 56); ; ++i )
  {
    if ( i == *(SystemContextEndpointProxy ***)(v2 + 64) )
    {
      v5 = 1;
      goto LABEL_6;
    }
    if ( *i == this )
      break;
  }
  v5 = 0;
LABEL_6:
  if ( v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      75LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
      v3);
  std::vector<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>::erase(
    (__int64)v3,
    &v9,
    (__int64)i);
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 8LL))(v6 + 16);
  return 0LL;
}
