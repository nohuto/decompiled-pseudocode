/*
 * XREFs of ?SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksPrincipal@@@Z @ 0x18017CF30
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x18017E368 (-UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoMPCConstantManagerClientProxy::SetCallbacks(
        BamoMPCConstantManagerClientProxy *this,
        struct BamoMPCConstantManagerClientCallbacksPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v6 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoMPCConstantManagerClientCallbacksPrincipal *))a2)(a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 44LL) )
    BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateCallbacksRemoteCache((BamoMPCConstantManagerClientProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
}
