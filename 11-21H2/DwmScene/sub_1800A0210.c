/*
 * XREFs of sub_1800A0210 @ 0x1800A0210
 * Callers:
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DA7C @ 0x18001DA7C (sub_18001DA7C.c)
 *     sub_180020DB0 @ 0x180020DB0 (sub_180020DB0.c)
 *     sub_180058808 @ 0x180058808 (sub_180058808.c)
 *     sub_1800588A4 @ 0x1800588A4 (sub_1800588A4.c)
 *     sub_180058E60 @ 0x180058E60 (sub_180058E60.c)
 *     sub_18009EAC0 @ 0x18009EAC0 (sub_18009EAC0.c)
 *     sub_18009ED14 @ 0x18009ED14 (sub_18009ED14.c)
 *     sub_18009EE90 @ 0x18009EE90 (sub_18009EE90.c)
 *     sub_1800A0F8C @ 0x1800A0F8C (sub_1800A0F8C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800A0210(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  char v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  char **v11; // rax
  char **v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 *v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // xmm1_4
  int v26; // xmm2_4
  __int64 v27; // rax
  __int64 result; // rax
  __int64 v29; // [rsp+20h] [rbp-E0h] BYREF
  int v30; // [rsp+28h] [rbp-D8h] BYREF
  int v31; // [rsp+2Ch] [rbp-D4h] BYREF
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v33; // [rsp+38h] [rbp-C8h]
  __int64 *v34; // [rsp+40h] [rbp-C0h]
  __int64 v35[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36[5]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v37[240]; // [rsp+90h] [rbp-70h] BYREF
  char *v38[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v39; // [rsp+190h] [rbp+90h]
  unsigned __int64 v40; // [rsp+198h] [rbp+98h]
  char *v41[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v42; // [rsp+1B8h] [rbp+B8h]
  char *v43[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v44; // [rsp+1D8h] [rbp+D8h]
  char *v45[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v46; // [rsp+1F8h] [rbp+F8h]
  char *v47[3]; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v48; // [rsp+218h] [rbp+118h]

  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  v45[2] = 0LL;
  v7 = 0;
  v46 = 15LL;
  LOBYTE(v45[0]) = 0;
  sub_180012190((__int64 *)v45, "LUT_3D_SIZE", 0xBuLL);
  v43[2] = 0LL;
  v44 = 15LL;
  LOBYTE(v43[0]) = 0;
  sub_180012190((__int64 *)v43, "DOMAIN_MIN", 0xAuLL);
  v41[2] = 0LL;
  v42 = 15LL;
  LOBYTE(v41[0]) = 0;
  sub_180012190((__int64 *)v41, "DOMAIN_MAX", 0xAuLL);
  v8 = 0LL;
  v39 = 0LL;
  v40 = 15LL;
  LOBYTE(v38[0]) = 0;
  while ( 1 )
  {
    v9 = sub_180058808(a2, (__int64)v38);
    if ( (*(_BYTE *)(*(int *)(*(_QWORD *)v9 + 4LL) + v9 + 16) & 6) != 0 )
      break;
    v10 = v39;
    if ( v39 && !sub_18001DA7C(v38, "\r") )
    {
      v11 = v38;
      if ( v40 >= 0x10 )
        v11 = (char **)v38[0];
      if ( *(_BYTE *)v11 != 35 )
      {
        v12 = v38;
        if ( v40 >= 0x10 )
          v12 = (char **)v38[0];
        if ( *((_BYTE *)v12 + v10 - 1) == 13 )
          sub_180020DB0(v38, v10 - 1);
        v33 = v35;
        v13 = sub_18001875C(v35, (__int64)v45);
        v14 = sub_18001875C(v36, (__int64)v38);
        if ( (unsigned __int8)sub_1800A0F8C(v14, v13) )
        {
          sub_1800588A4((__int64)v37, v38);
          v47[2] = 0LL;
          v48 = 15LL;
          LOBYTE(v47[0]) = 0;
          v15 = sub_18009EAC0((__int64)v37, (__int64)v47);
          std::istream::operator>>(v15, &v29);
          v6 = v29 * v29 * v29;
          v16 = (_QWORD *)(a3 + 8);
          v17 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
          if ( v6 < v17 )
          {
            v18 = *v16 + 16 * v6;
            goto LABEL_19;
          }
          if ( v6 > v17 )
          {
            if ( v6 <= (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
            {
              v18 = sub_18009EE90(*(_QWORD *)(a3 + 16), v6 - v17);
LABEL_19:
              v16[1] = v18;
            }
            else
            {
              sub_18009ED14((__int64 *)(a3 + 8), v29 * v29 * v29);
            }
          }
          if ( v48 >= 0x10 )
            sub_180010884(v47[0], v48 + 1);
          goto LABEL_28;
        }
        v34 = v36;
        v19 = sub_18001875C(v36, (__int64)v43);
        v20 = sub_18001875C(v35, (__int64)v38);
        sub_1800A0F8C(v20, v19);
        v34 = v36;
        v21 = sub_18001875C(v36, (__int64)v41);
        v22 = sub_18001875C(v35, (__int64)v38);
        if ( (unsigned __int8)sub_1800A0F8C(v22, v21) )
        {
          v7 = 1;
        }
        else if ( v7 && v29 )
        {
          sub_1800588A4((__int64)v37, v38);
          v23 = std::istream::operator>>(v37, &v32);
          v24 = std::istream::operator>>(v23, &v30);
          std::istream::operator>>(v24, &v31);
          v25 = v30;
          v26 = v31;
          v27 = *(_QWORD *)(a3 + 8);
          *(_DWORD *)(v5 + v27) = v32;
          *(_DWORD *)(v5 + v27 + 4) = v25;
          *(_DWORD *)(v5 + v27 + 8) = v26;
          *(_DWORD *)(v5 + v27 + 12) = 1065353216;
          ++v8;
          v5 += 16LL;
          if ( v8 == v6 )
          {
            sub_180058E60((__int64)v37);
            break;
          }
LABEL_28:
          sub_180058E60((__int64)v37);
        }
      }
    }
  }
  result = v29;
  *(_QWORD *)a3 = v29;
  if ( v40 >= 0x10 )
    result = sub_180010884(v38[0], v40 + 1);
  if ( v42 >= 0x10 )
    result = sub_180010884(v41[0], v42 + 1);
  if ( v44 >= 0x10 )
    result = sub_180010884(v43[0], v44 + 1);
  if ( v46 >= 0x10 )
    return sub_180010884(v45[0], v46 + 1);
  return result;
}
