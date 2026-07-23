/*
 * XREFs of sub_14078600C @ 0x14078600C
 * Callers:
 *     sub_1406DA264 @ 0x1406DA264 (sub_1406DA264.c)
 *     sub_1407857F0 @ 0x1407857F0 (sub_1407857F0.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D04CC @ 0x1406D04CC (sub_1406D04CC.c)
 *     sub_1406D068C @ 0x1406D068C (sub_1406D068C.c)
 *     sub_1406D4FE0 @ 0x1406D4FE0 (sub_1406D4FE0.c)
 *     sub_1406E5DD4 @ 0x1406E5DD4 (sub_1406E5DD4.c)
 *     sub_140745F48 @ 0x140745F48 (sub_140745F48.c)
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140784C2C @ 0x140784C2C (sub_140784C2C.c)
 *     sub_1407889F4 @ 0x1407889F4 (sub_1407889F4.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 *     sub_140789210 @ 0x140789210 (sub_140789210.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 */

__int64 __fastcall sub_14078600C(
        __int64 a1,
        WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        GUID *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  __int64 v9; // r13
  GUID *v10; // r14
  unsigned int inited; // ebx
  unsigned int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // eax
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // r11
  const WCHAR *v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  unsigned int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int *v38; // rax
  unsigned int v39; // edx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  bool v47; // zf
  __int64 v48; // rax
  int v49; // edi
  int v50; // r9d
  int v51; // eax
  int v52; // r9d
  int v53; // eax
  __int64 v54; // rax
  int v55; // edi
  unsigned int v56; // eax
  int v57; // r9d
  unsigned int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // r9d
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  bool v67; // zf
  __int64 v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // edi
  int v75; // r9d
  __int64 v76; // rax
  int v77; // eax
  int v78; // eax
  int v79; // edx
  __int64 v80; // rax
  int v81; // r8d
  __int64 v82; // rax
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  _DWORD *v90; // rax
  __int64 v91; // rax
  _BYTE v92[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v93; // [rsp+64h] [rbp-9Ch] BYREF
  WCHAR *v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+70h] [rbp-90h] BYREF
  __int64 v96; // [rsp+78h] [rbp-88h]
  unsigned int v97; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v98; // [rsp+84h] [rbp-7Ch] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v100; // [rsp+90h] [rbp-70h]
  void *v101; // [rsp+98h] [rbp-68h]
  _DWORD *v102; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v104; // [rsp+B8h] [rbp-48h] BYREF
  int v105; // [rsp+BCh] [rbp-44h] BYREF
  int v106; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 Buf2; // [rsp+D8h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Str2[40]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR v112[40]; // [rsp+150h] [rbp+50h] BYREF

  v9 = a1;
  v10 = a6;
  v96 = a1;
  v101 = a3;
  v94 = a2;
  inited = 0;
  v102 = a5;
  SourceString = 0LL;
  v104 = 0;
  v93 = 0;
  v98 = 0;
  v97 = 0;
  v105 = 0;
  v107 = 0LL;
  Handle = 0LL;
  v95 = 0;
  v106 = 0;
  v92[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  v13 = a9 & 0xFFFF0000;
  *a8 = 0;
  v100 = a9 & 0xFFFF0000;
  if ( a6 )
  {
    v14 = a7;
    v10 = (GUID *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v14 = 0;
    a7 = 0;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 < 2 )
    return (unsigned int)-1073741264;
  switch ( v15 )
  {
    case 0xAu:
      v54 = *(_QWORD *)a4 - 0x101A47EFB725F130LL;
      if ( *(_QWORD *)a4 == 0x101A47EFB725F130LL )
        v54 = *(_QWORD *)(a4 + 8) + 0x531461739FFD0E5BLL;
      if ( !v54 )
      {
        v55 = (int)v101;
        v56 = sub_14077DA5C(
                a1,
                (__int64)a2,
                1,
                (int)v101,
                0LL,
                (__int64)&qword_14000EC58,
                (__int64)a5,
                (__int64)v10,
                v14,
                (__int64)&v93,
                v13);
        inited = v56;
        if ( v56 && v56 != -1073741789 )
        {
          if ( v56 != -1073741275 )
            goto LABEL_72;
          v57 = v55;
          v20 = v94;
          v58 = sub_14077DA5C(
                  v9,
                  (__int64)v94,
                  1,
                  v57,
                  0LL,
                  (__int64)qword_14000E078,
                  (__int64)v102,
                  (__int64)v10,
                  a7,
                  (__int64)&v93,
                  v100);
          inited = v58;
          if ( v58 && v58 != -1073741789 )
          {
            if ( v58 == -1073741275 )
              return inited;
            goto LABEL_37;
          }
          goto LABEL_125;
        }
        goto LABEL_199;
      }
      v82 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v82 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v82 )
        return inited;
      v98 = v14 >> 1;
      v83 = sub_1406D04CC(a1, a2, v10, &v98);
      goto LABEL_217;
    case 0x100u:
      v18 = *(_QWORD *)a4 - 0x4ACA104A78C34FC8LL;
      if ( *(_QWORD *)a4 == 0x4ACA104A78C34FC8LL )
        v18 = *(_QWORD *)(a4 + 8) - 0x576E99524D52A49ELL;
      if ( v18 )
        return inited;
      inited = sub_1402DF9D0(a2, 200LL, &v107);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      *a8 = 2 * v107 + 2;
      *v19 = 18;
      if ( v14 >= *a8 )
      {
        v20 = v94;
        inited = sub_1402E04F4(v10, *a8, v94, 0LL, 0LL, 2304);
        if ( (inited & 0x80000000) != 0 )
        {
          v90 = v102;
          *a8 = 0;
          *v90 = 0;
        }
        goto LABEL_37;
      }
      return (unsigned int)-1073741789;
    case 2u:
      v25 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v25 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v25 )
      {
        v26 = *(_QWORD *)a4 - 0x421086A3AFD97640LL;
        if ( *(_QWORD *)a4 == 0x421086A3AFD97640LL )
          v26 = *(_QWORD *)(a4 + 8) - 0x55BEAA419C287CB6LL;
        if ( v26 )
        {
          v68 = *(_QWORD *)a4 - 0x48273F8A8C7ED206LL;
          if ( *(_QWORD *)a4 == 0x48273F8A8C7ED206LL )
            v68 = *(_QWORD *)(a4 + 8) - 0x6CFCAE1F9EAEABB3LL;
          if ( v68 )
            return inited;
          v93 = 78;
          inited = sub_14077CD90(a1, (__int64)a2, (__int64)v101, 37, (__int64)&v106, (__int64)Str2, (__int64)&v93, a9);
          if ( (inited & 0x80000000) != 0 )
            goto LABEL_72;
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          {
            v69 = v102;
            *a8 = 16;
            *v69 = 13;
            if ( a7 >= *a8 )
            {
              v20 = v94;
              inited = sub_14076CE48(v9, (__int64)v94, Str2, v112);
              if ( (inited & 0x80000000) == 0 )
              {
                inited = RtlInitUnicodeStringEx(&DestinationString, v112);
                if ( (inited & 0x80000000) == 0 )
                  inited = RtlGUIDFromString(&DestinationString, v10);
              }
              goto LABEL_37;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741275;
        }
        *a8 = 1;
        *a5 = 17;
        if ( v14 < *a8 )
          return (unsigned int)-1073741789;
        v27 = -((unsigned __int8)sub_140789210(a1, a2, v101) != 0);
        goto LABEL_57;
      }
LABEL_76:
      inited = sub_14078A470(
                 v9,
                 (_DWORD)a2,
                 (_DWORD)v101,
                 (unsigned int)&v97,
                 (__int64)&SourceString + 4,
                 (__int64)&SourceString);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      v34 = *(_DWORD *)(a4 + 16);
      v35 = v97;
      if ( v34 == 2 )
      {
        v36 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
        if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
          v36 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
        if ( !v36 )
          goto LABEL_81;
      }
      if ( v34 != 3 )
        goto LABEL_252;
      v71 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v71 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( !v71 )
      {
LABEL_81:
        v37 = 7;
      }
      else
      {
LABEL_252:
        if ( (v97 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v37 = 24;
      }
      v38 = v102;
      *a8 = 4;
      *v38 = v37;
      if ( a7 < *a8 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12 )
      {
        v91 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
        if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
          v91 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
        if ( !v91 )
        {
          if ( (int)sub_14077DA5C(
                      v96,
                      (__int64)v94,
                      1,
                      (int)v101,
                      0LL,
                      (__int64)qword_140039350,
                      (__int64)&v95,
                      (__int64)&v104,
                      4,
                      (__int64)&v93,
                      v100) >= 0
            && v95 == 24 )
          {
            v39 = (unsigned int)SourceString;
            if ( v93 == 4 )
              v39 = v104;
            v35 = v97;
LABEL_85:
            v40 = *(_DWORD *)(a4 + 16);
            if ( v40 == 2 )
            {
              v41 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
              if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
                v41 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
              if ( !v41 )
              {
                v10->Data1 = v35;
                return inited;
              }
            }
            else if ( v40 == 3 )
            {
              v72 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
              if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
                v72 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
              if ( !v72 )
              {
                v10->Data1 = (v35 & 0x400) != 0 ? HIDWORD(SourceString) : 0;
                return inited;
              }
            }
            v10->Data1 = v39;
            return inited;
          }
          v35 = v97;
        }
      }
      v39 = (unsigned int)SourceString;
      goto LABEL_85;
    case 3u:
      v33 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v33 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v33 )
        goto LABEL_25;
      goto LABEL_76;
    case 0xCu:
      v84 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v84 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v84 )
        return inited;
      goto LABEL_76;
  }
  v16 = 4;
  switch ( v15 )
  {
    case 4u:
      v60 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v60 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( !v60 )
        goto LABEL_211;
      v61 = *(_QWORD *)a4 - 0x48273F8A8C7ED206LL;
      if ( *(_QWORD *)a4 == 0x48273F8A8C7ED206LL )
        v61 = *(_QWORD *)(a4 + 8) - 0x6CFCAE1F9EAEABB3LL;
      if ( v61 )
        return inited;
      v9 = v96;
      v62 = (int)v101;
      v63 = v96;
      *a5 = 17;
      *a8 = 1;
      inited = sub_14077DA5C(
                 v63,
                 (__int64)a2,
                 1,
                 v62,
                 0LL,
                 (__int64)&qword_140010A78,
                 (__int64)&v95,
                 (__int64)&Buf2,
                 16,
                 (__int64)&v93,
                 a9 & 0xFFFF0000);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      inited = sub_14077DA5C(
                 v9,
                 (__int64)L"HTREE\\ROOT\\0",
                 1,
                 0,
                 0LL,
                 (__int64)&qword_14000E060,
                 (__int64)&v95,
                 (__int64)&Buf1,
                 16,
                 (__int64)&v93,
                 v100);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      if ( a7 < *a8 )
        return (unsigned int)-1073741789;
      v27 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
LABEL_57:
      LOBYTE(v10->Data1) = v27;
      return inited;
    case 5u:
      v28 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v28 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v28 )
      {
        v29 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
        if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
          v29 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
        if ( v29 )
          return inited;
        *a8 = 1;
        *a5 = 17;
        if ( v14 < *a8 )
          return (unsigned int)-1073741789;
        inited = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (inited & 0x80000000) == 0 )
        {
          v30 = v96;
          LOBYTE(v10->Data1) = 0;
          v31 = sub_140784C2C(v30, (__int64)&DestinationString);
          inited = v31;
          if ( v31 == -1073741810 )
            return 0;
          if ( v31 < 0 )
            return inited;
          goto LABEL_68;
        }
LABEL_286:
        v9 = v96;
        goto LABEL_72;
      }
      v16 = 8;
      goto LABEL_211;
    case 6u:
      v42 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v42 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v42 )
      {
        v43 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
        if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
          v43 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
        if ( v43 )
          return inited;
        *a5 = 17;
        *a8 = 1;
        if ( !v14 )
          return (unsigned int)-1073741789;
        inited = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (inited & 0x80000000) != 0 )
          goto LABEL_286;
        v44 = v96;
        LOBYTE(v10->Data1) = 0;
        v45 = sub_140784C2C(v44, (__int64)&DestinationString);
        inited = v45;
        if ( v45 == -1073741810 )
          return 0;
        if ( v45 < 0 )
          return inited;
        if ( (v97 & 0x8000) != 0 )
          goto LABEL_68;
        if ( (v97 & 0x400) != 0 )
        {
          if ( HIDWORD(SourceString) > 0x1D )
            goto LABEL_68;
          v79 = 591396864;
          if ( !_bittest(&v79, HIDWORD(SourceString)) )
            goto LABEL_68;
        }
        if ( (v97 & 8) != 0 )
          return inited;
        v20 = v94;
        v9 = v96;
        v46 = sub_14077DA5C(
                v96,
                (__int64)v94,
                1,
                (int)v101,
                0LL,
                (__int64)&stru_14000E0D8,
                (__int64)&v95,
                (__int64)&v105,
                4,
                (__int64)&v93,
                v100);
        inited = v46;
        if ( v46 == -1073741275 )
          return 0;
        if ( v46 < 0 )
          goto LABEL_37;
        v47 = (v105 & 0x40) == 0;
LABEL_106:
        if ( v47 )
          return inited;
        goto LABEL_68;
      }
      v16 = 16;
