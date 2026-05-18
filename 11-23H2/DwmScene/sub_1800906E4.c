/*
 * XREFs of sub_1800906E4 @ 0x1800906E4
 * Callers:
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18001FA00 @ 0x18001FA00 (sub_18001FA00.c)
 *     sub_180050FB8 @ 0x180050FB8 (sub_180050FB8.c)
 *     sub_180051054 @ 0x180051054 (sub_180051054.c)
 *     sub_1800515C4 @ 0x1800515C4 (sub_1800515C4.c)
 *     sub_18008F04C @ 0x18008F04C (sub_18008F04C.c)
 *     sub_18008F230 @ 0x18008F230 (sub_18008F230.c)
 *     sub_1800911D8 @ 0x1800911D8 (sub_1800911D8.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800906E4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  _BYTE *v10; // rax
  int v11; // eax
  _BYTE *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // xmm1_4
  int v24; // xmm2_4
  __int64 v25; // rax
  __int64 v27; // [rsp+20h] [rbp-E0h] BYREF
  int v28; // [rsp+28h] [rbp-D8h] BYREF
  int v29; // [rsp+2Ch] [rbp-D4h] BYREF
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-C8h]
  _QWORD *v32; // [rsp+40h] [rbp-C0h]
  _QWORD v33[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v34[5]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v35[30]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v37; // [rsp+190h] [rbp+90h]
  unsigned __int64 v38; // [rsp+198h] [rbp+98h]
  void *v39[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v40[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v41[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v42[4]; // [rsp+200h] [rbp+100h] BYREF

  v27 = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  sub_180010DD0(v42, (__int64)"LUT_3D_SIZE");
  sub_180010DD0(v41, (__int64)"DOMAIN_MIN");
  sub_180010DD0(v40, (__int64)"DOMAIN_MAX");
  v6 = 0LL;
  v7 = 0;
  v36[0] = 0LL;
  v37 = 0LL;
  v38 = 15LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = sub_180050FB8(a2, (__int64)v36);
    if ( !(unsigned __int8)std::ios_base::operator bool(v9 + *(int *)(*(_QWORD *)v9 + 4LL)) )
      break;
    if ( !sub_18001F84C((__int64)v36) )
    {
      v10 = v36;
      if ( v38 >= 0x10 )
        v10 = (_BYTE *)v36[0];
      if ( v37 != 1 || (*v10 != 13 ? (v11 = *v10 < 0xDu ? -1 : 1) : (v11 = 0), v11) )
      {
        v12 = v36;
        if ( v38 >= 0x10 )
          v12 = (_BYTE *)v36[0];
        if ( *v12 != 35 )
        {
          v13 = v36;
          if ( v38 >= 0x10 )
            v13 = (_QWORD *)v36[0];
          if ( *((_BYTE *)v13 + v37 - 1) == 13 )
            sub_18001FA00(v36, v37 - 1);
          v31 = v33;
          v14 = sub_180017648(v33, (__int64)v42);
          v15 = sub_180017648(v34, (__int64)v36);
          if ( (unsigned __int8)sub_1800911D8(v15, v14) )
          {
            sub_180051054(v35, v36);
            v39[0] = 0LL;
            v39[2] = 0LL;
            v39[3] = (void *)15;
            v16 = sub_18008F04C((__int64)v35, v39);
            std::istream::operator>>(v16, &v27);
            v5 = v27 * v27 * v27;
            sub_18008F230((_QWORD *)(a3 + 8), v5);
            sub_180011B24((__int64)v39);
            goto LABEL_25;
          }
          v32 = v34;
          v17 = sub_180017648(v34, (__int64)v41);
          v18 = sub_180017648(v33, (__int64)v36);
          sub_1800911D8(v18, v17);
          v32 = v34;
          v19 = sub_180017648(v34, (__int64)v40);
          v20 = sub_180017648(v33, (__int64)v36);
          if ( (unsigned __int8)sub_1800911D8(v20, v19) )
          {
            v7 = 1;
          }
          else if ( v7 && v27 )
          {
            sub_180051054(v35, v36);
            v21 = std::istream::operator>>(v35, &v30);
            v22 = std::istream::operator>>(v21, &v28);
            std::istream::operator>>(v22, &v29);
            v23 = v28;
            v24 = v29;
            v25 = *(_QWORD *)(a3 + 8);
            *(_DWORD *)(v8 + v25) = v30;
            *(_DWORD *)(v8 + v25 + 4) = v23;
            *(_DWORD *)(v8 + v25 + 8) = v24;
            *(_DWORD *)(v8 + v25 + 12) = 1065353216;
            ++v6;
            v8 += 16LL;
            if ( v6 == v5 )
            {
              sub_1800515C4((__int64)v35);
              break;
            }
LABEL_25:
            sub_1800515C4((__int64)v35);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v27;
  sub_180011B24((__int64)v36);
  sub_180011B24((__int64)v40);
  sub_180011B24((__int64)v41);
  return sub_180011B24((__int64)v42);
}
