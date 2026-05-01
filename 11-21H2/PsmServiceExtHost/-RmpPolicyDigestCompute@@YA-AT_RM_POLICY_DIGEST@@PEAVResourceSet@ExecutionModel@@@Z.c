/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020490
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18002948C (-RmpActivityHostComputeDigestForCategory@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_R.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  char v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int16 v6; // ax
  __int16 v7; // cx
  unsigned __int64 v9; // rdx

  v1 = *(_BYTE *)(a1 + 1378);
  v3 = 0x11000002000LL;
  if ( (v1 & 8) != 0
    || (v4 = *(int *)(a1 + 1336), (unsigned int)v4 <= 0x27) && (v5 = 0x8800001000LL, _bittest64(&v5, v4)) )
  {
    v6 = *(_WORD *)(a1 + 1376);
    v7 = 2;
  }
  else
  {
    v6 = *(_WORD *)(a1 + 1376);
    if ( (v6 & 0x10) == 0 && ((unsigned int)v4 > 0x28 || !_bittest64(&v3, v4)) )
    {
      v7 = 1;
LABEL_7:
      v7 |= 8u;
      return v7 | (8 * ((2 * (v6 & 3 | (8 * ((*(_DWORD *)(a1 + 1332) >> 3) & 1 | 2)))) | v6 & 8));
    }
    v7 = 4;
  }
  if ( (v6 & 0x10) == 0 )
  {
    v9 = *(int *)(a1 + 1336);
    if ( (unsigned int)v9 > 0x28 || !_bittest64(&v3, v9) )
      goto LABEL_7;
  }
  if ( (v1 & 0x40) != 0 )
    goto LABEL_7;
  return v7 | (8 * ((2 * (v6 & 3 | (8 * ((*(_DWORD *)(a1 + 1332) >> 3) & 1 | 2)))) | v6 & 8));
}
