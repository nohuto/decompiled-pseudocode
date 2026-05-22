/*
 * XREFs of ?SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180121BE0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036E00 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetPenDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180121C34 (-SetPenDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenDeviceManagerPrincip.c)
 */

void __fastcall BamoInputSystemPrincipal::SetPenDeviceManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoPenDeviceManagerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetPenDeviceManager((BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, v4, v5);
}
