/*
 * XREFs of sub_14081B500 @ 0x14081B500
 * Callers:
 *     sub_1407FF5A4 @ 0x1407FF5A4 (sub_1407FF5A4.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_14081BA34 @ 0x14081BA34 (sub_14081BA34.c)
 */

__int64 __fastcall sub_14081B500(int a1, int a2)
{
  unsigned int v4; // esi
  char **v5; // rcx
  int v6; // r11d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r15d
  int v13; // r14d
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h]
  int v22; // [rsp+54h] [rbp-B4h]
  int v23; // [rsp+58h] [rbp-B0h]
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h]
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h]
  unsigned __int64 v36; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+F8h] [rbp-10h] BYREF
  __int16 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int16 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  __int64 *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  int *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  int *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  int *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  int *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  __int64 *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  int *v76; // [rsp+218h] [rbp+110h]
  __int64 v77; // [rsp+220h] [rbp+118h]
  __int64 *v78; // [rsp+228h] [rbp+120h]
  __int64 v79; // [rsp+230h] [rbp+128h]
  int *v80; // [rsp+238h] [rbp+130h]
  __int64 v81; // [rsp+240h] [rbp+138h]
  __int64 *v82; // [rsp+248h] [rbp+140h]
  __int64 v83; // [rsp+250h] [rbp+148h]

  v34 = 0LL;
  LODWORD(v35) = 0;
  v42 = 0LL;
  v4 = 0;
  if ( !dword_140C03A00 || !sub_1402A2000((__int64)&dword_140C03A00, 0x800000000000LL) || !byte_140C2200C )
    return v4;
  switch ( a1 )
  {
    case 2:
      if ( a2 == 2 )
      {
        if ( (unsigned int)dword_140C08F84 >= MEMORY[0xFFFFF7800000037C] )
          break;
        if ( !dword_140C08F80 )
          dword_140C08F80 = sub_14024F664(off_140C08F78, &v15);
        v5 = &off_140C08F78;
      }
      else
      {
        if ( (unsigned int)dword_140C08F9C >= MEMORY[0xFFFFF7800000037C] )
          break;
        if ( !dword_140C08F98 )
          dword_140C08F98 = sub_14024F664(off_140C08F90, &v15);
        v5 = &off_140C08F90;
      }
      goto LABEL_12;
    case 3:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140C067A4 >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C067A0 )
            dword_140C067A0 = sub_14024F664(off_140C06798, &v15);
          v5 = &off_140C06798;
          goto LABEL_12;
        case 4:
          if ( (unsigned int)dword_140C08F3C >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C08F38 )
            dword_140C08F38 = sub_14024F664(off_140C08F30, &v15);
          v5 = &off_140C08F30;
          goto LABEL_12;
        case 5:
          if ( (unsigned int)dword_140C08F24 >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C08F20 )
            dword_140C08F20 = sub_14024F664(off_140C08F18, &v15);
          v5 = &off_140C08F18;
          goto LABEL_12;
        case 6:
          if ( (unsigned int)dword_140C08F6C >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C08F68 )
            dword_140C08F68 = sub_14024F664(off_140C08F60, &v15);
          v5 = &off_140C08F60;
          goto LABEL_12;
      }
      if ( a2 == 8 && (unsigned int)dword_140C08F54 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C08F50 )
          dword_140C08F50 = sub_14024F664(off_140C08F48, &v15);
        v5 = &off_140C08F48;
        goto LABEL_12;
      }
      break;
    case 4:
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140C0678C < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C06788 )
              dword_140C06788 = sub_14024F664(off_140C06780, &v15);
            v5 = &off_140C06780;
