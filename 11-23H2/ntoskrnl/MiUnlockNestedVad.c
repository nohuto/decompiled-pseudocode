/*
 * XREFs of MiUnlockNestedVad @ 0x140A47EA8
 * Callers:
 *     MiLockAddressSpaceToo @ 0x1402897BC (MiLockAddressSpaceToo.c)
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x14062644C (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14066116C (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
