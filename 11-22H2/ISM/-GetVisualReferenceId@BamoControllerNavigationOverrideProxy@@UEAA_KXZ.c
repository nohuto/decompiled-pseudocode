/*
 * XREFs of ?GetVisualReferenceId@BamoControllerNavigationOverrideProxy@@UEAA_KXZ @ 0x1801A0F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

unsigned __int64 __fastcall BamoControllerNavigationOverrideProxy::GetVisualReferenceId(
        BamoControllerNavigationOverrideProxy *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v6,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v2 = *((_QWORD *)this + 9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v3, v4);
  return v2;
}
