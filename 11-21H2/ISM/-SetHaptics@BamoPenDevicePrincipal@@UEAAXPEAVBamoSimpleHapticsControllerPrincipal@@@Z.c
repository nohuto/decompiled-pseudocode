/*
 * XREFs of ?SetHaptics@BamoPenDevicePrincipal@@UEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018A460
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018A4B4 (-SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@.c)
 */

void __fastcall BamoPenDevicePrincipal::SetHaptics(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoSimpleHapticsControllerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoPenDevicePrincipalImpl::SetHaptics((BamoImpl::BamoPenDevicePrincipalImpl *)(this + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, v4, v5);
}
