/*
 * XREFs of sub_14023BD7C @ 0x14023BD7C
 * Callers:
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 * Callees:
 *     sub_14023BDB4 @ 0x14023BDB4 (sub_14023BDB4.c)
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 */

bool sub_14023BD7C()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  if ( !(unsigned __int8)sub_14023BDB4() )
    return 0;
  LOBYTE(v1) = *((_BYTE *)KeGetCurrentThread() + 562);
  return (unsigned __int8)sub_1406B67A0(v1, v0, v2) == 0;
}
