/*
 * XREFs of sub_1C0034684 @ 0x1C0034684
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C004C82C @ 0x1C004C82C (sub_1C004C82C.c)
 * Callees:
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 */

__int64 __fastcall sub_1C0034684(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4496) = 0;
  result = sub_1C0008424(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, a2, a1);
  *(_QWORD *)(a1 + 4488) = result;
  return result;
}
