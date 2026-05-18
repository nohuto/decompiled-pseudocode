/*
 * XREFs of sub_1800E5D28 @ 0x1800E5D28
 * Callers:
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 */

__int64 __fastcall sub_1800E5D28(unsigned int a1, int a2, int a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v7; // r9d
  char *v8; // rdi
  __int64 i; // rcx
  unsigned int v10; // ecx
  _DWORD v12[2]; // [rsp+20h] [rbp-98h]
  char v13; // [rsp+28h] [rbp-90h] BYREF
  int v14; // [rsp+78h] [rbp-40h]
  int v15; // [rsp+7Ch] [rbp-3Ch]
  int v16; // [rsp+80h] [rbp-38h]

  v4 = 0;
  v5 = a1;
  if ( a4 )
    v7 = *a4;
  else
    v7 = sub_18004E9D8(a1, a2);
  if ( (_DWORD)v5 == 23 )
  {
    return v7 * (a3 + ((unsigned int)(a3 + 1) >> 1));
  }
  else
  {
    v12[0] = 0;
    v12[1] = 1;
    v8 = &v13;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v8 = 1;
      v8 += 4;
    }
    v14 = 4;
    v15 = 1;
    v16 = 1;
    v10 = v12[v5];
    if ( v10 )
      return v7 * ((v10 + a3 - 1) / v10);
  }
  return v4;
}
