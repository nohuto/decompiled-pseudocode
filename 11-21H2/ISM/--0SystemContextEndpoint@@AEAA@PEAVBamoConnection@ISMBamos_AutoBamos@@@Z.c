/*
 * XREFs of ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180087190
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VSystemContextEndpoint@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextEndpoint@@@Z @ 0x180087154 (--0-$com_ptr_t@VSystemContextEndpoint@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVSystemContextEn.c)
 *     ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18012082C (-DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV-$function@$$A6AXAEAV-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=5
SystemContextEndpoint *__fastcall SystemContextEndpoint::SystemContextEndpoint(
        SystemContextEndpoint *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)this = &BamoSystemContextEndpointPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemContextEndpoint::`vftable'{for `ISystemContextEndpointPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((SystemContextEndpoint *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoSystemContextEndpointPrincipalImpl::`vftable';
  *(_QWORD *)this = &SystemContextEndpoint::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &SystemContextEndpoint::`vftable'{for `ISystemContextEndpointPrincipal'};
  v4 = wil::com_ptr_t<SystemContextEndpoint,wil::err_exception_policy>::com_ptr_t<SystemContextEndpoint,wil::err_exception_policy>(
         &v8,
         (__int64)this);
  v5 = *v4;
  *v4 = 0LL;
  v7[0] = off_1801DDC40;
  v7[1] = v5;
  v7[7] = v7;
  InputSystemInternalClientConnection::DeferUntilBootstrapped(a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 16) + 8LL))(v8 + 16);
  return this;
}
