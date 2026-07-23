/*
 * XREFs of sub_14059A86C @ 0x14059A86C
 * Callers:
 *     sub_1405E2410 @ 0x1405E2410 (sub_1405E2410.c)
 * Callees:
 *     sub_14024D0D4 @ 0x14024D0D4 (sub_14024D0D4.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1403523C0 @ 0x1403523C0 (sub_1403523C0.c)
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140598CA4 @ 0x140598CA4 (sub_140598CA4.c)
 *     sub_14059A9B4 @ 0x14059A9B4 (sub_14059A9B4.c)
 */

__int64 __fastcall sub_14059A86C(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3, __int64 a4)
{
  ULONG_PTR v8; // rsi
  int v9; // ebx
  int v10; // eax
  _QWORD v12[10]; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v13; // [rsp+B0h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+B8h] [rbp+10h] BYREF

  v14 = BugCheckParameter3;
  v13 = BugCheckParameter2;
  memset(v12, 0, sizeof(v12));
  v8 = 0LL;
  if ( (a3 & 0x2000) == 0 || (v8 = sub_14024D0D4(BugCheckParameter2, 15, BugCheckParameter3, 0)) != 0 )
  {
    if ( (a3 & 0x1000) == 0 )
      return 0;
    v10 = sub_14027B080(BugCheckParameter2);
    if ( v10 != 15 )
      KeBugCheckEx(0x1Au, 0x5400uLL, BugCheckParameter2, BugCheckParameter3, v10);
    if ( !(unsigned int)sub_140598CA4() )
      KeBugCheckEx(0x1Au, 0x5401uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    sub_1403523C0((__int64 *)&v13, (__int64)&v14, a3, 2u, 0, 0, a4, (__int64)v12);
    v9 = sub_1403525F0(v12);
    if ( v9 < 0 )
    {
      if ( v8 )
        sub_14059A9B4(v8, BugCheckParameter3);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
