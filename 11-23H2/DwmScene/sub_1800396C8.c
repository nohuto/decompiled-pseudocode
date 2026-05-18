/*
 * XREFs of sub_1800396C8 @ 0x1800396C8
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180072240 @ 0x180072240 (sub_180072240.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

volatile signed __int32 *__fastcall sub_1800396C8(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v6; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 128) = v2;
  result = *(volatile signed __int32 **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v4;
  if ( result )
    result = (volatile signed __int32 *)sub_180010574(result);
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
    return (volatile signed __int32 *)sub_180010574(v6);
  return result;
}
