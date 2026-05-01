/*
 * XREFs of ?HampSystemCdplIsManaged@@YAKXZ @ 0x1800417C8
 * Callers:
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180041720 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FB18 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800418CC (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 */

__int64 HampSystemCdplIsManaged(void)
{
  int IsSupportedInl; // eax
  unsigned int v1; // ecx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  IsSupportedInl = CdplIsSupportedInl(&v3);
  v1 = 0;
  if ( IsSupportedInl >= 0 )
    LOBYTE(v1) = v3 != 0;
  return v1;
}
