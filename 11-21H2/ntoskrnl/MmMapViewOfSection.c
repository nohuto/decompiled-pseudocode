/*
 * XREFs of MmMapViewOfSection @ 0x140785150
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405E2C2C @ 0x1405E2C2C (sub_1405E2C2C.c)
 *     sub_140672A98 @ 0x140672A98 (sub_140672A98.c)
 *     sub_140672AD0 @ 0x140672AD0 (sub_140672AD0.c)
 *     sub_1406C40E0 @ 0x1406C40E0 (sub_1406C40E0.c)
 *     sub_1406D43E8 @ 0x1406D43E8 (sub_1406D43E8.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 *     sub_14097A9C4 @ 0x14097A9C4 (sub_14097A9C4.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FC8B0 @ 0x1406FC8B0 (sub_1406FC8B0.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = sub_1406FC8B0(v15, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = sub_1406FCA10(a1, (__int64)v15, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C52B1C;
      else
        ++dword_140C52B18;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
