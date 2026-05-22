/*
 * XREFs of ?GetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAA_NXZ @ 0x18018D280
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

bool __fastcall BamoSimpleHapticsControllerPrincipal::GetIsPlayDurationSupported(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  LOBYTE(v1) = *((_BYTE *)v1 + 58);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, v2, v3);
  return (char)v1;
}
