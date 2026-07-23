/*
 * XREFs of sub_1409E2580 @ 0x1409E2580
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140882F8A @ 0x140882F8A (sub_140882F8A.c)
 */

void __fastcall sub_1409E2580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  int v8; // r10d
  _DWORD *v9; // r11
  unsigned int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r11
  char **v13; // rbx
  _QWORD *v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  _QWORD *v17; // r14
  unsigned __int64 **v18; // r15
  unsigned __int64 **v19; // r12
  _QWORD *v20; // r13
  _QWORD *v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _QWORD *v24; // r9
  _QWORD *v25; // r9
  _QWORD *v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // r8
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v32; // [rsp+50h] [rbp-B8h]
  _QWORD *v33; // [rsp+58h] [rbp-B0h]
  _QWORD *v34; // [rsp+60h] [rbp-A8h]
  _QWORD *v35; // [rsp+68h] [rbp-A0h]
  _QWORD v36[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  _QWORD v38[2]; // [rsp+98h] [rbp-70h] BYREF
  char *v39; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-48h]
  __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-38h]
  _QWORD v45[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v46[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v47[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v48[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v49[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v50[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v51[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v52[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v53[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v54[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v55[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v56[8]; // [rsp+188h] [rbp+80h] BYREF

  LODWORD(v29) = 0;
  v31 = 0LL;
  v30 = 0LL;
  v37 = 0LL;
  *(_OWORD *)&v36[1] = 0LL;
  sub_140882F8A(&v36[1], a1);
  if ( v5 )
    LODWORD(v37) = *(_DWORD *)(v5 + 1428);
  else
    LODWORD(v37) = 0;
  HIDWORD(v37) = v8;
  v38[0] = &v36[1];
  v38[1] = 24LL;
  if ( v7 == 1829 )
  {
    switch ( v8 )
    {
      case 12:
        v10 = 13;
        v32 = v49;
        v13 = &v39;
        v33 = v50;
        v15 = &v41;
        v34 = v51;
        v16 = &v43;
        v35 = v52;
        v17 = v45;
        v14 = v53;
        v18 = (unsigned __int64 **)v46;
        v19 = (unsigned __int64 **)v47;
        v20 = v48;
        v11 = v6 + 8;
        v12 = v6 + 16;
        break;
      case 15:
        v39 = (char *)v6;
        v41 = v6 + 4;
        v10 = 3;
        v40 = 4LL;
        v7 = 1836;
        v42 = 4LL;
        goto LABEL_18;
      case 32:
        v39 = (char *)v6;
        v32 = v52;
        v11 = v6 + 8;
        v40 = 4LL;
        v33 = v53;
        v12 = v6 + 16;
        v41 = v6 + 8;
        v34 = v54;
        v10 = 16;
        v42 = 8LL;
        v35 = v55;
        v13 = (char **)v45;
        v14 = v56;
        v43 = v6 + 16;
        v44 = 1LL;
        v15 = v46;
        v16 = v47;
        v17 = v48;
        v18 = (unsigned __int64 **)v49;
        v19 = (unsigned __int64 **)v50;
        v20 = v51;
        break;
      default:
        return;
    }
    *((_DWORD *)v13 + 3) = 0;
    v21 = v32;
    *((_DWORD *)v13 + 2) = 4;
    v36[0] = v14;
    *v13 = (char *)(v6 + 40);
    v22 = *(_QWORD *)(v6 + 48);
    *v15 = v6;
    v15[1] = 8LL;
    *v16 = v11;
    v16[1] = 8LL;
    *v17 = v12;
    v17[1] = 8LL;
    v18[1] = (unsigned __int64 *)8;
    v30 = v22 >> 12;
    *v18 = &v30;
    v23 = *(_QWORD *)(v6 + 24);
    v19[1] = (unsigned __int64 *)8;
    v31 = v23 >> 12;
    *v19 = &v31;
    *v20 = v6 + 32;
    v20[1] = 4LL;
    *v21 = v6 + 36;
    v21[1] = 4LL;
    v24 = v33;
    *v33 = v6 + 44;
    v24[1] = 4LL;
    v25 = v34;
    *v34 = v6 + 56;
    v25[1] = 4LL;
    v26 = v35;
    *v35 = v6 + 60;
    v27 = v6 + 64;
    v28 = (_QWORD *)v36[0];
    v26[1] = 4LL;
    v7 = 1833;
    *v28 = v27;
    v28[1] = 4LL;
    goto LABEL_18;
  }
  if ( v7 == 1830 )
  {
    if ( v8 != 13 )
      return;
    v39 = (char *)v6;
    v41 = v6 + 4;
    v10 = 19;
    v40 = 4LL;
    v43 = v6 + 8;
    v7 = 1835;
    v42 = 4LL;
    v45[0] = v6 + 16;
    v46[0] = v6 + 24;
    v47[0] = v6 + 32;
    v48[0] = v6 + 40;
    v49[0] = v6 + 48;
    v50[0] = v6 + 56;
    v51[0] = v6 + 80;
    v52[0] = v6 + 64;
    v53[0] = v6 + 72;
    v54[0] = v6 + 76;
    v55[0] = v6 + 88;
    v56[0] = v6 + 92;
    v56[2] = v6 + 96;
    v56[4] = v6 + 100;
    LODWORD(v29) = *v9;
    v56[6] = &v29;
    v44 = 8LL;
    v45[1] = 8LL;
    v46[1] = 8LL;
    v47[1] = 8LL;
    v48[1] = 8LL;
    v49[1] = 8LL;
    v50[1] = 8LL;
    v51[1] = 8LL;
    v52[1] = 8LL;
    v53[1] = 4LL;
    v54[1] = 4LL;
    v55[1] = 4LL;
    v56[1] = 4LL;
    v56[3] = 4LL;
    v56[5] = 4LL;
    v56[7] = 4LL;
    goto LABEL_18;
  }
  if ( v7 > 0x726u && v7 <= 0x728u )
  {
    v40 = 4LL;
    v39 = &a5;
    v10 = 2;
LABEL_18:
    sub_14035EDE4((__int64)v38, v10, 0x80000u, v7, 0x501904u);
  }
}
