/*
 * XREFs of ?SetShellHandwritingHostServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoShellHandwritingHostServerPrincipal@@@Z @ 0x18005EAA0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E9C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetShellHandwritingHostServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoShellHandwritingHostServerPrincipal@@@Z @ 0x18005EAF4 (-SetShellHandwritingHostServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoShellHandwrit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoInputSystemPrincipal::SetShellHandwritingHostServer(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoShellHandwritingHostServerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetShellHandwritingHostServer(
    (BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
