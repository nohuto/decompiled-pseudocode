/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C003E4C4
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C003E380 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C02064DC (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C029D140 )
    return qword_1C029D140();
  else
    return 3221225659LL;
}
