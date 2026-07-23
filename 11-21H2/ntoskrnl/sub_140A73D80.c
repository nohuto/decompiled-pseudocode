/*
 * XREFs of sub_140A73D80 @ 0x140A73D80
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 *     sub_140A7042C @ 0x140A7042C (sub_140A7042C.c)
 *     sub_140A7471C @ 0x140A7471C (sub_140A7471C.c)
 */

__int64 __fastcall sub_140A73D80(_DWORD *a1, char **a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // r8
  int *v9; // rdi
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[504]; // [rsp+58h] [rbp-A8h] BYREF

  v16 = 0;
  v2 = (unsigned int)a1[4];
  v17[0] = 56LL;
  v17[1] = a1;
  if ( (unsigned int)v2 > 0x20 || (v5 = 16LL * (unsigned int)v2, v6 = (unsigned int)v2, *(unsigned __int16 *)a2 != v5) )
  {
    a1[2] = -1073741823;
    goto LABEL_19;
  }
  v7 = 16 * v2;
  sub_140A6F124(a2[1], (__int64)v18, 16 * v2, 0, 4, &v16);
  if ( v16 != v5 )
  {
    a1[2] = -1073741823;
LABEL_19:
    KdSendPacket(2LL, v17, a2, &xmmword_140C31E60);
    return (unsigned int)a1[2];
  }
  a1[2] = 0;
  if ( (_DWORD)v2 )
  {
    v9 = (int *)v19;
    do
    {
      if ( *v9 )
      {
        if ( !sub_140A7042C(*v9) )
          a1[2] = -1073741823;
        *v9 = 0;
      }
      v9 += 4;
      --v2;
    }
    while ( v2 );
    v10 = v19;
    do
    {
      v11 = *((_QWORD *)v10 - 1);
      if ( v11 )
      {
        LOBYTE(v8) = 1;
        v12 = sub_140A7471C(v11, 204LL, v8, 0LL, v14, v15);
        *v10 = v12;
        if ( !v12 )
          a1[2] = -1073741823;
      }
      v10 += 4;
      --v6;
    }
    while ( v6 );
  }
  sub_140A6F124(a2[1], (__int64)v18, v7, 0, 5, &v16);
  KdSendPacket(2LL, v17, a2, &xmmword_140C31E60);
  return (unsigned int)a1[5];
}
