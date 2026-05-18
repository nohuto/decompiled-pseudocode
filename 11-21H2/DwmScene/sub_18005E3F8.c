/*
 * XREFs of sub_18005E3F8 @ 0x18005E3F8
 * Callers:
 *     sub_1800E502C @ 0x1800E502C (sub_1800E502C.c)
 *     sub_1800E7B30 @ 0x1800E7B30 (sub_1800E7B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E3F8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
