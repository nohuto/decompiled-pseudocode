/*
 * XREFs of sub_1407E66D0 @ 0x1407E66D0
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1406E0214 @ 0x1406E0214 (sub_1406E0214.c)
 *     sub_1407E6670 @ 0x1407E6670 (sub_1407E6670.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407E6840 @ 0x1407E6840 (sub_1407E6840.c)
 *     sub_1407E72CC @ 0x1407E72CC (sub_1407E72CC.c)
 */

__int64 __fastcall sub_1407E66D0(
        int a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        int a5,
        volatile void *Address,
        int a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v19; // [rsp+68h] [rbp-70h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v21[80]; // [rsp+80h] [rbp-58h] BYREF

  memset(v21, 0, 0x48uLL);
  v19 = 0LL;
  v20 = 0LL;
  if ( a8 )
  {
    v15 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  v19 = *a2;
  v20 = *a3;
  v17 = sub_1407E72CC(Address, v21);
  if ( v17 >= 0 )
  {
    v17 = sub_1407E6840(a1, (unsigned int)&v19, 0, (unsigned int)&v20, a4, a5, (__int64)v21, a8, a9, a10, a11);
    if ( v17 >= 0 )
    {
      *a2 = v19;
      *a3 = v20;
    }
  }
  return (unsigned int)v17;
}
