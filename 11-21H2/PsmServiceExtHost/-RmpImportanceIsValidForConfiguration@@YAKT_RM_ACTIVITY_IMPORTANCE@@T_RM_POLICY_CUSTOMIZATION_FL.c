/*
 * XREFs of ?RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FLAGS@@@Z @ 0x180083D34
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18008ECB0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpImportanceIsValidForConfiguration(__int16 a1, char a2)
{
  return ((a1 & 0x200) == 0 || (a2 & 8) != 0) && (a1 & 0x500) != 0x400;
}
