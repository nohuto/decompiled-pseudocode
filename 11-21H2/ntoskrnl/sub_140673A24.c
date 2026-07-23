/*
 * XREFs of sub_140673A24 @ 0x140673A24
 * Callers:
 *     sub_140205B1C @ 0x140205B1C (sub_140205B1C.c)
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     sub_1403761D8 @ 0x1403761D8 (sub_1403761D8.c)
 *     sub_140675814 @ 0x140675814 (sub_140675814.c)
 *     sub_1406B4F98 @ 0x1406B4F98 (sub_1406B4F98.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140673A24(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 result; // rax

  result = sub_14042A5E0(a1, 1LL);
  *a5 = a4;
  return result;
}
