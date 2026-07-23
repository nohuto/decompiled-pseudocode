/*
 * XREFs of ObAdjustSecurityQuota @ 0x14069E9B8
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x14069E860 (ObSetSecurityDescriptorInfo.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x1402F8900 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x14075C334 (PsChargeSharedPoolQuota.c)
 */

__int64 __fastcall ObAdjustSecurityQuota(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbp
  void *v6; // rcx

  v2 = a1 - 48;
  if ( *(_QWORD *)(v2 + 32) == 1LL )
    return 0LL;
  v4 = OBJECT_HEADER_TO_QUOTA_INFO(v2);
  v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, a2, 0LL);
  if ( v5 )
  {
    v6 = *(void **)(v4 + 16);
    if ( v6 )
      PsReturnSharedPoolQuota(v6);
    *(_DWORD *)(v4 + 8) = a2;
    *(_QWORD *)(v4 + 16) = v5;
    return 0LL;
  }
  return 3221225540LL;
}