LABEL_211:
      v81 = v16;
      v9 = v96;
      inited = sub_1406E5DD4(v96, a2, v81, (int)v10, v14 >> 1, (__int64)&v98);
      if ( inited == -1073741772 )
        return (unsigned int)-1073741275;
      if ( inited && inited != -1073741789 )
        goto LABEL_72;
      *v102 = 8210;
      if ( !inited )
      {
        *a8 = 2 * sub_1407889F4(v10);
        return inited;
      }
      v20 = v94;
      v59 = 2 * v98;
LABEL_126:
      *a8 = v59;
      goto LABEL_37;
    case 7u:
      v85 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v85 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v85 )
        return inited;
      v16 = 32;
      goto LABEL_211;
    case 0xBu:
      v86 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v86 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v86 )
        return inited;
      v16 = 64;
      goto LABEL_211;
    case 8u:
      v22 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v22 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v22 )
      {
        v23 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
        if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
          v23 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
        if ( v23 )
          return inited;
        *a5 = 7;
        *a8 = 4;
        v9 = v96;
        inited = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (inited & 0x80000000) != 0 )
          goto LABEL_72;
        goto LABEL_46;
      }
      v9 = v96;
      v98 = v14 >> 1;
      v32 = sub_140788ED4(v96, a2, v10, &v98);
      inited = v32;
      if ( v32 && v32 != -1073741789 )
        goto LABEL_72;
      *a8 = 2 * v98;
      *v102 = 18;
