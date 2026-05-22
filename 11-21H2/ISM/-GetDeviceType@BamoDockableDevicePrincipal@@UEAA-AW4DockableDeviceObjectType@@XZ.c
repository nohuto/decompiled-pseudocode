/*
 * XREFs of ?GetDeviceType@BamoDockableDevicePrincipal@@UEAA?AW4DockableDeviceObjectType@@XZ @ 0x18017D150
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall BamoDockableDevicePrincipal::GetDeviceType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 24));
  LODWORD(v1) = *(_DWORD *)(v1 + 72);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, v2, v3);
  return (unsigned int)v1;
}
