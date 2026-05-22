/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18013720C
 * Callers:
 *     ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x1801375F0 (-OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ.c)
 *     ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x18017FBDC (-UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180087394 (--1-$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  v6 = *(__int64 **)(a1 + 8);
  v7 = (__int64 *)(a3 + 8);
  if ( (__int64 *)(a3 + 8) != v6 )
  {
    do
    {
      v8 = *v7;
      *v7 = 0LL;
      v9 = *(v7 - 1);
      *(v7 - 1) = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      ++v7;
    }
    while ( v7 != v6 );
    v6 = *(__int64 **)(a1 + 8);
  }
  wil::com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>(v6 - 1);
  *(_QWORD *)(a1 + 8) -= 8LL;
  *a2 = a3;
  return a2;
}
