/*
 * XREFs of sub_1403860B0 @ 0x1403860B0
 * Callers:
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403AC3AC @ 0x1403AC3AC (sub_1403AC3AC.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

char __fastcall sub_1403860B0(unsigned int a1, __int64 a2, char a3)
{
  char result; // al

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return result;
}
