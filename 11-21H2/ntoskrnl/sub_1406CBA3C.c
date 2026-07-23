/*
 * XREFs of sub_1406CBA3C @ 0x1406CBA3C
 * Callers:
 *     sub_1406CB6DC @ 0x1406CB6DC (sub_1406CB6DC.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x14041BD40 (ZwOpenThreadTokenEx.c)
 */

int __fastcall sub_1406CBA3C(ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  int result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 1u, 0x200u, TokenHandle);
  if ( result < 0 )
    return ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, DesiredAccess, 0, 0x200u, TokenHandle);
  return result;
}
