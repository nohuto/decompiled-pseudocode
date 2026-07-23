/*
 * XREFs of sub_1406BD994 @ 0x1406BD994
 * Callers:
 *     sub_1406BD3A8 @ 0x1406BD3A8 (sub_1406BD3A8.c)
 *     sub_1406BD83C @ 0x1406BD83C (sub_1406BD83C.c)
 *     sub_140A2B388 @ 0x140A2B388 (sub_140A2B388.c)
 *     sub_140A2B950 @ 0x140A2B950 (sub_140A2B950.c)
 * Callees:
 *     sub_1406974B8 @ 0x1406974B8 (sub_1406974B8.c)
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_1406C47D8 @ 0x1406C47D8 (sub_1406C47D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406BD994(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v9; // r15
  __int64 v11; // rsi
  unsigned int v13; // r14d
  int v14; // r11d
  __int64 **v15; // rdx
  unsigned int i; // r8d
  __int64 *v17; // r9
  __int64 **v18; // rdi
  __int64 v19; // rcx
  int v20; // r12d
  unsigned int v21; // eax
  unsigned int v22; // ebx
  int v24; // eax
  __int64 v25; // rax
  void *Pool2; // rdi
  int v27; // eax
  int v28; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+44h] [rbp-Ch] BYREF
  int v30; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v28 = 0;
  *a5 = 0;
  *v9 = 0;
  v30 = 0;
  v29 = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  v15 = &off_140A39560;
  for ( i = 0; i < 9; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v14 == *((_DWORD *)*v15 + 4) )
    {
      v19 = *(_QWORD *)a4 - *v17;
      if ( *(_QWORD *)a4 == *v17 )
        v19 = *(_QWORD *)(a4 + 8) - v17[1];
      if ( !v19 )
        break;
    }
    v15 += 3;
    v18 = 0LL;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  v20 = *((_DWORD *)v18 + 3);
  if ( v20 == 25 )
    return (unsigned int)-1073741637;
  if ( v20 == 27 )
  {
    LODWORD(a5) = 4;
    v22 = sub_1406BDAE4(a1, a2, a3, 27, (__int64)&v28, (__int64)&v29, (__int64)&a5);
    if ( (v22 & 0x80000000) != 0 )
      return v22;
    if ( v28 == *((_DWORD *)v18 + 4) )
    {
      *v9 = 1;
      *v8 = *((_DWORD *)v18 + 2);
      if ( v13 >= *v9 )
        *(_BYTE *)v11 = -(v29 != 0);
      else
        return (unsigned int)-1073741789;
      return v22;
    }
    return (unsigned int)-1073741811;
  }
  *v9 = v13;
  v21 = sub_1406BDAE4(a1, a2, a3, v20, (__int64)&v28, v11, (__int64)v9);
  v22 = v21;
  if ( v21 && v21 != -1073741789 )
    return v22;
  if ( v28 != *((_DWORD *)v18 + 4) )
    return (unsigned int)-1073741811;
  v24 = *((_DWORD *)v18 + 2);
  *v8 = v24;
  if ( v24 != 18 )
    return v22;
  v25 = *v9;
  LODWORD(a5) = *v9;
  if ( v22 )
  {
    if ( v22 != -1073741789 )
      return v22;
    Pool2 = (void *)ExAllocatePool2(256LL, v25, 1380994640LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v27 = sub_1406BDAE4(a1, a2, a3, v20, (__int64)&v30, (__int64)Pool2, (__int64)&a5);
    if ( v27 >= 0 )
    {
      if ( (unsigned int)a5 >= 2 )
      {
        v11 = (__int64)Pool2;
        goto LABEL_33;
      }
    }
    else
    {
      v22 = v27;
    }
LABEL_37:
    ExFreePoolWithTag(Pool2, 0);
    return v22;
  }
  if ( v13 < 2 )
    return v22;
  Pool2 = 0LL;
  if ( !v11 )
    return v22;
LABEL_33:
  if ( (unsigned __int8)sub_1406C47D8(v11) || sub_1406974B8((_WORD *)v11) )
    *v8 = 25;
  if ( Pool2 )
    goto LABEL_37;
  return v22;
}