LABEL_71:
      if ( a7 >= *a8 )
        goto LABEL_72;
      return (unsigned int)-1073741789;
    case 9u:
      v87 = *(_QWORD *)a4 - 0x470693FA4340A6C5LL;
      if ( *(_QWORD *)a4 == 0x470693FA4340A6C5LL )
        v87 = *(_QWORD *)(a4 + 8) + 0x585AF77F9B84D369LL;
      if ( v87 )
        return inited;
      v9 = v96;
      v98 = v14 >> 1;
      v83 = sub_1406D068C(v96, a2, v10, &v98);
LABEL_217:
      inited = v83;
      if ( v83 != -1073741789 && v83 )
        goto LABEL_72;
      *a8 = 2 * v98;
      *v102 = 8210;
      goto LABEL_71;
    case 0xFu:
      v76 = *(_QWORD *)a4 - 0x408897A683DA6326LL;
      if ( *(_QWORD *)a4 == 0x408897A683DA6326LL )
        v76 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v76 )
        return inited;
      *a5 = 17;
      *a8 = 1;
      if ( !v14 )
        return (unsigned int)-1073741789;
      v9 = v96;
      inited = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      LOBYTE(v10->Data1) = 0;
      v77 = sub_140784C2C(v9, (__int64)&DestinationString);
      inited = v77;
      if ( v77 == -1073741810 )
        return 0;
      if ( v77 < 0 || (v97 & 0x2000000) != 0 )
        return inited;
      v20 = v94;
      v78 = sub_14077DA5C(
              v9,
              (__int64)v94,
              1,
              0,
              0LL,
              (__int64)qword_14000E128,
              (__int64)&v95,
              (__int64)v92,
              1,
              (__int64)&v93,
              v100);
      inited = v78;
      if ( v78 < 0 )
      {
        if ( v78 != -1073741275 && v78 != -1073741789 )
          goto LABEL_37;
        inited = 0;
        goto LABEL_68;
      }
      if ( v95 != 17 )
        goto LABEL_68;
      v47 = v92[0] == 0xFF;
      goto LABEL_106;
    case 0x10u:
      v64 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
      if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
        v64 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
      if ( v64 )
        return inited;
      *a5 = 17;
      *a8 = 1;
      if ( !v14 )
        return (unsigned int)-1073741789;
      inited = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (inited & 0x80000000) == 0 )
      {
        v65 = v96;
        LOBYTE(v10->Data1) = 0;
        v66 = sub_140784C2C(v65, (__int64)&DestinationString);
        inited = v66;
        if ( v66 == -1073741810 )
          return 0;
        if ( v66 < 0 )
          return inited;
        if ( (v97 & 0x100) == 0 )
        {
          if ( (v97 & 0x400) == 0 )
            return inited;
          v67 = HIDWORD(SourceString) == 14;
          goto LABEL_148;
        }
LABEL_68:
        LOBYTE(v10->Data1) = -1;
        return inited;
      }
      goto LABEL_286;
    case 0xEu:
      v80 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
      if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
        v80 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
      if ( v80 )
        return inited;
      *a5 = 8210;
      v9 = v96;
      inited = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      goto LABEL_46;
    case 0x14u:
      v88 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
      if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
        v88 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
      if ( v88 )
        return inited;
      *a5 = 8210;
      v9 = v96;
      inited = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
      goto LABEL_46;
    case 0x15u:
      v89 = *(_QWORD *)a4 - 0x45BC8B40540B947ELL;
      if ( *(_QWORD *)a4 == 0x45BC8B40540B947ELL )
        v89 = *(_QWORD *)(a4 + 8) + 0x5D42B376F4955D58LL;
      if ( v89 )
        return inited;
      *a5 = 8210;
      v9 = v96;
      inited = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (inited & 0x80000000) != 0 )
        goto LABEL_72;
