/*
 * XREFs of sub_14068C238 @ 0x14068C238
 * Callers:
 *     sub_14068B3E0 @ 0x14068B3E0 (sub_14068B3E0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140689C24 @ 0x140689C24 (sub_140689C24.c)
 *     sub_14068C154 @ 0x14068C154 (sub_14068C154.c)
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068CF68 @ 0x14068CF68 (sub_14068CF68.c)
 *     sub_14068D648 @ 0x14068D648 (sub_14068D648.c)
 *     sub_14068D6C4 @ 0x14068D6C4 (sub_14068D6C4.c)
 *     sub_14068E154 @ 0x14068E154 (sub_14068E154.c)
 *     sub_14068E2EC @ 0x14068E2EC (sub_14068E2EC.c)
 *     sub_1406E10CC @ 0x1406E10CC (sub_1406E10CC.c)
 *     sub_14091ACEC @ 0x14091ACEC (sub_14091ACEC.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 */

__int64 __fastcall sub_14068C238(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r13
  char v6; // r12
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // r15
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // r9
  unsigned int v16; // ebx
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // eax
  signed int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  signed int v25; // eax
  unsigned int v26; // r9d
  int v27; // r12d
  int v28; // ebx
  _DWORD *v29; // rax
  int v30; // ecx
  unsigned int v31; // r9d
  ULONG v32; // r9d
  int v33; // r10d
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+68h] [rbp-98h] BYREF
  __int128 v41; // [rsp+78h] [rbp-88h]
  __int128 v42; // [rsp+88h] [rbp-78h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET v45[3]; // [rsp+B8h] [rbp-48h]
  _DWORD v46[24]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  __int64 *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  __int64 *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]

  v38 = 0LL;
  v37 = 0;
  v36 = 0LL;
  v39 = a3;
  v5 = 0LL;
  v6 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v44 = 0LL;
  *(_OWORD *)v45 = 0LL;
  memset(v46, 0, 0x5CuLL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v25 = sub_1406E10CC(BugCheckParameter2, 0LL);
    if ( v25 < 0 )
      sub_14020A890(a4, 0, 6, v25, 8u);
  }
  v8 = sub_14068E2EC(BugCheckParameter2, &v36, &v38);
  v9 = 2LL;
  v10 = v8;
  switch ( v8 )
  {
    case 2:
      v34 = 0;
      v26 = -1073741670;
LABEL_40:
      v14 = v26;
LABEL_43:
      sub_14020A890(a4, 0, 6, v26, v34);
      v11 = v36;
      goto LABEL_27;
    case 7:
      v14 = -1073741491;
      v34 = 8;
LABEL_42:
      v26 = v14;
      goto LABEL_43;
    case 0:
      v14 = -1073741476;
      v34 = 16;
      goto LABEL_42;
  }
  if ( (unsigned int)(v8 - 4) <= 1 && !*(_DWORD *)(BugCheckParameter2 + 168) )
  {
    v26 = -1073741492;
    v34 = 32;
    goto LABEL_40;
  }
  v11 = v36;
  v12 = 4;
  if ( v8 == 5 )
  {
    v27 = *(_DWORD *)(v36 + 8);
  }
  else
  {
    if ( v8 != 4 )
      goto LABEL_8;
    v27 = 0;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 168) == 1 )
  {
    Privileges[0] = (PPRIVILEGE_SET)BugCheckParameter2;
    *((_QWORD *)&v40 + 1) = sub_14091B2F0;
    v28 = 1;
    DWORD1(v44) = 1;
    *(_QWORD *)&v41 = Privileges;
    LODWORD(v40) = 1;
  }
  else
  {
    v28 = 2;
    v29 = (_DWORD *)&v44 + 1;
    v30 = 4;
    do
    {
      *(_QWORD *)(v29 - 5) = BugCheckParameter2;
      *v29 = v30++;
      v29 += 6;
      --v9;
    }
    while ( v9 );
    LODWORD(v40) = 4;
    *((_QWORD *)&v40 + 1) = sub_14091B2F0;
    *(_QWORD *)&v42 = sub_14091B2F0;
    *((_QWORD *)&v42 + 1) = (char *)&v44 + 8;
    *(_QWORD *)&v41 = Privileges;
    DWORD2(v41) = 5;
  }
  if ( v10 == 4 )
  {
    LOBYTE(v9) = 1;
    v5 = sub_14042A5E0(4096LL, v9);
    if ( !v5 )
    {
      v31 = -1073741670;
      v35 = 48;
LABEL_88:
      v14 = v31;
      goto LABEL_89;
    }
    LOBYTE(v12) = 1;
  }
  else
  {
    LOBYTE(v12) = 0;
  }
  v13 = sub_1409246D8((unsigned int)&v38, v27, v12, (unsigned int)&v40, v28, (__int64)v46, v5);
  v14 = v13;
  if ( v13 < 0 )
  {
    v35 = 56;
LABEL_62:
    v31 = v13;
LABEL_89:
    sub_14020A890(a4, 0, 6, v31, v35);
    goto LABEL_27;
  }
  if ( v10 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 208) |= 0x40u;
    v11 = v5;
    v5 = 0LL;
  }
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x200000000000LL) )
  {
    v48 = &v36;
    v49 = v32;
    v50 = &v38;
    LODWORD(v36) = v10;
    v38 = 0x1000000LL;
    v51 = 8LL;
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029D8B, 0LL, 0LL, v32, v47);
  }
  v6 = 0;
