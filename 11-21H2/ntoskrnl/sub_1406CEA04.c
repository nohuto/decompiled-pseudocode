/*
 * XREFs of sub_1406CEA04 @ 0x1406CEA04
 * Callers:
 *     sub_1406CE8B8 @ 0x1406CE8B8 (sub_1406CE8B8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 */

__int64 __fastcall sub_1406CEA04(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6, ULONG a7)
{
  unsigned int v7; // r11d
  int v8; // ebx
  unsigned int v13; // r9d
  __int64 **v14; // rcx
  __int64 *v15; // r10
  __int64 **v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v28; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v28 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v13 = 0;
  v14 = &off_140A380C0;
  do
  {
    v15 = *v14;
    v16 = v14;
    if ( v7 == *((_DWORD *)*v14 + 4) )
    {
      v17 = *(_QWORD *)a4 - *v15;
      if ( *(_QWORD *)a4 == *v15 )
        v17 = *(_QWORD *)(a4 + 8) - v15[1];
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    ++v13;
    v14 += 2;
  }
  while ( v13 < 3 );
  if ( !v16 )
    return (unsigned int)-1073741264;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 == 18 )
        goto LABEL_11;
    }
    else if ( a5 < 2 )
    {
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
LABEL_11:
  if ( !a3 )
  {
    v8 = sub_140784B14(a1, a2, 48, v13, 1, 0, (__int64)&v28, 0LL);
    if ( v8 < 0 )
      goto LABEL_21;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 == 2 )
  {
    v23 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
    if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
      v23 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
    if ( !v23 )
    {
      v24 = (int)v28;
      if ( a3 )
        v24 = a3;
      v21 = sub_140772A24(a1, v24, (unsigned int)L"Device Parameters", 0, 2, 0LL, (__int64)&KeyHandle, 0LL);
      if ( v21 == -1073741444 )
        goto LABEL_28;
      if ( v21 < 0 )
        goto LABEL_29;
      v21 = sub_1406D5A30(KeyHandle, a7);
LABEL_19:
      if ( v21 != -1073741444 )
      {
        if ( v21 >= 0 )
          goto LABEL_21;
LABEL_29:
        v8 = v21;
        goto LABEL_21;
      }
LABEL_28:
      v8 = -1073741772;
      goto LABEL_21;
    }
LABEL_55:
    v8 = -1073741264;
    goto LABEL_21;
  }
  if ( v19 != 256 )
  {
    if ( v19 == 3 )
    {
      v25 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
      if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
        v25 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
      if ( !v25 )
        goto LABEL_54;
    }
    if ( v19 == 4 )
    {
      v26 = *(_QWORD *)a4 - 0x414BB814026E516ELL;
      if ( *(_QWORD *)a4 == 0x414BB814026E516ELL )
        v26 = *(_QWORD *)(a4 + 8) - 0x2248EF6F6D85CD83LL;
      if ( !v26 )
      {
LABEL_54:
        v8 = -1073741790;
        goto LABEL_21;
      }
    }
    goto LABEL_55;
  }
  v20 = *(_QWORD *)a4 - 0x4ACA104A78C34FC8LL;
  if ( *(_QWORD *)a4 == 0x4ACA104A78C34FC8LL )
    v20 = *(_QWORD *)(a4 + 8) - 0x576E99524D52A49ELL;
  if ( v20 )
    goto LABEL_55;
  v8 = sub_140784B14(a1, a2, 49, v13, 2, 0, (__int64)&Handle, 0LL);
  if ( v8 >= 0 )
  {
    v21 = sub_1406D5A30(Handle, a7);
    goto LABEL_19;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    ZwClose(v28);
  return (unsigned int)v8;
}