LABEL_12:
            EtwTelemetryCoverageReport((__int64 *)v5);
          }
          break;
        case 4:
          if ( (unsigned int)dword_140C08EDC >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C08ED8 )
            dword_140C08ED8 = sub_14024F664(off_140C08ED0, &v15);
          v5 = &off_140C08ED0;
          goto LABEL_12;
        case 5:
          if ( (unsigned int)dword_140C08F0C >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C08F08 )
            dword_140C08F08 = sub_14024F664(off_140C08F00, &v15);
          v5 = &off_140C08F00;
          goto LABEL_12;
        case 6:
          if ( (unsigned int)dword_140C08EF4 >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_13;
          if ( !dword_140C08EF0 )
            dword_140C08EF0 = sub_14024F664(off_140C08EE8, &v15);
          v5 = &off_140C08EE8;
          goto LABEL_12;
        default:
          if ( a2 == 8 && (unsigned int)dword_140C08EC4 < MEMORY[0xFFFFF7800000037C] )
          {
            if ( !dword_140C08EC0 )
              dword_140C08EC0 = sub_14024F664(off_140C08EB8, &v15);
            v5 = &off_140C08EB8;
            goto LABEL_12;
          }
          break;
      }
      break;
  }
LABEL_13:
  sub_1402D66A8((ULONG_PTR)&qword_140C21FC0);
  v4 = dword_140C22008;
  if ( a1 != 5 || dword_140C21FD0 == 1 || (unsigned int)(dword_140C21FD0 - 4) <= 1 )
  {
    v7 = (sub_1402F5718() - qword_140C21FE8) / 0x2710uLL;
    v8 = v7 - qword_140C21FF8;
    v9 = (MEMORY[0xFFFFF78000000008] - qword_140C21FE0) / 0x2710uLL;
    qword_140C21FF8 = v7;
    v10 = v9 - qword_140C21FF0;
    v32 = v9 - qword_140C21FF0;
    v11 = v9 - qword_140C21FF0;
    qword_140C21FF0 = v9;
    if ( v8 <= v10 )
      v11 = v8;
    v36 = v11;
    v23 = v6 + dword_140C22000;
    dword_140C22000 += v6;
    v21 = dword_140C21FD0;
    v22 = dword_140C21FD4;
    if ( a1 != 5 )
    {
      dword_140C22004 += v6;
      dword_140C21FD0 = a1;
      dword_140C21FD4 = a2;
      if ( a1 == v6 || a1 == 4 )
        dword_140C22008 += v6;
    }
    v4 = dword_140C22008;
    v25 = dword_140C22004;
    sub_1402935D0((ULONG_PTR)&qword_140C21FC0);
    sub_140750EC4(&v42);
    v12 = 0;
    v13 = DWORD2(v42);
    if ( DWORD2(v42) )
      v12 = (unsigned int)(100 * HIDWORD(v42)) / DWORD2(v42);
    sub_14081BA34(&v34, &unk_140C21E20);
    v33 = qword_140C21FD8;
    if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x800000000000LL) )
    {
      v16 = a1;
      v44 = &v16;
      v46 = &v17;
      v48 = &v32;
      v45 = 2LL;
      v17 = a2;
      v47 = 2LL;
      v49 = 8LL;
      v20 = MEMORY[0xFFFFF780000002C4];
      v50 = &v20;
      v52 = &v33;
      v37 = v36;
      v54 = &v37;
      v56 = &v38;
      v58 = &v39;
      LOWORD(v18) = v21;
      v60 = &v18;
      LOWORD(v19) = v22;
      v62 = &v19;
      v24 = v23;
      v64 = &v24;
      v26 = v25;
      v66 = &v26;
      v68 = &v27;
      v70 = &v28;
      v72 = &v29;
      v40 = v35;
      v74 = &v40;
      v30 = v34;
      v76 = &v30;
      LODWORD(v31) = (unsigned __int8)v42;
      v78 = &v31;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      v38 = v9;
      v57 = 8LL;
      v39 = v7;
      v59 = 8LL;
      v61 = 2LL;
      v63 = 2LL;
      v65 = 4LL;
      v67 = 4LL;
      v27 = v4;
      v69 = 4LL;
      v28 = v13;
      v71 = 4LL;
      v29 = v12;
      v73 = 4LL;
      v75 = 8LL;
      v77 = 4LL;
      v79 = 4LL;
      v15 = BYTE3(v42);
      v81 = 4LL;
      v80 = &v15;
      v41 = 0x1000000LL;
      v82 = &v41;
      v83 = 8LL;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_14002F29F, 0LL, 0LL, 0x16u, &v43);
    }
  }
  else
  {
    sub_1402935D0((ULONG_PTR)&qword_140C21FC0);
  }
  return v4;
}
