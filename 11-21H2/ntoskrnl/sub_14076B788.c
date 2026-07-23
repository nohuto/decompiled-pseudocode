/*
 * XREFs of sub_14076B788 @ 0x14076B788
 * Callers:
 *     sub_14076B5DC @ 0x14076B5DC (sub_14076B5DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_14076BA8C @ 0x14076BA8C (sub_14076BA8C.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14076B788(__int64 a1, __int64 a2, __int64 a3)
{
  void *Pool2; // rdi
  __int64 result; // rax
  __int64 v7; // r14
  int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r15d
  __int64 *v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  int v18; // r9d
  int v19; // r8d
  int v20; // eax
  unsigned int v21; // [rsp+60h] [rbp-79h] BYREF
  int v22; // [rsp+64h] [rbp-75h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-71h] BYREF
  int v24; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v26; // [rsp+78h] [rbp-61h] BYREF
  __int64 v27; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v29[80]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0;
  Pool2 = 0LL;
  v23 = 0;
  v21 = 0;
  v24 = 0;
  result = sub_140779CA0(&v27, 0LL, a1);
  if ( (int)result >= 0 )
  {
    v7 = v27;
    v8 = sub_14077F2EC(qword_140D00AC0, v27, 16, 0, 131097, 0, (__int64)&v26, 0LL);
    if ( v8 >= 0 )
    {
      v22 = 78;
      v8 = sub_14077CD90(qword_140D00AC0, v7, (_DWORD)v26, 9, (__int64)&v23, (__int64)v29, (__int64)&v22, 0);
      if ( v8 >= 0 && v23 == 1 && v22 )
        v8 = sub_140789460(qword_140D00AC0, (unsigned int)v29, v9, v10, 131097, 0, (__int64)&Handle, 0LL);
      v28[2] = a3;
      v28[0] = a1;
      v28[1] = sub_14067ABD0;
      v22 = 170;
      Pool2 = (void *)ExAllocatePool2(256LL, 170LL, 538996816LL);
      if ( Pool2 )
      {
        v11 = 0;
        v12 = &qword_140007270;
        while ( 1 )
        {
          v13 = *((_BYTE *)v12 + 16);
          if ( v13 && !Handle )
            goto LABEL_16;
          v14 = v12[1];
          v21 = v22;
          if ( v13 )
            v15 = v14
                ? sub_14077DA5C(
                    qword_140D00AC0,
                    (unsigned int)v29,
                    2,
                    (_DWORD)Handle,
                    0LL,
                    v14,
                    (__int64)&v24,
                    (__int64)Pool2,
                    v22,
                    (__int64)&v21,
                    0)
                : sub_1406BDAE4(
                    *(__int64 *)&qword_140D00AC0,
                    (__int64)v29,
                    (__int64)Handle,
                    *(_DWORD *)v12,
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21);
          else
            v15 = v14
                ? sub_14077DA5C(
                    qword_140D00AC0,
                    v7,
                    1,
                    (_DWORD)v26,
                    0LL,
                    v14,
                    (__int64)&v24,
                    (__int64)Pool2,
                    v22,
                    (__int64)&v21,
                    0)
                : sub_14077CD90(
                    qword_140D00AC0,
                    v7,
                    (_DWORD)v26,
                    *(_DWORD *)v12,
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21,
                    0);
          v8 = v15;
          if ( v15 == -1073741789 )
            break;
LABEL_14:
          if ( v8 == -1073741275 )
          {
            v8 = 0;
          }
          else
          {
            if ( v8 < 0 )
              goto LABEL_17;
            v8 = sub_14076BA8C(v23, Pool2, v21, v28);
            if ( v8 < 0 )
              goto LABEL_17;
          }
LABEL_16:
          ++v11;
          v12 += 3;
          if ( v11 >= 5 )
            goto LABEL_17;
        }
        ExFreePoolWithTag(Pool2, 0);
        v22 = v21;
        Pool2 = (void *)ExAllocatePool2(256LL, v21, 538996816LL);
        if ( !Pool2 )
          goto LABEL_46;
        v16 = v12[1];
        if ( *((_BYTE *)v12 + 16) )
        {
          v17 = v29;
          if ( !v16 )
          {
            v20 = sub_1406BDAE4(
                    *(__int64 *)&qword_140D00AC0,
                    (__int64)v29,
                    (__int64)Handle,
                    *(_DWORD *)v12,
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21);
            goto LABEL_45;
          }
          v18 = (int)Handle;
          v19 = 2;
        }
        else
        {
          LODWORD(v17) = v7;
          if ( !v16 )
          {
            v20 = sub_14077CD90(
                    qword_140D00AC0,
                    v7,
                    (_DWORD)v26,
                    *(_DWORD *)v12,
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21,
                    0);
            goto LABEL_45;
          }
          v18 = (int)v26;
          v19 = 1;
        }
        v20 = sub_14077DA5C(
                qword_140D00AC0,
                (_DWORD)v17,
                v19,
                v18,
                0LL,
                v16,
                (__int64)&v24,
                (__int64)Pool2,
                v22,
                (__int64)&v21,
                0);
LABEL_45:
        v8 = v20;
        goto LABEL_14;
      }
LABEL_46:
      v8 = -1073741670;
    }
LABEL_17:
    if ( v7 )
      sub_14077BAB8(v7, a1);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v26 )
      ZwClose(v26);
    return (unsigned int)v8;
  }
  return result;
}
