/*
 * XREFs of ?UnregisterDeviceDockClient@DeviceDockServer@@QEAAJPEAVBamoDeviceDockClientProxy@@@Z @ 0x18019EDFC
 * Callers:
 *     ?OnDisconnected@DeviceDockClientProxy@@MEAAJXZ @ 0x18019F980 (-OnDisconnected@DeviceDockClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801518F0 (-erase@-$vector@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V.c)
 *     ?UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z @ 0x18019ED58 (-UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceDockServer::UnregisterDeviceDockClient(
        DeviceDockServer *this,
        struct BamoDeviceDockClientProxy *a2)
{
  const char *v4; // r9
  struct BamoDeviceDockClientProxy **i; // r8
  char v6; // al
  struct BamoDeviceDockClientProxy *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::DeviceDock::UnregisterClient((__int64)a2);
  for ( i = (struct BamoDeviceDockClientProxy **)*((_QWORD *)this + 7); ; ++i )
  {
    if ( i == *((struct BamoDeviceDockClientProxy ***)this + 8) )
    {
      v6 = 1;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v6 = 0;
LABEL_6:
  if ( v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v4);
  std::vector<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>::erase(
    (__int64)this + 56,
    &v10,
    (__int64)i);
  v7 = (struct BamoDeviceDockClientProxy *)*((_QWORD *)this + 10);
  if ( v7 == a2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(struct BamoDeviceDockClientProxy *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return 0LL;
}
