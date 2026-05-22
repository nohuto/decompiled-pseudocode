/*
 * XREFs of ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoSystemCursorControllerClientPrincipal@@@Z @ 0x180132900
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoSystemCursorControllerClientPrincipal@@@Z @ 0x18013295C (-EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoSyste.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::EnsureServiceAndRegisterClient(
        BamoSystemCursorControllerProxy *this,
        struct BamoSystemCursorControllerClientPrincipal *a2)
{
  BamoSystemCursorControllerProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemCursorControllerProxyImpl::EnsureServiceAndRegisterClient(
                  (BamoSystemCursorControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
