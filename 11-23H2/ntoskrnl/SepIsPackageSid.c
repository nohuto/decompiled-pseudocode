/*
 * XREFs of SepIsPackageSid @ 0x14022A8BC
 * Callers:
 *     SepMaximumAccessCheck @ 0x14022A270 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14022ABF8 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403CDE50 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
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
