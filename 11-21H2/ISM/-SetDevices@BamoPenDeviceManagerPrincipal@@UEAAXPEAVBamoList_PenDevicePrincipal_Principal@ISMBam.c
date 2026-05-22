/*
 * XREFs of ?SetDevices@BamoPenDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180187FC0
 * Callers:
 *     ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180185AF4 (--0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetDevices@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180188014 (-SetDevices@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Pri.c)
 */

void __fastcall BamoPenDeviceManagerPrincipal::SetDevices(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoPenDeviceManagerPrincipalImpl::SetDevices((BamoImpl::BamoPenDeviceManagerPrincipalImpl *)(this + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, v4, v5);
}
