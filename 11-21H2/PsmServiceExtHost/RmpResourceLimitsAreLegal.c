/*
 * XREFs of RmpResourceLimitsAreLegal @ 0x1800236F0
 * Callers:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x180023614 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180039220 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18008ECB0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RmpResourceLimitsAreLegal(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)a1 < 0x100uLL
      && (!a2 || (*(_QWORD *)a1 & *a2) == *(_QWORD *)a1)
      && ((*(_BYTE *)a1 & 1) != 0 || *(_QWORD *)(a1 + 8) == -1LL)
      && ((*(_BYTE *)a1 & 2) != 0 || *(_QWORD *)(a1 + 16) == -1LL)
      && ((*(_BYTE *)a1 & 4) != 0 || *(_QWORD *)(a1 + 24) == -1LL)
      && ((*(_BYTE *)a1 & 8) != 0 || *(_QWORD *)(a1 + 32) == -1LL)
      && ((*(_QWORD *)a1 & 0x10) != 0 || !*(_QWORD *)(a1 + 40))
      && ((*(_BYTE *)a1 & 0x20) != 0 || (*(_DWORD *)(a1 + 48) & 3) == 1)
      && ((*(_BYTE *)a1 & 0x40) != 0 || (*(_BYTE *)(a1 + 48) & 8) == 0)
      && (*(char *)a1 < 0 || (*(_BYTE *)(a1 + 48) & 0x20) == 0)
      && ((*(_QWORD *)a1 & 0x10LL) == 0 || (*(_BYTE *)(a1 + 48) & 0x20) != 0);
}
