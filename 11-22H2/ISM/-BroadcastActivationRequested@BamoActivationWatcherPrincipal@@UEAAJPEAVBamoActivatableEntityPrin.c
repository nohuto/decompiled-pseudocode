/*
 * XREFs of ?BroadcastActivationRequested@BamoActivationWatcherPrincipal@@UEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800B7000
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastActivationRequested@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800B7068 (-BroadcastActivationRequested@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAJPEAVBamoActivata.c)
 */

__int64 __fastcall BamoActivationWatcherPrincipal::BroadcastActivationRequested(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoActivatableEntityPrincipal *a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = BamoImpl::BamoActivationWatcherPrincipalImpl::BroadcastActivationRequested(
                  (BamoImpl::BamoActivationWatcherPrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
