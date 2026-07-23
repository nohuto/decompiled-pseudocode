/*
 * XREFs of sub_140400914 @ 0x140400914
 * Callers:
 *     sub_1404009BC @ 0x1404009BC (sub_1404009BC.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_1404007D8 @ 0x1404007D8 (sub_1404007D8.c)
 *     sub_14040A984 @ 0x14040A984 (sub_14040A984.c)
 */

__int64 __fastcall sub_140400914(
        const void *a1,
        size_t a2,
        const void *a3,
        size_t a4,
        __int64 a5,
        int a6,
        _WORD *a7,
        unsigned __int64 a8)
{
  __int64 result; // rax

  sub_1403FDDE8((__int64)a7, a8);
  result = sub_1404007D8(a1, a2, a3, a4, a6, a7, a8);
  if ( !(_DWORD)result )
    return (unsigned __int8)sub_14040A984(a7, a5, a8) == 0 ? 0xC800210 : 0;
  return result;
}
