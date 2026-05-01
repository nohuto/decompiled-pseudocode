/*
 * XREFs of ?HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18008E714
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FD38 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemDplIsAppAllowedToRun(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  int IsAppAllowedToRun; // eax
  unsigned int v4; // ecx
  int v6; // [rsp+20h] [rbp-128h] BYREF
  _DWORD v7[3]; // [rsp+24h] [rbp-124h] BYREF
  _BYTE v8[256]; // [rsp+30h] [rbp-118h] BYREF

  v6 = 256;
  PsmGetPackageFullNameFromKey((char *)a1 + 24, v8, &v6);
  IsAppAllowedToRun = CdplIsAppAllowedToRun(v8, v7);
  v4 = 0;
  if ( IsAppAllowedToRun < 0 )
    return IsAppAllowedToRun | 0xC0000000;
  else
    *a2 = v7[0] != 0;
  return v4;
}
