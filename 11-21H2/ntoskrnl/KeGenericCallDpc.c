/*
 * XREFs of KeGenericCallDpc @ 0x140217420
 * Callers:
 *     sub_140216C28 @ 0x140216C28 (sub_140216C28.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 *     sub_1403B6B94 @ 0x1403B6B94 (sub_1403B6B94.c)
 *     sub_1403B7CB0 @ 0x1403B7CB0 (sub_1403B7CB0.c)
 *     sub_1403DADE0 @ 0x1403DADE0 (sub_1403DADE0.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 *     sub_140590CD0 @ 0x140590CD0 (sub_140590CD0.c)
 *     sub_1405C0634 @ 0x1405C0634 (sub_1405C0634.c)
 *     sub_14063BE80 @ 0x14063BE80 (sub_14063BE80.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 *     sub_1407F9820 @ 0x1407F9820 (sub_1407F9820.c)
 *     sub_14095FD08 @ 0x14095FD08 (sub_14095FD08.c)
 *     MmSetPermanentCacheAttribute @ 0x14096C8D0 (MmSetPermanentCacheAttribute.c)
 *     sub_14096E960 @ 0x14096E960 (sub_14096E960.c)
 *     sub_14096EAB0 @ 0x14096EAB0 (sub_14096EAB0.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140A693D8 @ 0x140A693D8 (sub_140A693D8.c)
 *     sub_140B1A290 @ 0x140B1A290 (sub_140B1A290.c)
 * Callees:
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(), _QWORD *, __int64))sub_14035BB4C)(
           0LL,
           sub_1402D9F70,
           v3,
           1LL);
}
