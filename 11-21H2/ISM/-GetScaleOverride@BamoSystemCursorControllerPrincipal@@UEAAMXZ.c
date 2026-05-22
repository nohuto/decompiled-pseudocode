/*
 * XREFs of ?GetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAMXZ @ 0x1800E96D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

float __fastcall BamoSystemCursorControllerPrincipal::GetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  float v2; // xmm6_4
  __int64 v3; // rdx
  __int64 v4; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  v2 = *((float *)this + 12);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, v3, v4);
  return v2;
}
