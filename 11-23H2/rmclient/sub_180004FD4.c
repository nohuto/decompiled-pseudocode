/*
 * XREFs of sub_180004FD4 @ 0x180004FD4
 * Callers:
 *     sub_180004E90 @ 0x180004E90 (sub_180004E90.c)
 *     sub_180004F38 @ 0x180004F38 (sub_180004F38.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 */

volatile signed __int32 **__fastcall sub_180004FD4(volatile signed __int32 **a1, volatile signed __int32 **a2)
{
  volatile signed __int32 *v2; // r8
  volatile signed __int32 *v5; // rcx

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      sub_180008980(v2 + 3);
    v5 = *a1;
    *a1 = v2;
    if ( v5 )
      sub_180004C40(v5);
  }
  return a1;
}
