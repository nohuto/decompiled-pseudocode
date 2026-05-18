/*
 * XREFs of sub_18004BDC0 @ 0x18004BDC0
 * Callers:
 *     sub_18004BCA0 @ 0x18004BCA0 (sub_18004BCA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o__fdclass @ 0x18000BF6A (_o__fdclass.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180026660 @ 0x180026660 (sub_180026660.c)
 *     GsDriverEntry @ 0x18003D48C (GsDriverEntry.c)
 *     sub_180048974 @ 0x180048974 (sub_180048974.c)
 *     sub_180048A00 @ 0x180048A00 (sub_180048A00.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_18004A3C4 @ 0x18004A3C4 (sub_18004A3C4.c)
 *     sub_18004A604 @ 0x18004A604 (sub_18004A604.c)
 *     sub_18004ABBC @ 0x18004ABBC (sub_18004ABBC.c)
 *     sub_18004C258 @ 0x18004C258 (sub_18004C258.c)
 *     sub_18004C2A0 @ 0x18004C2A0 (sub_18004C2A0.c)
 *     sub_180070348 @ 0x180070348 (sub_180070348.c)
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18004BDC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int128 *a8,
        __int64 a9,
        float *a10,
        char a11)
{
  __int64 v14; // rdx
  char v15; // al
  char v16; // dl
  __int64 v17; // rsi
  const char *v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rbx
  signed int v24; // r12d
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  char v31; // r14
  const char *v32; // r8
  float v33; // xmm2_4
  unsigned __int64 **v34; // rax
  __int64 v35; // rcx
  __int128 v37; // [rsp+28h] [rbp-D1h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C1h]
  __int64 v39; // [rsp+40h] [rbp-B9h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B1h]
  __int64 v41; // [rsp+50h] [rbp-A9h]
  __int64 v42; // [rsp+58h] [rbp-A1h] BYREF
  __int128 v43; // [rsp+68h] [rbp-91h] BYREF
  __int128 v44; // [rsp+78h] [rbp-81h]
  __int128 v45; // [rsp+88h] [rbp-71h]
  __int128 v46; // [rsp+98h] [rbp-61h]
  __int64 v47; // [rsp+A8h] [rbp-51h]
  __int64 *v48; // [rsp+B0h] [rbp-49h]
  const char *v49; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-39h]
  int v51; // [rsp+C8h] [rbp-31h]
  int v52; // [rsp+CCh] [rbp-2Dh]
  unsigned __int64 v53; // [rsp+D0h] [rbp-29h]

  v38 = a2;
  v47 = a2;
  v42 = a3;
  v48 = a5;
  LODWORD(v41) = 0;
  v43 = *a8;
  v44 = a8[1];
  v45 = a8[2];
  v46 = a8[3];
  LOBYTE(v14) = sub_18004C2A0(&v43);
  v15 = sub_18004C258(&v43, v14);
  if ( v16 && v15 )
  {
    v17 = a1 + 56;
  }
  else
  {
    v43 = xmmword_180106A40;
    v44 = xmmword_180106A50;
    v45 = xmmword_180106A60;
    v46 = xmmword_180106A70;
    sub_180010DD0(
      &v49,
      (__int64)"LOADED TRANSFORM IS NOT VALID Node ID=%.16X has a transform that is non-affine or not finite. Elements of"
               " the matrix are either NaN or infinite. The matrix has been set to identity ");
    v17 = a1 + 56;
    sub_180011C50(a1 + 56, &v37);
    v18 = (const char *)&v49;
    if ( v53 >= 0x10 )
      v18 = v49;
    sub_18001DB68(&stru_1801C8308, 4, v18, *(_QWORD *)(v37 + 368));
    if ( *((_QWORD *)&v37 + 1) )
      sub_180010530(*((__int64 *)&v37 + 1));
    sub_180011B24((__int64)&v49);
  }
  sub_180011C50(v17, &v37);
  GsDriverEntry(v37, (__int64)&v43);
  if ( *((_QWORD *)&v37 + 1) )
    sub_180010530(*((__int64 *)&v37 + 1));
  v19 = sub_180026660(a3);
  v20 = sub_180070348(v19, a6, a4);
  v39 = a1;
  v21 = sub_18004ABBC(&v49, &v39, &v42);
  v37 = 0LL;
  v37 = *(_OWORD *)v21;
  *v21 = 0LL;
  v21[1] = 0LL;
  v22 = v20;
  v23 = v38;
  ((void (__fastcall *)(__int64, __int64, __int64, __int128 *))sub_18007048C)(v19, v38, v22, &v37);
  LODWORD(v41) = 1;
  if ( v50 )
    sub_180010530(v50);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v24 = sub_180048A80(*a5);
    v26 = sub_180048974(v25);
    sub_18001DB68(&stru_1801C8308, 3, "MeshInstance: Vertex count %u", v24);
    sub_18001DB68(&stru_1801C8308, 3, "MeshInstance: Index count  %u", v26);
    sub_18001DB68(&stru_1801C8308, 3, "MeshInstance: Index per Vertex count %f", (float)((float)v26 / (float)v24));
    if ( v24 )
    {
      sub_180011C50(v17, &v37);
      sub_180013E14(v37, &v39);
      if ( *((_QWORD *)&v37 + 1) )
        sub_180010530(*((__int64 *)&v37 + 1));
      v27 = v39;
      if ( v39 )
      {
        v29 = v40;
      }
      else
      {
        sub_180011C50(v17, &v37);
        v28 = sub_180013C74(v37, &v49);
        v27 = *v28;
        v29 = v28[1];
        *v28 = 0LL;
        v28[1] = 0LL;
        v39 = v27;
        v30 = v40;
        v40 = v29;
        if ( v30 )
          sub_180010530(v30);
        if ( v50 )
          sub_180010530(v50);
        if ( *((_QWORD *)&v37 + 1) )
          sub_180010530(*((__int64 *)&v37 + 1));
      }
      v31 = a11;
      if ( !a11 )
        goto LABEL_36;
      if ( (__int16)o__fdclass() > 0 || (__int16)o__fdclass() > 0 )
      {
        sub_180010DD0(
          &v49,
          (__int64)"LOADED BOUNDS ARE NOT FINITE! Node ID=%.16X has a bounding box that is not finite. Elements of the bo"
                   "unding box are either NaN or infinite The Bounding will be recalculated.");
        v32 = (const char *)&v49;
        if ( v53 >= 0x10 )
          v32 = v49;
        sub_18001DB68(&stru_1801C8308, 4, v32, a7);
        v31 = 0;
        sub_180011B24((__int64)&v49);
      }
      if ( (v33 = *a10, *a10 == 0.0) && a10[1] == 0.0 && a10[2] == 0.0 || !v31 )
      {
LABEL_36:
        v34 = (unsigned __int64 **)sub_180048A00(*a5, &v49, 0);
        sub_18004A3C4(v27, v34, v24);
        if ( v50 )
          sub_180010530(v50);
      }
      else
      {
        v49 = *(const char **)a9;
        LODWORD(v50) = *(_DWORD *)(a9 + 8);
        *((float *)&v50 + 1) = v33;
        v51 = *((_DWORD *)a10 + 1);
        v52 = *((_DWORD *)a10 + 2);
        sub_18004A604(v27, (__int64)&v49);
      }
      if ( v29 )
        sub_180010530(v29);
    }
    v23 = v38;
  }
  v35 = a5[1];
  if ( v35 )
    sub_180010530(v35);
  return v23;
}
