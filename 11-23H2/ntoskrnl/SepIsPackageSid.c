/*
 * XREFs of SepIsPackageSid @ 0x14022A7AC
 * Callers:
 *     SepMaximumAccessCheck @ 0x14022A160 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14022AAE8 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x140233540 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403CDC70 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429820 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SePackagePrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SePackagePrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