LABEL_8:
  *(_QWORD *)(BugCheckParameter2 + 64) = v11;
  v11 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        - 4096
                                        + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
  v13 = sub_140689C24(BugCheckParameter2, &v37);
  v14 = v13;
  if ( v13 < 0 )
  {
    v35 = 128;
    goto LABEL_62;
  }
  v15 = *(_QWORD *)(BugCheckParameter2 + 64);
  v16 = v37;
  if ( v37 < *(_DWORD *)(v15 + 40) + 4096
    && (v39 & 0x20000) == 0
    && (BYTE3(NlsMbOemCodePageTag) || (dword_140C4986C & 6) != 0) )
  {
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x200000000000LL) )
    {
      LODWORD(v36) = v33;
      v48 = &v36;
      v49 = 4LL;
      v50 = (__int64 *)&v37;
      v37 = v16;
      v52 = &v38;
      v51 = 4LL;
      v38 = 0x1000000LL;
      v53 = 8LL;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&dword_140029DDC, 0LL, 0LL, 5u, v47);
      v15 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v15 + 4088) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v16 - 4096) & 0xFFFFF000;
    v15 = *(_QWORD *)(BugCheckParameter2 + 64);
  }
  if ( (unsigned int)(*(_DWORD *)(v15 + 40) - 1) > 0x7FFFDFFF )
  {
    v31 = -1073741492;
    v35 = 112;
    goto LABEL_88;
  }
  v13 = sub_14068E154(BugCheckParameter2);
  v14 = v13;
  if ( v13 < 0 )
  {
    v35 = 132;
    goto LABEL_62;
  }
  v17 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v17 & 0x20000) != 0 )
  {
    v18 = (v17 >> 22) & 2;
    v19 = v18 | 1;
    if ( (v17 & 0x8001) == 0 )
      v19 = v18;
    v20 = sub_14068D6C4(
            (int)BugCheckParameter2 + 224,
            *(_QWORD *)(BugCheckParameter2 + 1544),
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
            (unsigned int)&xmmword_140C490E0,
            v19);
    v14 = v20;
    if ( v20 < 0 )
    {
      sub_14020A890(a4, 0, 6, v20, 0x88u);
      goto LABEL_27;
    }
    v13 = sub_14068C154(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
    v14 = v13;
    if ( v13 < 0 )
    {
      v35 = 140;
      goto LABEL_62;
    }
  }
  else
  {
    v13 = sub_14091ACEC(BugCheckParameter2);
    v14 = v13;
    if ( v13 < 0 )
    {
      v35 = 144;
      goto LABEL_62;
    }
  }
  sub_14068D648(*(_QWORD *)(BugCheckParameter2 + 1544), *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v46[15] )
  {
    v13 = sub_14091ADA0(BugCheckParameter2, a4);
    v14 = v13;
    if ( v13 < 0 )
    {
      v35 = 160;
      goto LABEL_62;
    }
    v21 = *(_QWORD *)(BugCheckParameter2 + 64);
    v6 = 1;
  }
  else
  {
    v21 = *(_QWORD *)(BugCheckParameter2 + 64);
    v22 = *(_DWORD *)(v21 + 4);
    *(_DWORD *)(BugCheckParameter2 + 172) = v22;
    *(_DWORD *)(BugCheckParameter2 + 184) = v22;
    *(_DWORD *)(BugCheckParameter2 + 176) = v22;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  }
  v13 = sub_14068CF68(BugCheckParameter2, *(unsigned int *)(v21 + 40), 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    v35 = 176;
    goto LABEL_62;
  }
  v13 = sub_14068C544(BugCheckParameter2);
  v14 = v13;
  if ( v13 == 1073741833 )
  {
    v6 = 1;
    goto LABEL_22;
  }
  if ( v13 < 0 )
  {
    v35 = 192;
    goto LABEL_62;
  }
LABEL_22:
  v23 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v23 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v23 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
  if ( v10 == 4 || v6 )
    v14 = 1073741833;
  else
    v14 = 0;
LABEL_27:
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v45[0] )
    SeFreePrivileges(v45[0]);
  if ( v5 )
    sub_14042A5E0(v5, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v11 )
    sub_14042A5E0(v11, *(unsigned int *)(BugCheckParameter2 + 132));
  return v14;
}
