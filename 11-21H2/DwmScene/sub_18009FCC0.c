/*
 * XREFs of sub_18009FCC0 @ 0x18009FCC0
 * Callers:
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DA7C @ 0x18001DA7C (sub_18001DA7C.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_180058808 @ 0x180058808 (sub_180058808.c)
 *     sub_1800588A4 @ 0x1800588A4 (sub_1800588A4.c)
 *     sub_180058E60 @ 0x180058E60 (sub_180058E60.c)
 *     sub_18009ED14 @ 0x18009ED14 (sub_18009ED14.c)
 *     sub_18009EE90 @ 0x18009EE90 (sub_18009EE90.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009FCC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 result; // rax
  char **v9; // rax
  char **v10; // rcx
  char **v11; // rdx
  char **v12; // rcx
  unsigned __int64 v13; // r8
  _BYTE *i; // rax
  _BYTE *v15; // r9
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  float v22; // xmm2_4
  float v23; // xmm1_4
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-E0h] BYREF
  int v26; // [rsp+24h] [rbp-DCh] BYREF
  int v27; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v28[240]; // [rsp+30h] [rbp-D0h] BYREF
  char *v29[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v30; // [rsp+130h] [rbp+30h]
  unsigned __int64 v31; // [rsp+138h] [rbp+38h]

  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  v30 = 0LL;
  v31 = 15LL;
  LOBYTE(v29[0]) = 0;
  while ( 1 )
  {
    result = sub_180058808(a2, (__int64)v29);
    if ( (*(_BYTE *)(*(int *)(*(_QWORD *)result + 4LL) + result + 16) & 6) != 0 )
      break;
    if ( v30 && !sub_18001DA7C(v29, "\r") )
    {
      v9 = v29;
      if ( v31 >= 0x10 )
        v9 = (char **)v29[0];
      if ( *(_BYTE *)v9 != 35 )
      {
        if ( v5 )
        {
          sub_1800588A4((__int64)v28, v29);
          v20 = std::istream::operator>>(v28, &v27);
          v21 = std::istream::operator>>(v20, &v26);
          std::istream::operator>>(v21, &v25);
          v22 = (float)v25;
          v23 = (float)v26;
          v24 = *(_QWORD *)(a3 + 8) + 16 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
          *(float *)v24 = (float)v27;
          *(float *)(v24 + 4) = v23;
          *(float *)(v24 + 8) = v22;
          *(_DWORD *)(v24 + 12) = 1065353216;
          ++v7;
          result = sub_180058E60((__int64)v28);
          if ( v7 == v6 )
            break;
        }
        else
        {
          v10 = v29;
          if ( v31 >= 0x10 )
            v10 = (char **)v29[0];
          sub_18001FB60((__int64)v10);
          v12 = v29;
          if ( v13 >= 0x10 )
            v12 = v11;
          for ( i = (_BYTE *)sub_18001FB60((__int64)v12); i != v15; ++i )
          {
            v16 = v5 + 1;
            if ( *i != 32 )
              v16 = v5;
            v5 = v16;
          }
          ++v5;
          v6 = v5 * v5 * v5;
          v17 = (_QWORD *)(a3 + 8);
          v18 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
          if ( v6 < v18 )
          {
            v19 = *v17 + 16 * v6;
            goto LABEL_24;
          }
          if ( v6 > v18 )
          {
            if ( v6 <= (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
            {
              v19 = sub_18009EE90(*(_QWORD *)(a3 + 16), v6 - v18);
LABEL_24:
              v17[1] = v19;
            }
            else
            {
              sub_18009ED14((__int64 *)(a3 + 8), v5 * v5 * v5);
            }
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  if ( v31 >= 0x10 )
    return sub_180010884(v29[0], v31 + 1);
  return result;
}
