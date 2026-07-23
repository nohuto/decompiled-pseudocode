/*
 * XREFs of sub_140805320 @ 0x140805320
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140805320(int *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned int v7; // ecx
  int v8; // esi
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  bool v11; // zf
  REGHANDLE v12; // rbx
  REGHANDLE v13; // rbx
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  int v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v33; // [rsp+80h] [rbp-88h] BYREF
  BOOL v34; // [rsp+84h] [rbp-84h] BYREF
  int v35; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v37; // [rsp+90h] [rbp-78h] BYREF
  int v38; // [rsp+94h] [rbp-74h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v41; // [rsp+A0h] [rbp-68h] BYREF
  int v42; // [rsp+A4h] [rbp-64h] BYREF
  int v43; // [rsp+A8h] [rbp-60h] BYREF
  int v44; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v45; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v55; // [rsp+100h] [rbp-8h] BYREF
  __int64 v56; // [rsp+108h] [rbp+0h] BYREF
  __int64 v57; // [rsp+110h] [rbp+8h] BYREF
  __int64 v58; // [rsp+118h] [rbp+10h] BYREF
  __int64 v59; // [rsp+120h] [rbp+18h] BYREF
  __int64 v60; // [rsp+128h] [rbp+20h] BYREF
  __int64 v61; // [rsp+130h] [rbp+28h] BYREF
  __int64 v62; // [rsp+138h] [rbp+30h] BYREF
  __int64 v63; // [rsp+140h] [rbp+38h] BYREF
  __int64 v64; // [rsp+148h] [rbp+40h] BYREF
  __int64 v65; // [rsp+150h] [rbp+48h] BYREF
  __int64 v66; // [rsp+158h] [rbp+50h] BYREF
  __int64 v67; // [rsp+160h] [rbp+58h] BYREF
  __int64 v68; // [rsp+168h] [rbp+60h] BYREF
  __int64 v69; // [rsp+170h] [rbp+68h] BYREF
  __int64 v70; // [rsp+178h] [rbp+70h] BYREF
  __int64 v71; // [rsp+180h] [rbp+78h] BYREF
  __int64 v72; // [rsp+188h] [rbp+80h] BYREF
  __int64 v73; // [rsp+190h] [rbp+88h] BYREF
  __int64 v74; // [rsp+198h] [rbp+90h] BYREF
  __int64 v75; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v76; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v77; // [rsp+1B0h] [rbp+A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h]
  int *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  __int64 *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  __int64 *v85; // [rsp+208h] [rbp+100h]
  __int64 v86; // [rsp+210h] [rbp+108h]
  __int64 *v87; // [rsp+218h] [rbp+110h]
  __int64 v88; // [rsp+220h] [rbp+118h]
  __int64 *v89; // [rsp+228h] [rbp+120h]
  __int64 v90; // [rsp+230h] [rbp+128h]
  __int64 *v91; // [rsp+238h] [rbp+130h]
  __int64 v92; // [rsp+240h] [rbp+138h]
  int *v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  char *v95; // [rsp+258h] [rbp+150h]
  __int64 v96; // [rsp+260h] [rbp+158h]
  BOOL *v97; // [rsp+268h] [rbp+160h]
  __int64 v98; // [rsp+270h] [rbp+168h]
  int *v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  __int64 *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  __int64 *v103; // [rsp+298h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+198h]
  int *v105; // [rsp+2A8h] [rbp+1A0h]
  __int64 v106; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v107; // [rsp+2B8h] [rbp+1B0h]
  __int64 v108; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  int *v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  int *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  __int64 *v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  int *v117; // [rsp+308h] [rbp+200h]
  __int64 v118; // [rsp+310h] [rbp+208h]
  int *v119; // [rsp+318h] [rbp+210h]
  __int64 v120; // [rsp+320h] [rbp+218h]
  int *v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+330h] [rbp+228h]
  int *v123; // [rsp+338h] [rbp+230h]
  __int64 v124; // [rsp+340h] [rbp+238h]
  int *v125; // [rsp+348h] [rbp+240h]
  __int64 v126; // [rsp+350h] [rbp+248h]
  int *v127; // [rsp+358h] [rbp+250h]
  __int64 v128; // [rsp+360h] [rbp+258h]
  __int64 *v129; // [rsp+368h] [rbp+260h]
  __int64 v130; // [rsp+370h] [rbp+268h]
  __int64 *v131; // [rsp+378h] [rbp+270h]
  __int64 v132; // [rsp+380h] [rbp+278h]
  __int64 *v133; // [rsp+388h] [rbp+280h]
  __int64 v134; // [rsp+390h] [rbp+288h]
  __int64 *v135; // [rsp+398h] [rbp+290h]
  __int64 v136; // [rsp+3A0h] [rbp+298h]
  __int64 *v137; // [rsp+3A8h] [rbp+2A0h]
  __int64 v138; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v139; // [rsp+3B8h] [rbp+2B0h]
  __int64 v140; // [rsp+3C0h] [rbp+2B8h]
  __int64 v141; // [rsp+410h] [rbp+308h] BYREF

  v141 = a2;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 11);
  v17 = *a1;
  v48 = *((_QWORD *)a1 + 5);
  v45 = *((_QWORD *)a1 + 6);
  v18 = a1[14];
  v47 = *((_QWORD *)a1 + 8);
  v46 = *((_QWORD *)a1 + 9);
  v51 = *((_QWORD *)a1 + 12);
  v54 = *((_QWORD *)a1 + 13);
  v55 = *((_QWORD *)a1 + 10);
  v5 = *((_QWORD *)a1 + 16);
  v6 = *((_BYTE *)a1 + 124);
  v52 = v5;
  v14 = v6 >> 1;
  v20 = a1[29];
  v53 = *((_QWORD *)a1 + 19);
  v21 = v6 & 1;
  v7 = *((unsigned __int8 *)a1 + 125);
  LOBYTE(v5) = *((_BYTE *)a1 + 125);
  v16 = 0;
  v23 = v5 & 1;
  v57 = *((_QWORD *)a1 + 29);
  v56 = *((_QWORD *)a1 + 30);
  v58 = *((_QWORD *)a1 + 31);
  v59 = *((_QWORD *)a1 + 32);
  v60 = *((_QWORD *)a1 + 33);
  v29 = a1[47];
  v30 = a1[48];
  v25 = (unsigned __int8)byte_140C4EF1C;
  v24 = (unsigned __int8)byte_140C0C644;
  v31 = *((unsigned __int8 *)a1 + 196);
  v26 = a1[50];
  v27 = a1[51];
  v28 = a1[57];
  v50 = v3;
  v49 = v4;
  v22 = (v7 >> 1) & 1;
  if ( !v3 )
  {
    v45 = 0LL;
    v4 = 0LL;
    v48 = 0LL;
    v47 = 0LL;
    v46 = 0LL;
    v49 = 0LL;
  }
  v19 = v4 != 0;
  v8 = 0;
  Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(256LL, 752LL, 1346721364LL);
  UserData = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)&Pool2->Size = 4LL;
    Pool2->Ptr = (ULONGLONG)&v17;
    Pool2[1].Ptr = (ULONGLONG)&v45;
    *(_QWORD *)&Pool2[1].Size = 8LL;
    Pool2[2].Ptr = (ULONGLONG)&v46;
    *(_QWORD *)&Pool2[2].Size = 8LL;
    Pool2[3].Ptr = (ULONGLONG)&v47;
    *(_QWORD *)&Pool2[3].Size = 8LL;
    Pool2[4].Ptr = (ULONGLONG)&v48;
    *(_QWORD *)&Pool2[4].Size = 8LL;
    Pool2[5].Ptr = (ULONGLONG)&v50;
    *(_QWORD *)&Pool2[5].Size = 8LL;
    Pool2[6].Ptr = (ULONGLONG)&v18;
    *(_QWORD *)&Pool2[6].Size = 4LL;
    Pool2[7].Ptr = (ULONGLONG)&v14;
    *(_QWORD *)&Pool2[7].Size = 1LL;
    Pool2[8].Ptr = (ULONGLONG)&v19;
    *(_QWORD *)&Pool2[8].Size = 4LL;
    Pool2[9].Ptr = (ULONGLONG)&v20;
    *(_QWORD *)&Pool2[9].Size = 4LL;
    Pool2[10].Ptr = (ULONGLONG)&v49;
    *(_QWORD *)&Pool2[10].Size = 8LL;
    Pool2[11].Ptr = (ULONGLONG)&v51;
    *(_QWORD *)&Pool2[11].Size = 8LL;
    Pool2[12].Ptr = (ULONGLONG)&v21;
    *(_QWORD *)&Pool2[12].Size = 4LL;
    Pool2[13].Ptr = (ULONGLONG)&v52;
    *(_QWORD *)&Pool2[13].Size = 8LL;
    Pool2[14].Ptr = (ULONGLONG)&v53;
    *(_QWORD *)&Pool2[14].Size = 8LL;
    Pool2[15].Ptr = (ULONGLONG)&v22;
    *(_QWORD *)&Pool2[15].Size = 4LL;
    Pool2[16].Ptr = (ULONGLONG)&v23;
    *(_QWORD *)&Pool2[16].Size = 4LL;
    Pool2[17].Ptr = (ULONGLONG)&v54;
    *(_QWORD *)&Pool2[17].Size = 8LL;
    Pool2[18].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&Pool2[18].Size = 4LL;
    Pool2[19].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&Pool2[19].Size = 4LL;
    Pool2[20].Ptr = (ULONGLONG)&v24;
    *(_QWORD *)&Pool2[20].Size = 4LL;
    Pool2[21].Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&Pool2[21].Size = 4LL;
    Pool2[22].Ptr = (ULONGLONG)&v141;
    *(_QWORD *)&Pool2[22].Size = 1LL;
    Pool2[23].Ptr = (ULONGLONG)&v31;
    *(_QWORD *)&Pool2[23].Size = 4LL;
    Pool2[24].Ptr = (ULONGLONG)&v26;
    *(_QWORD *)&Pool2[24].Size = 4LL;
    Pool2[25].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&Pool2[25].Size = 4LL;
    Pool2[26].Ptr = (ULONGLONG)&qword_140C21FA8;
    *(_QWORD *)&Pool2[26].Size = 8LL;
    v11 = byte_140C5AE14 == 0;
    Pool2[27].Ptr = 0xFFFFF780000002C4uLL;
    *(_QWORD *)&Pool2[27].Size = 4LL;
    Pool2[28].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&Pool2[28].Size = 4LL;
    Pool2[29].Ptr = (ULONGLONG)&v55;
    *(_QWORD *)&Pool2[29].Size = 8LL;
    Pool2[30].Ptr = (ULONGLONG)&v56;
    *(_QWORD *)&Pool2[30].Size = 8LL;
    Pool2[31].Ptr = (ULONGLONG)&v57;
    *(_QWORD *)&Pool2[31].Size = 8LL;
    Pool2[32].Ptr = (ULONGLONG)&v58;
    *(_QWORD *)&Pool2[32].Size = 8LL;
    Pool2[33].Ptr = (ULONGLONG)&v59;
    *(_QWORD *)&Pool2[33].Size = 8LL;
    Pool2[34].Ptr = (ULONGLONG)&v60;
    *(_QWORD *)&Pool2[34].Size = 8LL;
    v16 = *((unsigned __int8 *)a1 + 272);
    Pool2[35].Ptr = (ULONGLONG)&v16;
    *(_QWORD *)&Pool2[35].Size = 4LL;
    Pool2[36].Ptr = (ULONGLONG)(a1 + 72);
    *(_QWORD *)&Pool2[36].Size = 4LL;
    Pool2[37].Ptr = (ULONGLONG)(a1 + 73);
    *(_QWORD *)&Pool2[37].Size = 4LL;
    Pool2[38].Ptr = (ULONGLONG)(a1 + 70);
    *(_QWORD *)&Pool2[38].Size = 8LL;
    Pool2[39].Ptr = (ULONGLONG)(a1 + 78);
    *(_QWORD *)&Pool2[39].Size = 4LL;
    Pool2[40].Ptr = (ULONGLONG)(a1 + 79);
    *(_QWORD *)&Pool2[40].Size = 4LL;
    Pool2[41].Ptr = (ULONGLONG)(a1 + 76);
    *(_QWORD *)&Pool2[41].Size = 8LL;
    Pool2[42].Ptr = (ULONGLONG)(a1 + 74);
    *(_QWORD *)&Pool2[42].Size = 4LL;
    Pool2[43].Ptr = (ULONGLONG)(a1 + 75);
    *(_QWORD *)&Pool2[43].Size = 4LL;
    Pool2[44].Ptr = (ULONGLONG)(a1 + 80);
    *(_QWORD *)&Pool2[44].Size = 4LL;
    Pool2[45].Ptr = (ULONGLONG)(a1 + 81);
    *(_QWORD *)&Pool2[45].Size = 4LL;
    Pool2[46].Ptr = (ULONGLONG)(a1 + 56);
    *(_QWORD *)&Pool2[46].Size = 4LL;
    if ( !v11 )
    {
      v12 = RegHandle;
      if ( EtwEventEnabled(RegHandle, &stru_14000F990) )
      {
        if ( byte_140C5AC3C )
          EtwWrite(v12, &stru_14000F990, 0LL, 0x2Fu, UserData);
      }
    }
    if ( byte_140C5AE16 )
    {
      v13 = CallbackContext;
      if ( EtwEventEnabled(CallbackContext, &stru_14000F980) )
      {
        if ( byte_140C5AC3C )
          EtwWrite(v13, &stru_14000F980, 0LL, 0x2Fu, UserData);
      }
    }
    ExFreePoolWithTag(UserData, 0x50455654u);
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v61 = qword_140C21FA8;
      v79 = &v61;
      v32 = v17;
      v81 = &v32;
      v62 = v45;
      v83 = &v62;
      v63 = v46;
      v85 = &v63;
      v64 = v47;
      v87 = &v64;
      v65 = v48;
      v89 = &v65;
      v66 = v50;
      v91 = &v66;
      v33 = v18;
      v93 = &v33;
      v15 = v14;
      v95 = &v15;
      v34 = v19;
      v97 = &v34;
      v35 = v20;
      v99 = &v35;
      v67 = v49;
      v101 = &v67;
      v68 = v51;
      v103 = &v68;
      v36 = v21;
      v105 = &v36;
      v69 = v52;
      v107 = &v69;
      v70 = v53;
      v109 = &v70;
      v80 = 8LL;
      v82 = 4LL;
      v84 = 8LL;
      v86 = 8LL;
      v88 = 8LL;
      v90 = 8LL;
      v92 = 8LL;
      v94 = 4LL;
      v96 = 1LL;
      v98 = 4LL;
      v100 = 4LL;
      v102 = 8LL;
      v104 = 8LL;
      v106 = 4LL;
      v108 = 8LL;
      v110 = 8LL;
      v37 = v22;
      v112 = 4LL;
      v111 = &v37;
      v38 = v23;
      v114 = 4LL;
      v113 = &v38;
      v71 = v54;
      v115 = &v71;
      v39 = v24;
      v117 = &v39;
      v40 = v25;
      v119 = &v40;
      v41 = v26;
      v121 = &v41;
      v42 = v27;
      v123 = &v42;
      v125 = &v43;
      v44 = v28;
      v127 = &v44;
      v72 = v55;
      v129 = &v72;
      v73 = v56;
      v131 = &v73;
      v74 = v57;
      v133 = &v74;
      v75 = v58;
      v135 = &v75;
      v76 = v59;
      v137 = &v76;
      v77 = v60;
      v139 = &v77;
      v116 = 8LL;
      v118 = 4LL;
      v120 = 4LL;
      v122 = 4LL;
      v124 = 4LL;
      v43 = v8;
      v126 = 4LL;
      v128 = 4LL;
      v130 = 8LL;
      v132 = 8LL;
      v134 = 8LL;
      v136 = 8LL;
      v138 = 8LL;
      v140 = 8LL;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002FD6D, 0LL, 0LL, 0x21u, &v78);
    }
  }
}
