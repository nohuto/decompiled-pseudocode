/*
 * XREFs of sub_1C0074FD0 @ 0x1C0074FD0
 * Callers:
 *     sub_1C0075020 @ 0x1C0075020 (sub_1C0075020.c)
 *     sub_1C007530C @ 0x1C007530C (sub_1C007530C.c)
 * Callees:
 *     sub_1C0018614 @ 0x1C0018614 (sub_1C0018614.c)
 */

__int64 __fastcall sub_1C0074FD0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  sub_1C0018614(a1 + 8);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x434E6152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
