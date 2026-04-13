/*
 * XREFs of ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001DAC0
 * Callers:
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x18001FA20 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x18001FB20 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_18001FB20.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006E54 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008D70 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B704 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B7F0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C8F4 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001CA4C (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800628D8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006E844 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        char *a7)
{
  __int64 *v7; // r12
  _QWORD *v9; // r13
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // edi
  struct std::_Facet_base *v13; // r14
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rbx
  int v18; // edi
  struct std::_Facet_base *v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  char v24; // al
  char v25; // bl
  __int64 v26; // r13
  int v27; // r12d
  int v28; // r14d
  struct std::_Facet_base *v29; // rbx
  char v30; // r13
  void **v31; // rcx
  unsigned __int64 v32; // r12
  __int64 v33; // rbx
  char v34; // al
  void **v35; // r14
  _QWORD *v36; // rdi
  char *v37; // rax
  char i; // cl
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  void **v42; // rax
  void **v43; // rcx
  void *v44; // r9
  unsigned __int64 v45; // r8
  void **v46; // rax
  void **v47; // rax
  char *v48; // r14
  char v49; // dl
  char *v50; // rax
  char j; // cl
  char v52; // bl
  char *v53; // rax
  char k; // cl
  __int64 v55; // rbx
  int v56; // edi
  void **v57; // rbx
  char v58; // bl
  void **v59; // rcx
  int v60; // edi
  void **v61; // rbx
  char v62; // bl
  bool v63; // bl
  bool v64; // bl
  bool v65; // zf
  void **v66; // rbx
  void **v67; // rbx
  void **v68; // rax
  void **v69; // rbx
  void **v70; // rax
  __int64 v71; // r8
  void **v72; // rax
  void **v73; // rax
  unsigned __int64 v74; // rcx
  void **v75; // rbx
  void **v76; // rax
  void **v77; // rax
  _BYTE *v78; // rax
  char v80; // [rsp+38h] [rbp-C1h]
  unsigned int v81; // [rsp+3Ch] [rbp-BDh]
  unsigned __int64 v82; // [rsp+48h] [rbp-B1h]
  struct std::_Facet_base *v83; // [rsp+50h] [rbp-A9h]
  struct std::_Facet_base *v85; // [rsp+60h] [rbp-99h] BYREF
  _QWORD *v86; // [rsp+68h] [rbp-91h]
  int v87; // [rsp+70h] [rbp-89h]
  int v88; // [rsp+74h] [rbp-85h]
  _BYTE v89[8]; // [rsp+78h] [rbp-81h] BYREF
  char *v90; // [rsp+80h] [rbp-79h]
  int v91; // [rsp+88h] [rbp-71h]
  __int64 v92; // [rsp+90h] [rbp-69h]
  _QWORD *v93; // [rsp+98h] [rbp-61h]
  void *v94[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-41h]
  void *v97[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-21h]
  void *v100[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v101; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v102; // [rsp+F8h] [rbp-1h]

  v92 = -2LL;
  v7 = a4;
  v9 = a2;
  v86 = a2;
  v93 = a2;
  v90 = a7;
  v10 = *(__int64 **)(a6 + 64);
  if ( a5 )
  {
    v11 = *v10;
    v85 = (struct std::_Facet_base *)v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = 32;
    v13 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v85);
    v83 = v13;
    if ( v11 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  else
  {
    v15 = *v10;
    v85 = (struct std::_Facet_base *)v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v12 = 64;
    v13 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v85);
    v83 = v13;
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  LOBYTE(v81) = 0;
  v80 = 0;
  v102 = 15LL;
  v101 = 0LL;
  LOBYTE(v100[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v13 + 88LL))(v13, v89);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v17 = **(_QWORD **)(a6 + 64);
  v85 = (struct std::_Facet_base *)v17;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = v12 | 0x81;
  v19 = std::use_facet<std::ctype<char>>((__int64 *)&v85);
  v85 = v19;
  if ( v17 )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v20 )
      (**v20)(v20, 1LL);
    v19 = v85;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v19 + 56LL))(
    v19,
    "0123456789-",
    "",
    v90);
  v82 = 0LL;
  v22 = v81;
  v23 = 0LL;
  while ( v23 < 4 )
  {
    v24 = v89[v23];
    switch ( v24 )
    {
      case ' ':
        goto LABEL_20;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **, __int64))(*(_QWORD *)v13 + 48LL))(v13, v94, v22);
        v18 |= 0x100u;
        if ( (*(_BYTE *)(a6 + 24) & 8) == 0 && !std::istreambuf_iterator<char>::equal(a3, v7) )
        {
          v66 = v94;
          if ( v96 >= 0x10 )
            v66 = (void **)v94[0];
          if ( *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) != *(_BYTE *)v66 )
            goto LABEL_172;
        }
        if ( v82 == 3 && v101 <= 1 )
        {
          if ( std::istreambuf_iterator<char>::equal(a3, v7) )
            goto LABEL_172;
          v67 = v94;
          if ( v96 >= 0x10 )
            v67 = (void **)v94[0];
          if ( *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) != *(_BYTE *)v67 )
          {
LABEL_172:
            v68 = v94;
            if ( v96 >= 0x10 )
              v68 = (void **)v94[0];
            v95 = 0LL;
            *(_BYTE *)v68 = 0;
          }
        }
        v69 = v94;
        if ( v96 >= 0x10 )
          v69 = (void **)v94[0];
        while ( !std::istreambuf_iterator<char>::equal(a3, v7) )
        {
          v70 = v94;
          v59 = (void **)v94[0];
          v21 = v96;
          if ( v96 >= 0x10 )
            v70 = (void **)v94[0];
          v71 = v95;
          if ( v69 == (void **)((char *)v70 + v95) )
            goto LABEL_185;
          if ( *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) != *(_BYTE *)v69 )
            break;
          v69 = (void **)((char *)v69 + 1);
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        v21 = v96;
        v71 = v95;
        v59 = (void **)v94[0];
LABEL_185:
        v72 = v94;
        if ( v21 >= 0x10 )
          v72 = v59;
        v73 = (void **)((char *)v72 + v71);
        v22 = (unsigned __int8)v81;
        if ( v69 != v73 )
          v22 = 1LL;
        v81 = v22;
        if ( v21 >= 0x10 )
          goto LABEL_136;
        goto LABEL_78;
      case '+':
        if ( std::istreambuf_iterator<char>::equal(a3, v7) )
        {
          v22 = v81;
          break;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v94);
        v56 = v18 | 0x202;
        if ( !v95 )
          goto LABEL_125;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v97);
        v56 |= 0x404u;
        v57 = v97;
        if ( v99 >= 0x10 )
          v57 = (void **)v97[0];
        if ( *(_BYTE *)v57 == *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) )
          v58 = 1;
        else
LABEL_125:
          v58 = 0;
        if ( (v56 & 4) != 0 )
        {
          v56 &= ~4u;
          if ( v99 >= 0x10 )
            operator delete(v97[0]);
          v99 = 15LL;
          v98 = 0LL;
          LOBYTE(v97[0]) = 0;
        }
        if ( (v56 & 2) != 0 )
        {
          v56 &= ~2u;
          if ( v96 >= 0x10 )
            operator delete(v94[0]);
        }
        if ( v58 )
        {
          std::istreambuf_iterator<char>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v97);
          v18 = v56 | 0x800;
          std::string::operator=(v100, v97);
          if ( v99 < 0x10 )
            goto LABEL_77;
          v59 = (void **)v97[0];
LABEL_136:
          operator delete(v59);
          goto LABEL_77;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v94);
        v60 = v56 | 0x1008;
        if ( !v95 )
          goto LABEL_142;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v97);
        v60 |= 0x2010u;
        v61 = v97;
        if ( v99 >= 0x10 )
          v61 = (void **)v97[0];
        if ( *(_BYTE *)v61 == *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) )
          v62 = 1;
        else
LABEL_142:
          v62 = 0;
        if ( (v60 & 0x10) != 0 )
        {
          v60 &= ~0x10u;
          if ( v99 >= 0x10 )
            operator delete(v97[0]);
          v99 = 15LL;
          v98 = 0LL;
          LOBYTE(v97[0]) = 0;
        }
        if ( (v60 & 8) != 0 )
        {
          v60 &= ~8u;
          if ( v96 >= 0x10 )
            operator delete(v94[0]);
        }
        if ( v62 )
        {
          std::istreambuf_iterator<char>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v97);
          v18 = v60 | 0x4000;
          std::string::operator=(v100, v97);
          if ( v99 >= 0x10 )
            operator delete(v97[0]);
          v80 = 1;
          goto LABEL_77;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v97);
        v18 = v60 | 0x8000;
        v63 = v98 == 0;
        if ( v99 >= 0x10 )
          operator delete(v97[0]);
        if ( !v63 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v97);
          v18 |= 0x10000u;
          v64 = v98 == 0;
          if ( v99 >= 0x10 )
            operator delete(v97[0]);
          v22 = v81;
          v65 = !v64;
          v23 = v82;
          if ( !v65 )
            v80 = 1;
          break;
        }
LABEL_77:
        v22 = v81;
        goto LABEL_78;
      case 'v':
        v27 = 0;
        v88 = 0;
        v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v13 + 72LL))(
                v13,
                v21,
                v22);
        v87 = v28;
        v29 = v83;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v83 + 40LL))(v83, v97);
        v18 |= 0x20000u;
        v91 = v18;
        if ( v98 )
        {
          v30 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v83 + 32LL))(v83);
          if ( v30 )
          {
            v31 = v97;
            if ( v99 >= 0x10 )
              v31 = (void **)v97[0];
            if ( *(_BYTE *)v31 < 0x7Fu )
            {
              v32 = 15LL;
              v96 = 15LL;
              LOWORD(v94[0]) = 0;
              v95 = 1LL;
              v33 = 0LL;
              v34 = std::istreambuf_iterator<char>::equal(a3, a4);
              v35 = (void **)v94[0];
              if ( v34 )
                goto LABEL_61;
              v36 = v86;
              while ( 2 )
              {
                LOBYTE(v21) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
                v37 = v90;
                for ( i = *v90; i && i != (_BYTE)v21; i = *v37 )
                  ++v37;
                if ( (unsigned __int64)(v37 - v90) >= 0xA )
                {
                  v41 = v94;
                  if ( v32 >= 0x10 )
                    v41 = v35;
                  if ( !*((_BYTE *)v41 + v33) || *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) != v30 )
                  {
LABEL_55:
                    v18 = v91;
                    if ( v33 )
                    {
                      v42 = v94;
                      if ( v32 >= 0x10 )
                        v42 = v35;
                      if ( *((char *)v42 + v33) <= 0 )
                        LOBYTE(v81) = 1;
                      else
                        ++v33;
                    }
LABEL_61:
                    v43 = v97;
                    v44 = v97[0];
                    v45 = v99;
                    if ( v99 >= 0x10 )
                      v43 = (void **)v97[0];
                    if ( !(_BYTE)v81 )
                    {
                      while ( v33 )
                      {
                        LOBYTE(v21) = *(_BYTE *)v43;
                        if ( *(_BYTE *)v43 == 127 )
                          break;
                        if ( --v33 )
                        {
                          v46 = v94;
                          if ( v32 >= 0x10 )
                            v46 = v35;
                          if ( (_BYTE)v21 != *((_BYTE *)v46 + v33) )
                            goto LABEL_70;
                        }
                        else
                        {
                          v47 = v94;
                          if ( v32 >= 0x10 )
                            v47 = v35;
                          if ( (char)v21 < *(char *)v47 )
                          {
LABEL_70:
                            LOBYTE(v81) = 1;
                            goto LABEL_71;
                          }
                        }
                        if ( *((char *)v43 + 1) > 0 )
                          v43 = (void **)((char *)v43 + 1);
                      }
                      if ( v32 >= 0x10 )
                        operator delete(v35);
LABEL_97:
                      v28 = v87;
                      v27 = v88;
                      v29 = v83;
                      goto LABEL_98;
                    }
LABEL_71:
                    if ( v32 >= 0x10 )
                    {
                      operator delete(v35);
                      v45 = v99;
                      v44 = v97[0];
                    }
                    if ( v45 >= 0x10 )
                      operator delete(v44);
                    v9 = v86;
LABEL_76:
                    v13 = v83;
                    v7 = a4;
                    goto LABEL_77;
                  }
                  std::string::append(v94, 1LL);
                  ++v33;
LABEL_53:
                  v35 = (void **)v94[0];
                  v32 = v96;
                }
                else
                {
                  std::string::append(v36, 1LL);
                  v39 = v94;
                  if ( v32 >= 0x10 )
                    v39 = v35;
                  if ( *((_BYTE *)v39 + v33) != 127 )
                  {
                    v40 = v94;
                    if ( v32 >= 0x10 )
                      v40 = v35;
                    ++*((_BYTE *)v40 + v33);
                    goto LABEL_53;
                  }
                }
                std::istreambuf_iterator<char>::_Inc(a3);
                if ( std::istreambuf_iterator<char>::equal(a3, a4) )
                  goto LABEL_55;
                continue;
              }
            }
          }
          v9 = v86;
        }
        if ( !std::istreambuf_iterator<char>::equal(a3, a4) )
        {
          v48 = v90;
          do
          {
            v49 = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
            v50 = v48;
            for ( j = *v48; j && j != v49; j = *v50 )
              ++v50;
            if ( (unsigned __int64)(v50 - v48) >= 0xA )
              break;
            std::string::append(v9, 1LL);
            std::istreambuf_iterator<char>::_Inc(a3);
          }
          while ( !std::istreambuf_iterator<char>::equal(a3, a4) );
          goto LABEL_97;
        }
LABEL_98:
        v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v29 + 24LL))(v29);
        if ( !std::istreambuf_iterator<char>::equal(a3, a4)
          && v52
          && *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) == v52 )
        {
          while ( 1 )
          {
            std::istreambuf_iterator<char>::_Inc(a3);
            if ( std::istreambuf_iterator<char>::equal(a3, a4) )
              break;
            if ( v27 >= v28 )
              goto LABEL_112;
            LOBYTE(v21) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
            v53 = v90;
            for ( k = *v90; k && k != (_BYTE)v21; k = *v53 )
              ++v53;
            if ( (unsigned __int64)(v53 - v90) >= 0xA )
              goto LABEL_111;
            std::string::append(v86, 1LL);
            ++v27;
          }
          if ( v27 >= v28 )
            goto LABEL_112;
LABEL_111:
          LOBYTE(v81) = 1;
        }
LABEL_112:
        v9 = v86;
        if ( v86[2] )
        {
          if ( v27 < v28 )
          {
            v55 = (unsigned int)(v28 - v27);
            do
            {
              std::string::append(v9, 1LL);
              --v55;
            }
            while ( v55 );
          }
        }
        else
        {
          LOBYTE(v81) = 1;
        }
        if ( v99 >= 0x10 )
          operator delete(v97[0]);
        goto LABEL_76;
      case 'x':
LABEL_20:
        if ( v23 != 3 )
        {
          v25 = 0;
          if ( !std::istreambuf_iterator<char>::equal(a3, v7) )
          {
            v26 = (__int64)v85;
            do
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v26 + 24)
                             + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 0x48) == 0 )
                break;
              v25 = 1;
              std::istreambuf_iterator<char>::_Inc(a3);
            }
            while ( !std::istreambuf_iterator<char>::equal(a3, v7) );
            v9 = v86;
          }
          if ( v89[v82] != 32 )
            goto LABEL_77;
          v22 = (unsigned __int8)v81;
          if ( !v25 )
            v22 = 1LL;
          v81 = v22;
LABEL_78:
          v23 = v82;
        }
        break;
    }
    v82 = ++v23;
    if ( (_BYTE)v22 )
      goto LABEL_205;
  }
  v74 = v101;
  if ( v101 <= 1 )
    goto LABEL_209;
  v75 = v100;
  if ( v102 >= 0x10 )
    v75 = (void **)v100[0];
  while ( 1 )
  {
    v75 = (void **)((char *)v75 + 1);
    v76 = v100;
    if ( v102 >= 0x10 )
      v76 = (void **)v100[0];
    if ( v75 == (void **)((char *)v76 + v74) )
      break;
    if ( std::istreambuf_iterator<char>::equal(a3, v7)
      || *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) != *(_BYTE *)v75 )
    {
      v74 = v101;
      break;
    }
    std::istreambuf_iterator<char>::_Inc(a3);
    v74 = v101;
  }
  v77 = v100;
  if ( v102 >= 0x10 )
    v77 = (void **)v100[0];
  if ( v75 == (void **)((char *)v77 + v74) )
  {
LABEL_209:
    if ( v80 )
      std::string::insert(v9, 0LL, 1uLL, 45);
  }
  else
  {
LABEL_205:
    if ( v9[3] < 0x10uLL )
      v78 = v9;
    else
      v78 = (_BYTE *)*v9;
    v9[2] = 0LL;
    *v78 = 0;
  }
  if ( v102 >= 0x10 )
    operator delete(v100[0]);
  return v9;
}
