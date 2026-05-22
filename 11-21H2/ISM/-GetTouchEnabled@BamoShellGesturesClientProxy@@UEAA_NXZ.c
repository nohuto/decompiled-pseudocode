/*
 * XREFs of ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18014F770
 * Callers:
 *     ?ShouldSelectClient@ShellGesturesProcessor@@AEAA_NAEBV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@W4InputType@@@Z @ 0x180150F80 (-ShouldSelectClient@ShellGesturesProcessor@@AEAA_NAEBV-$ComPtr@VShellGesturesClientProxy@@@WRL@M.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

bool __fastcall BamoShellGesturesClientProxy::GetTouchEnabled(BamoShellGesturesClientProxy *this)
{
  BamoShellGesturesClientProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v1) = *((_BYTE *)v1 + 41);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5, v2, v3);
  return (char)v1;
}
