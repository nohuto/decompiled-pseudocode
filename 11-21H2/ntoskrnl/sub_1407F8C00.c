/*
 * XREFs of sub_1407F8C00 @ 0x1407F8C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_1407F85CC @ 0x1407F85CC (sub_1407F85CC.c)
 */

__int64 __fastcall sub_1407F8C00(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  sub_140347770((__int64)v4);
  sub_1407F85CC(BugCheckParameter2);
  v2 = *(void **)(BugCheckParameter2 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return sub_14022EA30(v4);
}
