/*
 * XREFs of sub_1407E6840 @ 0x1407E6840
 * Callers:
 *     sub_1407E66D0 @ 0x1407E66D0 (sub_1407E66D0.c)
 *     sub_1407E75A4 @ 0x1407E75A4 (sub_1407E75A4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_1407E6C40 @ 0x1407E6C40 (sub_1407E6C40.c)
 */

__int64 __fastcall sub_1407E6840(
        int a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ebx
  ULONG_PTR v19; // rcx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v26[16]; // [rsp+90h] [rbp-70h] BYREF

  memset(v26, 0, sizeof(v26));
  v15 = 0LL;
  v16 = *a4;
  v17 = *a2;
  v24 = 0LL;
  Object[0] = 0LL;
  v23 = 0LL;
  v18 = sub_1407E6C40(a1, v17, a3, v16, a5, a6, a7, a8, a9, a10, a11, (__int64)v26, (__int64)Object);
  if ( v18 < 0 )
    goto LABEL_20;
  v19 = *(_QWORD *)(a7 + 24);
  if ( v19 )
  {
    if ( v19 == -3LL )
    {
      v15 = 1LL;
    }
    else
    {
      v22 = sub_1407DE8D0(v19, 2, a8, 0x61566D4Du, &v23);
      v15 = v23;
      v18 = v22;
      if ( v22 < 0 )
        goto LABEL_20;
    }
  }
  if ( !*(_BYTE *)(a7 + 48) || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 < 0 )
    {
      v23 = 0LL;
      if ( (v26[8] & 0x40000000) != 0 )
      {
        HIDWORD(v26[8]) = 536870913;
        v26[9] = &v23;
      }
      v21 = sub_1407BE3C0((__int64)v26, 0LL, &v24);
      v26[9] = 0LL;
      v18 = v21;
      HIDWORD(v26[8]) = 0;
      if ( v21 >= 0 )
        v18 = 0;
    }
    else
    {
      v18 = sub_1407BE3C0((__int64)v26, (LARGE_INTEGER)v15, &v24);
    }
    if ( v18 >= 0 )
    {
      *a2 = v24;
      *a4 = v26[3];
      goto LABEL_8;
    }
  }
  else
  {
    v18 = -1073741811;
  }
LABEL_20:
  if ( v26[0] )
    ++dword_140C52B24;
  else
    ++dword_140C52B20;
LABEL_8:
  if ( v15 >= 2 )
    sub_1403606C4(v15);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)v18;
}