LABEL_46:
      v24 = sub_1406D4FE0(v9, (__int64)&DestinationString);
      inited = v24;
      if ( v24 != -1073741772 )
      {
        if ( v24 >= 0 )
          return inited;
        goto LABEL_72;
      }
      return (unsigned int)-1073741275;
    case 0x1Au:
      v48 = *(_QWORD *)a4 - 0x40942E3DA8B865DDLL;
      if ( *(_QWORD *)a4 == 0x40942E3DA8B865DDLL )
        v48 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
      if ( v48 )
        return inited;
      *a5 = 17;
      *a8 = 1;
      if ( v14 )
      {
        v49 = (int)v101;
        v9 = v96;
        v50 = (int)v101;
        LOBYTE(v10->Data1) = 0;
        v51 = sub_14077DA5C(
                v9,
                (__int64)a2,
                1,
                v50,
                0LL,
                (__int64)qword_14000E030,
                (__int64)&v95,
                (__int64)v92,
                1,
                (__int64)&v93,
                a9 & 0xFFFF0000);
        inited = v51;
        if ( v51 < 0 )
        {
          if ( v51 != -1073741275 && v51 != -1073741789 )
            goto LABEL_72;
          goto LABEL_114;
        }
        if ( v95 != 17 || v93 != 1 )
        {
LABEL_114:
          v52 = v49;
          v20 = v94;
          v53 = sub_14077DA5C(
                  v9,
                  (__int64)v94,
                  1,
                  v52,
                  0LL,
                  (__int64)qword_14000E048,
                  (__int64)&v95,
                  (__int64)v92,
                  1,
                  (__int64)&v93,
                  v100);
          inited = v53;
          if ( v53 < 0 )
          {
            if ( v53 != -1073741275 && v53 != -1073741789 )
              goto LABEL_37;
            return 0;
          }
          if ( v95 != 17 || v93 != 1 )
            return inited;
          v67 = v92[0] == 0xFF;
          goto LABEL_148;
        }
        v67 = v92[0] == 0;
LABEL_148:
        if ( !v67 )
          return inited;
        goto LABEL_68;
      }
      return (unsigned int)-1073741789;
  }
  if ( v15 != 22 )
  {
    v9 = v96;
LABEL_25:
    if ( v15 == 23 )
    {
      v17 = *(_QWORD *)a4 - 0x408897A683DA6326LL;
      if ( *(_QWORD *)a4 == 0x408897A683DA6326LL )
        v17 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v17 )
        return inited;
      goto LABEL_29;
    }
    if ( v15 != 102 )
      return inited;
    v73 = *(_QWORD *)a4 - 0x43CD9CF78C439FF0LL;
    if ( *(_QWORD *)a4 == 0x43CD9CF78C439FF0LL )
      v73 = *(_QWORD *)(a4 + 8) - 0x57C1C6A499921E96LL;
    if ( v73 )
      return inited;
    v74 = (int)v101;
    inited = sub_14077DA5C(
               v9,
               (__int64)a2,
               1,
               (int)v101,
               0LL,
               (__int64)&qword_14000E0F0,
               (__int64)&v95,
               (__int64)v10,
               v14,
               (__int64)&v93,
               v13);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741789 )
    {
      if ( inited != -1073741275 )
        goto LABEL_72;
      goto LABEL_183;
    }
    if ( v95 != 19 )
    {
LABEL_183:
      v75 = v74;
      v20 = v94;
      inited = sub_14077DA5C(
                 v9,
                 (__int64)v94,
                 1,
                 v75,
                 0LL,
                 (__int64)&qword_1400108E0,
                 (__int64)&v95,
                 (__int64)v10,
                 a7,
                 (__int64)&v93,
                 v100);
      if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741789 )
        goto LABEL_37;
      if ( v95 != 19 )
      {
        inited = -1073741275;
        goto LABEL_37;
      }
      *v102 = 19;
LABEL_125:
      v59 = v93;
      goto LABEL_126;
    }
    *v102 = 19;
LABEL_199:
    *a8 = v93;
    goto LABEL_72;
  }
  v70 = *(_QWORD *)a4 - 0x408897A683DA6326LL;
  if ( *(_QWORD *)a4 == 0x408897A683DA6326LL )
    v70 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v9 = v96;
  if ( v70 )
    goto LABEL_25;
LABEL_29:
  inited = sub_140745F48(v9, (int)a2, v101, a4, (__int64)a5, (__int64)v10, v14, (__int64)a8);
LABEL_72:
  v20 = v94;
LABEL_37:
  if ( inited != -1073741810 )
    return inited;
  inited = sub_14077F2EC(v9, (__int64)v20, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !inited )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( inited != -1073741810 && inited != -1073741632 )
    return (unsigned int)-1073741823;
  return inited;
}
