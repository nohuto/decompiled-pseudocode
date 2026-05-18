/*
 * XREFs of sub_18003B388 @ 0x18003B388
 * Callers:
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_180063B2C @ 0x180063B2C (sub_180063B2C.c)
 *     sub_1800E6266 @ 0x1800E6266 (sub_1800E6266.c)
 * Callees:
 *     sub_18003AA24 @ 0x18003AA24 (sub_18003AA24.c)
 */

__int64 __fastcall sub_18003B388(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    return sub_18003AA24(*(LPVOID *)a1);
  return result;
}
