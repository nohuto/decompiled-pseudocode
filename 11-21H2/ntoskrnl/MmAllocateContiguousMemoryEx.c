/*
 * XREFs of MmAllocateContiguousMemoryEx @ 0x1403B28D0
 * Callers:
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_140616490 @ 0x140616490 (sub_140616490.c)
 * Callees:
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_14021499C @ 0x14021499C (sub_14021499C.c)
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousMemoryEx(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        ULONG_PTR **BugCheckParameter2,
        unsigned int a8,
        int a9,
        unsigned __int64 *a10)
{
  ULONG_PTR *v10; // rsi
  unsigned int v12; // ebx
  ULONG_PTR *v13; // rax
  unsigned __int64 v14; // rax
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+68h] [rbp-30h]

  v10 = 0LL;
  v16[0] = 0;
  v17 = 0LL;
  *a10 = 0LL;
  v18 = 0LL;
  if ( (a9 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  if ( !a8 || a8 == 1416523587 || a8 == 1953394499 )
  {
    v12 = -1073741811;
  }
  else
  {
    v12 = sub_14021499C(*a1, a2, a3, a4, a6, a5, &v17);
    if ( (v12 & 0x80000000) != 0 )
      return v12;
    v13 = sub_140264ED0(BugCheckParameter2, 0LL, v16);
    v10 = v13;
    if ( v13 )
    {
      v14 = sub_140214244(
              (unsigned __int64 *)a1,
              v17,
              *((unsigned __int64 *)&v17 + 1),
              v18,
              DWORD2(v18),
              a5,
              v13,
              a8,
              a9);
      *a10 = v14;
      v12 = v14 == 0 ? 0xC000009A : 0;
    }
  }
  if ( v16[0] )
    sub_1403606C4(v10[22]);
  return v12;
}
