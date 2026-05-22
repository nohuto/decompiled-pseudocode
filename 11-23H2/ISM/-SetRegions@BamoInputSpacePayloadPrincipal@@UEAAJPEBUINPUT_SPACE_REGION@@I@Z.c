/*
 * XREFs of ?SetRegions@BamoInputSpacePayloadPrincipal@@UEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x180151390
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x1801513F8 (-SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z.c)
 */

__int64 __fastcall BamoInputSpacePayloadPrincipal::SetRegions(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct INPUT_SPACE_REGION *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = BamoImpl::BamoInputSpacePayloadPrincipalImpl::SetRegions(
                  (BamoImpl::BamoInputSpacePayloadPrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
