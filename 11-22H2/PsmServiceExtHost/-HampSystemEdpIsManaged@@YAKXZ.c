/*
 * XREFs of ?HampSystemEdpIsManaged@@YAKXZ @ 0x180041874
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x1800417A0 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FD38 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     EdpGetEdpEnforcementLevel2 @ 0x1800418B4 (EdpGetEdpEnforcementLevel2.c)
 */

bool HampSystemEdpIsManaged(void)
{
  NTSTATUS EdpEnforcementLevel2; // eax
  signed int v1; // ecx
  bool result; // al
  bool v3; // sf
  int v4; // [rsp+30h] [rbp+8h] BYREF

  EdpEnforcementLevel2 = EdpGetEdpEnforcementLevel2(&v4);
  v1 = RtlNtStatusToDosError(EdpEnforcementLevel2);
  result = 0;
  v3 = v1 < 0;
  if ( v1 > 0 )
    v3 = 1;
  if ( !v3 )
    return v4 != 0;
  return result;
}
