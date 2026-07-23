/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x14077A5C0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A258 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     PsGetPermanentSiloContext @ 0x14031CAD0 (PsGetPermanentSiloContext.c)
 */

__int64 CmGetRootKeyObjectForSilo()
{
  __int64 v0; // r9
  void *v1; // rcx
  __int64 v2; // r8
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  v5 = 0LL;
  PsGetPermanentSiloContext(v0, CmpSiloContextSlot, &v5);
  if ( v5 && (v1 = *(void **)(v5 + 32)) != 0LL )
    ObfReferenceObject(v1);
  else
    ObfReferenceObject(CmpRegistryRootObject);
  CmCleanupThreadInfo(v4);
  return v2;
}
