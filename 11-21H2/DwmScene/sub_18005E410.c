/*
 * XREFs of sub_18005E410 @ 0x18005E410
 * Callers:
 *     sub_18002F830 @ 0x18002F830 (sub_18002F830.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     sub_1800E7B30 @ 0x1800E7B30 (sub_1800E7B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E410(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
