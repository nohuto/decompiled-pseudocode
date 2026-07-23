/*
 * XREFs of ExInitializeFastResourceAcquired @ 0x140412A50
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeFastResourceAcquired2 @ 0x140413C48 (ExInitializeFastResourceAcquired2.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExInitializeFastResourceAcquired(ULONG_PTR a1, ULONG_PTR a2)
{
  if ( !FeatureFastResource2 )
    KeBugCheckEx(0x1C6u, 0x18uLL, 0LL, 0LL, 0LL);
  return ExInitializeFastResourceAcquired2(a1, a2);
}
