/*
 * XREFs of sub_140A2E5CC @ 0x140A2E5CC
 * Callers:
 *     sub_140A30A20 @ 0x140A30A20 (sub_140A30A20.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140788D90 @ 0x140788D90 (sub_140788D90.c)
 *     sub_140A2EE50 @ 0x140A2EE50 (sub_140A2EE50.c)
 *     sub_140A2F588 @ 0x140A2F588 (sub_140A2F588.c)
 */

__int64 __fastcall sub_140A2E5CC(
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
  __int64 v14; // rax
  _WORD *v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  __int64 (**i)[3]; // r8
  __int64 *v19; // r11
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 (**v23)[3]; // rsi
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
  if ( v13 == 2 )
  {
    v14 = *(_QWORD *)a4 - 0x498DAD270D6C5BD7LL;
    if ( *(_QWORD *)a4 == 0x498DAD270D6C5BD7LL )
      v14 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v14 )
    {
      v15 = a6;
      v24 = a7 >> 1;
      *v8 = 18;
      v16 = sub_140A2EE50(a1, 4LL, a2, v15, v24, v10);
      if ( (int)(v16 + 0x80000000) < 0 || v16 == -1073741789 )
        *v10 *= 2;
      goto LABEL_21;
    }
  }
  v17 = 0LL;
  for ( i = &off_14000AEA0; ; i += 5 )
  {
    v19 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v13 )
    {
      v20 = *v19 - *(_QWORD *)a4;
      if ( *v19 == *(_QWORD *)a4 )
        v20 = v19[1] - *(_QWORD *)(a4 + 8);
      if ( !v20 )
        break;
    }
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= 2 )
      return (unsigned int)-1073741802;
  }
  v22 = 5 * v17;
  v23 = &off_14000AEA0 + 5 * v17;
  if ( !v23 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    v16 = sub_140A2F588(v12, v11, 1, 0, (__int64)&Handle, 0LL);
    if ( v16 < 0 )
      goto LABEL_21;
    a3 = Handle;
  }
  v16 = sub_140788D90(v22, a3, (__int64)v23, v8, a6, a7, v10);
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
