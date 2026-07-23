/*
 * XREFs of sub_1407A6574 @ 0x1407A6574
 * Callers:
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FC8B0 @ 0x1406FC8B0 (sub_1406FC8B0.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 */

__int64 __fastcall sub_1407A6574(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 result; // rax
  _QWORD v16[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v16, 0, sizeof(v16));
  result = sub_1406FC8B0(v16, a1, a2, *a3, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v16[9] = a12,
        HIDWORD(v16[8]) = 2,
        result = sub_1406FCA10(a1, (__int64)v16, (void **)a3, 0LL, a6, 2, 1),
        (int)result < 0) )
  {
    if ( *a3 )
      ++dword_140C52B1C;
    else
      ++dword_140C52B18;
  }
  else
  {
    *a7 = v16[3];
    return (unsigned int)result;
  }
  return result;
}
