/*
 * XREFs of sub_1403BF7F4 @ 0x1403BF7F4
 * Callers:
 *     sub_1403B2E2C @ 0x1403B2E2C (sub_1403B2E2C.c)
 *     sub_140567C08 @ 0x140567C08 (sub_140567C08.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFBC8 @ 0x1405FFBC8 (sub_1405FFBC8.c)
 *     sub_1405FFC5C @ 0x1405FFC5C (sub_1405FFC5C.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A82A00 @ 0x140A82A00 (sub_140A82A00.c)
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 *     sub_140A919A8 @ 0x140A919A8 (sub_140A919A8.c)
 *     sub_140A92B74 @ 0x140A92B74 (sub_140A92B74.c)
 *     sub_140A92C0C @ 0x140A92C0C (sub_140A92C0C.c)
 *     sub_140AA0A20 @ 0x140AA0A20 (sub_140AA0A20.c)
 *     sub_140AA0BD0 @ 0x140AA0BD0 (sub_140AA0BD0.c)
 *     sub_140AA0D20 @ 0x140AA0D20 (sub_140AA0D20.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     sub_1403BF834 @ 0x1403BF834 (sub_1403BF834.c)
 */

__int64 sub_1403BF7F4(_BYTE *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_1403BF834(a1, a2, 0LL, a3, (__int64 *)va);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
