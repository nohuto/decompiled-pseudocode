/*
 * XREFs of sub_1800AB0F0 @ 0x1800AB0F0
 * Callers:
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18007FBF4 @ 0x18007FBF4 (sub_18007FBF4.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall sub_1800AB0F0(_OWORD *a1, __int64 a2, _BYTE *a3)
{
  int v4; // edi
  int v5; // r15d
  int v6; // r14d
  __int64 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rax
  __int64 *v10; // rax
  __int128 *v11; // rcx
  __int64 *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-79h] BYREF
  __int128 v15; // [rsp+30h] [rbp-69h] BYREF
  _OWORD *v16; // [rsp+40h] [rbp-59h]
  _DWORD v17[7]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v18; // [rsp+64h] [rbp-35h]
  int v19; // [rsp+74h] [rbp-25h]
  int v20; // [rsp+78h] [rbp-21h]
  _BYTE v21[32]; // [rsp+80h] [rbp-19h] BYREF
  char *v22[3]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp+1Fh]

  v16 = a1;
  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    v7 = (__int64 *)sub_18002850C(a2);
    sub_180017428(v7, &v14);
    v8 = v14;
    v9 = (volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F7E98);
    sub_18007FBF4((__int64 *)v22, _InterlockedExchangeAdd(v9, 1u));
    v10 = (__int64 *)sub_18001DD3C((__int64)v21, (__int64)"Deserialized sampler ", v22);
    sub_18002BC44(v8, v10);
    if ( v23 >= 0x10 )
      sub_180010884(v22[0], v23 + 1);
    v17[3] = 0;
    v17[4] = 0;
    v17[5] = 1;
    v17[6] = 7;
    v18 = xmmword_1801289A8;
    v19 = 0;
    v20 = 2139095039;
    v17[0] = v4;
    v17[1] = v5;
    v17[2] = v6;
    sub_18005C210((_QWORD *)v14, v17, 0LL);
    *a1 = v14;
    v14 = 0LL;
    v11 = &v14;
  }
  else
  {
    v12 = (__int64 *)sub_18002850C(a2);
    sub_180017428(v12, &v15);
    *a1 = v15;
    v15 = 0LL;
    v11 = &v15;
  }
  sub_180010910((__int64)v11);
  return a1;
}
