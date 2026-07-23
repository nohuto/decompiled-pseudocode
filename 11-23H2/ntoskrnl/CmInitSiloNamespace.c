/*
 * XREFs of CmInitSiloNamespace @ 0x14077CFB8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A258 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077A92C (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D0F0 (CmpStartSiloRegistryNamespace.c)
 */

__int64 CmInitSiloNamespace()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &v6);
  if ( v1 >= 0 )
    CmpStartSiloRegistryNamespace(v6, v2, (unsigned int)v1);
  CmCleanupThreadInfo(v5);
  return v3;
}
