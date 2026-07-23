/*
 * XREFs of MiInitializeDynamicRegion @ 0x140B6E7AC
 * Callers:
 *     MiInitializeSystemCache @ 0x14085C5C8 (MiInitializeSystemCache.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140210FC4 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403763AC (MiBuildDynamicRegion.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
