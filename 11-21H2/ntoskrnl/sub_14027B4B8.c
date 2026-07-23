/*
 * XREFs of sub_14027B4B8 @ 0x14027B4B8
 * Callers:
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void *__fastcall sub_14027B4B8(__int64 a1)
{
  void *v2; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C49B08, 0LL);
  v2 = (void *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v2 )
    ObfReferenceObjectWithTag(v2, 0x63536343u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C49B08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C49B08);
  sub_1402AFC00((ULONG_PTR)&qword_140C49B08);
  return v2;
}
