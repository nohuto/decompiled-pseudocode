/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801518F0
 * Callers:
 *     ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x180151CD0 (-OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ.c)
 *     ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x18019EDFC (-UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v6; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  v6 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v6; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = *(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  *a2 = a3;
  return a2;
}
