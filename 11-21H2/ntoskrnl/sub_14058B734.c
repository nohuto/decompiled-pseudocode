/*
 * XREFs of sub_14058B734 @ 0x14058B734
 * Callers:
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall sub_14058B734(__int64 a1)
{
  unsigned __int64 v1; // rbx

  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1688LL) = a1;
  v1 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
  return v1;
}
