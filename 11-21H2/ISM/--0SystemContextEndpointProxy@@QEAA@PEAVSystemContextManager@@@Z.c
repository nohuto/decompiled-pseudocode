/*
 * XREFs of ??0SystemContextEndpointProxy@@QEAA@PEAVSystemContextManager@@@Z @ 0x1801373AC
 * Callers:
 *     ?CreateSystemContextEndpointProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18010800C (-CreateSystemContextEndpointProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SystemContextEndpointProxy *__fastcall SystemContextEndpointProxy::SystemContextEndpointProxy(
        SystemContextEndpointProxy *this,
        struct SystemContextManager *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoSystemContextEndpointProxyImpl::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &SystemContextEndpointProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &SystemContextEndpointProxy::`vftable'{for `ISystemContextEndpointProxy'};
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
    (**((void (__fastcall ***)(char *))a2 + 2))((char *)a2 + 16);
  return this;
}
