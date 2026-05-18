/*
 * XREFs of sub_18007CBD4 @ 0x18007CBD4
 * Callers:
 *     sub_18007C73C @ 0x18007C73C (sub_18007C73C.c)
 *     sub_18008F058 @ 0x18008F058 (sub_18008F058.c)
 * Callees:
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 */

__int64 __fastcall sub_18007CBD4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18002A4FC(v1);
  return result;
}
