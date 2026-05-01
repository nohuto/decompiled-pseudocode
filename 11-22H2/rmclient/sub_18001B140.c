/*
 * XREFs of sub_18001B140 @ 0x18001B140
 * Callers:
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 */

__int64 __fastcall sub_18001B140(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = sub_180004C40(v4);
  *a1 = a2;
  return result;
}
