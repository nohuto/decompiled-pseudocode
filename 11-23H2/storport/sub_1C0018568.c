/*
 * XREFs of sub_1C0018568 @ 0x1C0018568
 * Callers:
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 *     sub_1C001840C @ 0x1C001840C (sub_1C001840C.c)
 *     sub_1C0019218 @ 0x1C0019218 (sub_1C0019218.c)
 * Callees:
 *     sub_1C0018614 @ 0x1C0018614 (sub_1C0018614.c)
 */

__int64 __fastcall sub_1C0018568(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)a1 = 0LL;
  }
  sub_1C0018614(a1 + 8);
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x32316152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x32316152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
