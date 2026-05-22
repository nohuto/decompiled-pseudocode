/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180159CD8
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVBamoSystemContextEndpointProxy@@@?$vector@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801598E0 (--$_Emplace_reallocate@AEAPEAVBamoSystemContextEndpointProxy@@@-$vector@V-$com_ptr_t@VBamoSystem.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801A933C (--$_Emplace_reallocate@V-$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801BBD00 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801598A8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 */

__int64 *__fastcall std::_Uninitialized_move<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(a3, a3);
  return a3;
}
