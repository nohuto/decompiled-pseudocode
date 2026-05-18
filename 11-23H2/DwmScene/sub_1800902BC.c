/*
 * XREFs of sub_1800902BC @ 0x1800902BC
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18001F85C @ 0x18001F85C (sub_18001F85C.c)
 *     sub_180050FB8 @ 0x180050FB8 (sub_180050FB8.c)
 *     sub_180051054 @ 0x180051054 (sub_180051054.c)
 *     sub_1800515C4 @ 0x1800515C4 (sub_1800515C4.c)
 *     sub_18008F230 @ 0x18008F230 (sub_18008F230.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800902BC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  _BYTE *v9; // rax
  int v10; // eax
  _BYTE *v11; // rax
  _QWORD *v12; // rax
  _BYTE *v13; // r9
  _BYTE *v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  float v19; // xmm2_4
  float v20; // xmm1_4
  __int64 v21; // r9
  int v23; // [rsp+20h] [rbp-E0h] BYREF
  int v24; // [rsp+24h] [rbp-DCh] BYREF
  int v25; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v27[30]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v28[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v29; // [rsp+140h] [rbp+40h]
  unsigned __int64 v30; // [rsp+148h] [rbp+48h]

  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  v28[0] = 0LL;
  v29 = 0LL;
  v30 = 15LL;
  while ( 1 )
  {
    v8 = sub_180050FB8(a2, (__int64)v28);
    if ( !(unsigned __int8)std::ios_base::operator bool(v8 + *(int *)(*(_QWORD *)v8 + 4LL)) )
      break;
    if ( !sub_18001F84C((__int64)v28) )
    {
      v9 = v28;
      if ( v30 >= 0x10 )
        v9 = (_BYTE *)v28[0];
      if ( v29 != 1 || (*v9 != 13 ? (v10 = *v9 < 0xDu ? -1 : 1) : (v10 = 0), v10) )
      {
        v11 = v28;
        if ( v30 >= 0x10 )
          v11 = (_BYTE *)v28[0];
        if ( *v11 != 35 )
        {
          if ( v5 )
          {
            sub_180051054(v27, v28);
            v17 = std::istream::operator>>(v27, &v25);
            v18 = std::istream::operator>>(v17, &v24);
            std::istream::operator>>(v18, &v23);
            v19 = (float)v23;
            v20 = (float)v24;
            v21 = *(_QWORD *)(a3 + 8) + 16 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
            *(float *)v21 = (float)v25;
            *(float *)(v21 + 4) = v20;
            *(float *)(v21 + 8) = v19;
            *(_DWORD *)(v21 + 12) = 1065353216;
            ++v7;
            sub_1800515C4((__int64)v27);
            if ( v7 == v6 )
              break;
          }
          else
          {
            v12 = sub_18001F85C(v28, &v26);
            v14 = v28;
            if ( v15 >= 0x10 )
              v14 = v13;
            while ( v14 != (_BYTE *)*v12 )
            {
              v16 = v5 + 1;
              if ( *v14 != 32 )
                v16 = v5;
              v5 = v16;
              ++v14;
            }
            ++v5;
            v6 = v5 * v5 * v5;
            sub_18008F230((_QWORD *)(a3 + 8), v6);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  return sub_180011B24((__int64)v28);
}
