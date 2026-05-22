/*
 * XREFs of ??_GSystemContextEndpointProxy@@UEAAPEAXI@Z @ 0x18015FED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x18015FE58 (--1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
SystemContextEndpointProxy *__fastcall SystemContextEndpointProxy::`scalar deleting destructor'(
        SystemContextEndpointProxy *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 8LL))(v4 + 16);
  BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl((SystemContextEndpointProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
