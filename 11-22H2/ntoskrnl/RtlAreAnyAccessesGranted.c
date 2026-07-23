/*
 * XREFs of RtlAreAnyAccessesGranted @ 0x1407E3780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreAnyAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (GrantedAccess & DesiredAccess) != 0;
}
