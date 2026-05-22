/*
 * XREFs of ?Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x18003EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Register@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x18003EA58 (-Register@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BamoDataProviderRegistrarProxy::Register(
        BamoDataProviderRegistrarProxy *this,
        struct BamoDataProviderPrincipal *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BamoImplObject *v10; // rcx
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v7 = BamoImpl::BamoDataProviderRegistrarProxyImpl::Register(
         (BamoDataProviderRegistrarProxy *)((char *)this + 8),
         a2,
         v4,
         v5);
  v10 = v12;
  if ( v12 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v12 + 4));
    v10 = v12;
  }
  if ( v10 )
    Microsoft::BamoImpl::BamoImplObject::Release(v10, v6, v8, v9);
  return v7;
}
