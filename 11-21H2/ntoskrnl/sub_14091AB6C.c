/*
 * XREFs of sub_14091AB6C @ 0x14091AB6C
 * Callers:
 *     sub_14091ACEC @ 0x14091ACEC (sub_14091ACEC.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_14068D2B8 @ 0x14068D2B8 (sub_14068D2B8.c)
 *     sub_1406C9BF4 @ 0x1406C9BF4 (sub_1406C9BF4.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_14091B240 @ 0x14091B240 (sub_14091B240.c)
 */

__int64 __fastcall sub_14091AB6C(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  int v7; // r14d
  signed int v8; // eax
  signed int v9; // ebx
  unsigned int v10; // ebp
  const void *v11; // r12
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 56);
  v7 = 0;
  do
  {
LABEL_2:
    v8 = sub_14091B240(a5, &v15, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741807 )
        return 0;
      else
        sub_14020A890(v6, 0, 7, v8, 0);
      return (unsigned int)v9;
    }
    v10 = 0;
  }
  while ( !v16 );
  while ( 1 )
  {
    v11 = (const void *)(v15 + v10);
    v9 = sub_14068D2B8(BugCheckParameter2, 4096LL, 0, 825445699LL, (__int64 *)&v17);
    if ( v9 < 0 )
      break;
    memmove(v17, v11, 0x1000uLL);
    v9 = sub_1406C9BF4(BugCheckParameter2, (__int64)v17, v12, 0, 0x1000u, 0);
    if ( v9 < 0 )
    {
      v13 = 32;
      goto LABEL_10;
    }
    sub_14068CEA0(BugCheckParameter2, (__int64)v17, 4096, v7, 1, 0LL);
    v17 = 0LL;
    v7 += 4096;
    v10 += 4096;
    if ( v10 >= v16 )
      goto LABEL_2;
  }
  v13 = 16;
LABEL_10:
  sub_14020A890(v6, 0, 7, v9, v13);
  if ( v17 )
    sub_1406D16F8(BugCheckParameter2, 0x1000u, (__int64)v17);
  return (unsigned int)v9;
}
