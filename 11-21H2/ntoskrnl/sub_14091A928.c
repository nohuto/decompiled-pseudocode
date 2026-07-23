/*
 * XREFs of sub_14091A928 @ 0x14091A928
 * Callers:
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_14068D2B8 @ 0x14068D2B8 (sub_14068D2B8.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 */

__int64 __fastcall sub_14091A928(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3)
{
  int v6; // ebx
  _DWORD *v7; // rbx
  void *v8; // r8
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v6 = sub_14068D2B8(BugCheckParameter2, 4096LL, 0, 808668483LL, (__int64 *)&v10);
  if ( v6 < 0 )
  {
    v8 = v10;
  }
  else
  {
    v7 = v10;
    memset(v10, 0, 0x1000uLL);
    *v7 = 0;
    v7[1] = a2;
    v7[2] = 4096;
    v7[8] = -4064;
    sub_14068CEA0(BugCheckParameter2, (__int64)v7, 4096, a2, 1, 0LL);
    v8 = 0LL;
    *a3 = v7;
    v6 = 0;
  }
  if ( v8 )
    sub_1406D16F8(BugCheckParameter2, 0x1000u, (__int64)v8);
  return (unsigned int)v6;
}
