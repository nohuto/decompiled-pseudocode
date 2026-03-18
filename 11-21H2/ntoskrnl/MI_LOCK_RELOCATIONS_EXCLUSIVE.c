/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14028DC08
 * Callers:
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14097FBF4 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
