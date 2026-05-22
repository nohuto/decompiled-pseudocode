/*
 * XREFs of ?DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ @ 0x180159890
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DisableGamepadExclusivity@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801598DC (-DisableGamepadExclusivity@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoMPCManagerProxy::DisableGamepadExclusivity(BamoMPCManagerProxy *this)
{
  BamoMPCManagerProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoMPCManagerProxyImpl::DisableGamepadExclusivity((BamoMPCManagerProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, v2, v3);
  return (unsigned int)v1;
}
