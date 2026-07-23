/*
 * XREFs of sub_140789970 @ 0x140789970
 * Callers:
 *     sub_140789110 @ 0x140789110 (sub_140789110.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140788D90 @ 0x140788D90 (sub_140788D90.c)
 *     sub_140789AA4 @ 0x140789AA4 (sub_140789AA4.c)
 *     sub_140A2EE50 @ 0x140A2EE50 (sub_140A2EE50.c)
 */

__int64 __fastcall sub_140789970(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r14
  _DWORD *v10; // rdi
  int v11; // ebp
  int v12; // r15d
  int v13; // ebx
  __int64 v14; // rdx
  __int64 (**i)[3]; // r8
  __int64 *v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (**v19)[3]; // rsi
  int v20; // ebx
  __int64 v22; // rax
  _WORD *v23; // r9
  unsigned int v24; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = a2;
  Handle = 0LL;
  v12 = a1;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 != 2 )
    goto LABEL_2;
  v22 = *(_QWORD *)a4 - 0x498DAD270D6C5BD7LL;
  if ( *(_QWORD *)a4 == 0x498DAD270D6C5BD7LL )
    v22 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( v22 )
  {
LABEL_2:
    v14 = 0LL;
    for ( i = &off_140002D80; ; i += 5 )
    {
      v16 = (__int64 *)*i;
      if ( LODWORD((**i)[2]) == v13 )
      {
        v17 = *v16 - *(_QWORD *)a4;
        if ( *v16 == *(_QWORD *)a4 )
          v17 = v16[1] - *(_QWORD *)(a4 + 8);
        if ( !v17 )
          break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= 4 )
        return (unsigned int)-1073741802;
    }
    v18 = 5 * v14;
    v19 = &off_140002D80 + 5 * v14;
    if ( !v19 )
      return (unsigned int)-1073741802;
    if ( !a3 )
    {
      v20 = sub_140789AA4(v12, v11, 1, 0, (__int64)&Handle, 0LL);
      if ( v20 < 0 )
        goto LABEL_12;
      a3 = Handle;
    }
    v20 = sub_140788D90(v18, a3, (__int64)v19, v8, a6, a7, v10);
  }
  else
  {
    v23 = a6;
    v24 = a7 >> 1;
    *v8 = 18;
    v20 = sub_140A2EE50(a1, 3LL, a2, v23, v24, v10);
    if ( (int)(v20 + 0x80000000) < 0 || v20 == -1073741789 )
      *v10 *= 2;
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v20;
}
