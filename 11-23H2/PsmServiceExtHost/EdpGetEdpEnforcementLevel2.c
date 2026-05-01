/*
 * XREFs of EdpGetEdpEnforcementLevel2 @ 0x180041834
 * Callers:
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800417F4 (-HampSystemEdpIsManaged@@YAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall EdpGetEdpEnforcementLevel2(unsigned int *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-24h] BYREF
  int v5; // [rsp+38h] [rbp-20h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  v4 = 0;
  v3 = 4;
  v6 = WNF_ENTR_EDPENFORCEMENTLEVEL_CACHED_POLICY_VALUE_CHANGED;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0;
  result = ZwQueryWnfStateData(&v6, 0LL, 0LL, &v5, &v4, &v3);
  if ( (int)result >= 0 && v3 == 4 && v4 < 4 )
  {
    if ( v5 )
      *a1 = v4;
  }
  return result;
}
