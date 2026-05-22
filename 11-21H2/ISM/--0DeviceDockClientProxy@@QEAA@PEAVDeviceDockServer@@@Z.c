/*
 * XREFs of ??0DeviceDockClientProxy@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1801805E4
 * Callers:
 *     ?CreateDeviceDockClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180107A80 (-CreateDeviceDockClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@IS.c)
 * Callees:
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x1800C98EC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 */

DeviceDockClientProxy *__fastcall DeviceDockClientProxy::DeviceDockClientProxy(
        DeviceDockClientProxy *this,
        struct DeviceDockServer *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoDeviceDockClientProxyImpl::`vftable';
  *(_QWORD *)this = &DeviceDockClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DeviceDockClientProxy::`vftable'{for `IDeviceDockClientProxy'};
  wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
    (_QWORD *)this + 6,
    (__int64)a2);
  return this;
}
