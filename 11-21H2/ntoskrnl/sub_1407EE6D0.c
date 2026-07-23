/*
 * XREFs of sub_1407EE6D0 @ 0x1407EE6D0
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

void __fastcall sub_1407EE6D0(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned __int8 v6; // r9
  unsigned int v7; // ebx
  const CHAR *v8; // rsi
  const CHAR *v9; // r14
  const CHAR *v10; // r15
  const CHAR *v11; // r12
  const CHAR *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  const CHAR *v20; // rdx
  bool v21; // zf
  const CHAR *v22; // rdx
  const CHAR *v23; // r9
  const CHAR *v24; // rdx
  unsigned __int8 v25; // r8
  const CHAR *v26; // r9
  const CHAR *v27; // rdx
  const CHAR *v28; // r9
  const CHAR *v29; // rdx
  const CHAR *v30; // r9
  const CHAR *v31; // rdx
  const CHAR *v32; // r9
  const CHAR *v33; // rdx
  const CHAR *v34; // r9
  const CHAR *v35; // rdx
  int v36; // r10d
  unsigned int v37; // r11d
  __int64 v38; // r9
  unsigned int v39; // eax
  unsigned __int64 v40; // rax
  const CHAR *v41; // r8
  unsigned __int8 v42; // r11
  const CHAR *v43; // r8
  const CHAR *v44; // r8
  const CHAR *v45; // r8
  const CHAR *v46; // rdx
  const CHAR *v47; // r8
  const CHAR *v48; // rdx
  const CHAR *v49; // r8
  const CHAR *v50; // rdx
  int v51; // r10d
  __int64 v52; // r11
  __int64 v53; // r9
  unsigned int v54; // eax
  unsigned __int64 v55; // rax
  int Buffer; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+44h] [rbp-BCh] BYREF
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+4Ch] [rbp-B4h] BYREF
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v62; // [rsp+58h] [rbp-A8h] BYREF
  int v63; // [rsp+5Ch] [rbp-A4h] BYREF
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67[2]; // [rsp+70h] [rbp-90h] BYREF
  int *v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  int *v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  _BYTE v72[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v73[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v74[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v75[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v76[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v77[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v78[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v79[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  int *v82; // [rsp+140h] [rbp+40h]
  __int64 v83; // [rsp+148h] [rbp+48h]
  int *v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  unsigned int *v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+168h] [rbp+68h]
  int *v88; // [rsp+170h] [rbp+70h]
  __int64 v89; // [rsp+178h] [rbp+78h]
  int *v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+188h] [rbp+88h]
  int *p_Buffer; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  __int64 *v94; // [rsp+1A0h] [rbp+A0h]
  __int64 v95; // [rsp+1A8h] [rbp+A8h]

  *a3 = 0;
  if ( !dword_140C229B4 )
  {
    v6 = 0;
    dword_140C22B38 = 0;
LABEL_3:
    LOBYTE(v7) = 0;
LABEL_4:
    dword_140C22B58 = 0;
    goto LABEL_5;
  }
  v13 = (unsigned int)a1[1];
  LODWORD(v14) = 100000;
  if ( (unsigned int)xmmword_140C22A04 > (unsigned int)v13 )
  {
    if ( (_DWORD)xmmword_140C22A04 )
      v14 = 100000 * v13 / (unsigned __int64)(unsigned int)xmmword_140C22A04;
    else
      LODWORD(v14) = 0;
  }
  v15 = 0;
  if ( dword_140C22B2C != -1 )
    v15 = v14 - dword_140C22B2C;
  v16 = ((int)v14 + 500) / 0x3E8u;
  v17 = (dword_140C22B2C + 500) / 0x3E8u;
  if ( v16 != v17 )
    *a3 = v16 - v17;
  v6 = byte_140C22B3C;
  LOBYTE(v7) = byte_140C22B28;
  dword_140C22B2C = v14;
  if ( a2 == 1 )
  {
    v6 = 0;
    dword_140C22B38 = 0;
    LOBYTE(v7) = 1;
    goto LABEL_4;
  }
  if ( a2 != ((xmmword_140C229E0 & 1) == 0) )
  {
    v6 = 0;
LABEL_20:
    dword_140C22B38 = v14;
    goto LABEL_3;
  }
  if ( byte_140C229B8 )
  {
    if ( byte_140C22B3C )
      goto LABEL_3;
    goto LABEL_20;
  }
  v18 = dword_140C22B38;
  if ( dword_140C22B38 < (unsigned int)v14 )
  {
    v18 = v14;
    dword_140C22B38 = v14;
  }
  if ( v18 > (int)v14 + dword_140C09838 )
    v6 = 1;
  v19 = v15 + dword_140C22B58;
  dword_140C22B58 = v19;
  if ( (int)abs32(v19) >= dword_140C09834 )
  {
    v7 = v19 >> 31;
    goto LABEL_4;
  }
LABEL_5:
  v8 = "AC Power";
  v9 = "Battery Discharging";
  v10 = "Battery Charging";
  v11 = "Battery Critical";
  v12 = "Battery charge limiting mode";
  if ( byte_140C22B3C != v6 )
  {
    byte_140C22B3C = v6;
    Buffer = v6;
    ZwUpdateWnfStateData(&stru_140037800, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
      {
        v68 = &v57;
        v20 = "AC Power";
        v58 = dword_140C229B4;
        v70 = &v58;
        v21 = (*a1 & 1) == 0;
        v57 = (unsigned __int8)byte_140C22B3C;
        if ( v21 )
          v20 = "DC Power";
        v69 = 4LL;
        v71 = 4LL;
        sub_1403699D0((__int64)v72, v20);
        v22 = "Battery Discharging";
        if ( (*a1 & 2) == 0 )
          v22 = (const CHAR *)qword_14086D650;
        sub_1403699D0((__int64)v73, v22);
        v24 = "Battery Charging";
        if ( ((unsigned __int8)*a1 & v25) == 0 )
          v24 = v23;
        sub_1403699D0((__int64)v74, v24);
        v27 = "Battery Critical";
        if ( (*a1 & 8) == 0 )
          v27 = v26;
        sub_1403699D0((__int64)v75, v27);
        v29 = "Battery charge limiting mode";
        if ( (*a1 & 0x10) == 0 )
          v29 = v28;
        sub_1403699D0((__int64)v76, v29);
        v31 = "Battery charging state power supply present";
        if ( (*a1 & 0x20) == 0 )
          v31 = v30;
        sub_1403699D0((__int64)v77, v31);
        v33 = "Battery charging state adequate";
        if ( (*a1 & 0x40) == 0 )
          v33 = v32;
        sub_1403699D0((__int64)v78, v33);
        v35 = "Platform BCL Enabled";
        if ( (byte_140C22BB0 & 1) == 0 )
          v35 = v34;
        sub_1403699D0((__int64)v79, v35);
        v38 = (unsigned int)a1[1];
        if ( (_DWORD)xmmword_140C22A04 )
          v39 = (((unsigned int)xmmword_140C22A04 >> 1) + 100 * (_DWORD)v38) / (unsigned int)xmmword_140C22A04;
        else
          v39 = v37;
        v59 = v39;
        v80 = &v59;
        v81 = 4LL;
        if ( (_DWORD)xmmword_140C22A04 )
          v40 = 100000 * v38 / (unsigned __int64)(unsigned int)xmmword_140C22A04;
        else
          LODWORD(v40) = v37;
        v60 = v40;
        v61 = v38;
        v82 = &v60;
        v62 = xmmword_140C22A04;
        v84 = &v61;
        v83 = 4LL;
        v86 = &v62;
        v63 = a1[2];
        v88 = &v63;
        v64 = a1[3];
        v90 = &v64;
        p_Buffer = &v65;
        v94 = &v66;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        v65 = v36;
        v93 = 4LL;
        v66 = 0x1000000LL;
        v95 = 8LL;
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140030C41, 0LL, 0LL, 0x14u, v67);
      }
    }
  }
  if ( byte_140C22B28 != (_BYTE)v7 )
  {
    byte_140C22B28 = v7;
    v65 = (unsigned __int8)v7;
    ZwUpdateWnfStateData(&stru_1400377C8, &v65, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
      {
        v68 = &v64;
        v63 = dword_140C229B4;
        v70 = &v63;
        v21 = (*a1 & 1) == 0;
        v64 = (unsigned __int8)byte_140C22B28;
        if ( v21 )
          v8 = "DC Power";
        v69 = 4LL;
        v71 = 4LL;
        sub_1403699D0((__int64)v72, v8);
        if ( (*a1 & 2) == 0 )
          v9 = (const CHAR *)qword_14086D650;
        sub_1403699D0((__int64)v73, v9);
        if ( ((unsigned __int8)*a1 & v42) == 0 )
          v10 = v41;
        sub_1403699D0((__int64)v74, v10);
        if ( (*a1 & 8) == 0 )
          v11 = v43;
        sub_1403699D0((__int64)v75, v11);
        if ( (*a1 & 0x10) == 0 )
          v12 = v44;
        sub_1403699D0((__int64)v76, v12);
        v46 = "Battery charging state power supply present";
        if ( (*a1 & 0x20) == 0 )
          v46 = v45;
        sub_1403699D0((__int64)v77, v46);
        v48 = "Battery charging state adequate";
        if ( (*a1 & 0x40) == 0 )
          v48 = v47;
        sub_1403699D0((__int64)v78, v48);
        v50 = "Platform BCL Enabled";
        if ( (byte_140C22BB0 & 1) == 0 )
          v50 = v49;
        sub_1403699D0((__int64)v79, v50);
        v53 = (unsigned int)a1[1];
        if ( (_DWORD)xmmword_140C22A04 )
          v54 = (((unsigned int)xmmword_140C22A04 >> 1) + 100 * (_DWORD)v53) / (unsigned int)xmmword_140C22A04;
        else
          v54 = 0;
        v62 = v54;
        v80 = &v62;
        v81 = v52;
        if ( (_DWORD)xmmword_140C22A04 )
          v55 = 100000 * v53 / (unsigned __int64)(unsigned int)xmmword_140C22A04;
        else
          LODWORD(v55) = 0;
        v61 = v55;
        v60 = v53;
        v82 = &v61;
        v59 = xmmword_140C22A04;
        v84 = &v60;
        v83 = v52;
        v86 = &v59;
        v58 = a1[2];
        v88 = &v58;
        v57 = a1[3];
        v90 = &v57;
        p_Buffer = &Buffer;
        v85 = v52;
        v87 = v52;
        v89 = v52;
        v91 = v52;
        Buffer = v51;
        v93 = v52;
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)word_140030752, 0LL, 0LL, 0x13u, v67);
      }
    }
  }
}
