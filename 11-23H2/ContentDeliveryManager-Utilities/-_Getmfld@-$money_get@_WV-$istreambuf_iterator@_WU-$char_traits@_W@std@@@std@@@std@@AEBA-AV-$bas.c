/*
 * XREFs of ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x180013500
 * Callers:
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800180E0 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istre.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180018200 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_180018200.c)
 * Callees:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B7F0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x18000FAD8 (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x18000FC30 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180060120 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061A50 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180062340 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062888 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC34 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  _QWORD *v7; // r13
  _QWORD *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // r14d
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  void **v17; // rbx
  int v18; // r14d
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  unsigned __int64 v21; // rax
  char v22; // al
  char v23; // al
  int v24; // r15d
  struct std::_Facet_base *v25; // rbx
  __int16 v26; // r12
  void **v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rbx
  _BYTE *v30; // r14
  _BYTE *v31; // r13
  void **v32; // r15
  void **v33; // rax
  char v34; // al
  void **v35; // rcx
  void *v36; // r9
  unsigned __int64 v37; // r8
  char v38; // dl
  void **v39; // rax
  void **v40; // rax
  __int16 *v41; // rax
  __int16 i; // cx
  void **v43; // rax
  void **v44; // rax
  void **v45; // rax
  _BYTE *v46; // rsi
  unsigned __int16 v47; // bx
  int v48; // ebx
  __int16 *v49; // rax
  __int16 j; // cx
  bool v51; // zf
  __int16 *v52; // rax
  __int16 k; // cx
  __int64 v54; // rbx
  int v55; // r14d
  int v56; // r14d
  void **v57; // rbx
  char v58; // bl
  bool v59; // bl
  bool v60; // bl
  void **v61; // rax
  void **v62; // rax
  void **v63; // rax
  void **v64; // rbx
  void **v65; // rdx
  void **v66; // rcx
  __int64 v67; // rsi
  void **v68; // rbx
  char v69; // r14
  void **v70; // rcx
  void **v71; // rcx
  _BYTE *v72; // rax
  char v74; // [rsp+38h] [rbp-C1h]
  char v75; // [rsp+3Ch] [rbp-BDh]
  int v76; // [rsp+44h] [rbp-B5h]
  __int64 v79; // [rsp+58h] [rbp-A1h] BYREF
  struct std::_Facet_base *v80; // [rsp+60h] [rbp-99h]
  void **v81; // [rsp+68h] [rbp-91h]
  __int64 v82; // [rsp+70h] [rbp-89h] BYREF
  __int16 *v83; // [rsp+78h] [rbp-81h]
  int v84; // [rsp+80h] [rbp-79h]
  int v85; // [rsp+84h] [rbp-75h]
  _BYTE *v86; // [rsp+88h] [rbp-71h]
  __int64 v87; // [rsp+90h] [rbp-69h]
  _QWORD *v88; // [rsp+98h] [rbp-61h]
  void *v89[2]; // [rsp+A0h] [rbp-59h] BYREF
  unsigned __int64 v90; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v91; // [rsp+B8h] [rbp-41h]
  void *v92[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v94; // [rsp+D8h] [rbp-21h]
  void *v95[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v96; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v97; // [rsp+F8h] [rbp-1h]

  v87 = -2LL;
  v7 = a4;
  v9 = a2;
  v88 = a2;
  v83 = a7;
  v10 = *(__int64 **)(a6 + 64);
  if ( a5 )
  {
    v11 = *v10;
    v79 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = 32;
    v13 = std::use_facet<std::moneypunct<wchar_t,1>>(&v79);
    v80 = v13;
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
    v79 = v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v12 = 64;
    v13 = std::use_facet<std::moneypunct<wchar_t,0>>(&v79);
    v80 = v13;
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  v75 = 0;
  v74 = 0;
  v97 = 7LL;
  v96 = 0LL;
  LOWORD(v95[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, &v82);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v17 = **(void ****)(a6 + 64);
  v79 = (__int64)v17;
  (*((void (__fastcall **)(void **))*v17 + 1))(v17);
  v18 = v12 | 0x81;
  v19 = std::use_facet<std::ctype<wchar_t>>((std::locale *)&v79);
  v79 = v19;
  if ( v17 )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))(*((__int64 (__fastcall **)(void **))*v17 + 2))(v17);
    v17 = 0LL;
    if ( v20 )
      (**v20)(v20, 1LL);
    v19 = v79;
  }
  (*(void (__fastcall **)(__int64, const char *, char *, __int16 *))(*(_QWORD *)v19 + 88LL))(
    v19,
    "0123456789-",
    "",
    v83);
  v21 = (unsigned __int64)v17;
  v81 = v17;
  while ( v21 < 4 )
  {
    v22 = *((_BYTE *)&v82 + v21);
    switch ( v22 )
    {
      case ' ':
        goto LABEL_253;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v89);
        v18 |= 0x100u;
        if ( (*(_BYTE *)(a6 + 24) & 8) == 0 )
        {
          if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( *((_BYTE *)v7 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(v7);
          if ( *(void ***)a3 == v17 )
          {
            if ( (void **)*v7 == v17 )
              goto LABEL_204;
          }
          else if ( (void **)*v7 != v17 )
          {
            goto LABEL_204;
          }
          if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          v61 = v89;
          if ( v91 >= 8 )
            v61 = (void **)v89[0];
          if ( *(_WORD *)(a3 + 10) != *(_WORD *)v61 )
          {
            v62 = v89;
            if ( v91 >= 8 )
              v62 = (void **)v89[0];
LABEL_230:
            v90 = (unsigned __int64)v17;
            *(_WORD *)v62 = (_WORD)v17;
LABEL_231:
            v64 = v89;
            if ( v91 >= 8 )
              v64 = (void **)v89[0];
            while ( 1 )
            {
              if ( !*(_BYTE *)(a3 + 8) )
                std::istreambuf_iterator<wchar_t>::_Peek(a3);
              if ( !*((_BYTE *)v7 + 8) )
                std::istreambuf_iterator<wchar_t>::_Peek(v7);
              if ( *(_QWORD *)a3 )
              {
                if ( *v7 )
                  goto LABEL_239;
              }
              else if ( !*v7 )
              {
                goto LABEL_239;
              }
              v66 = v89;
              if ( v91 >= 8 )
                v66 = (void **)v89[0];
              if ( v64 == (void **)((char *)v66 + 2 * v90) )
                goto LABEL_239;
              if ( !*(_BYTE *)(a3 + 8) )
                std::istreambuf_iterator<wchar_t>::_Peek(a3);
              if ( *(_WORD *)(a3 + 10) != *(_WORD *)v64 )
              {
LABEL_239:
                v65 = v89;
                if ( v91 >= 8 )
                  v65 = (void **)v89[0];
                v23 = v75;
                if ( v64 != (void **)((char *)v65 + 2 * v90) )
                  v23 = 1;
                v75 = v23;
                v9 = a2;
                if ( v91 >= 8 )
                {
                  operator delete(v89[0]);
                  goto LABEL_85;
                }
                goto LABEL_265;
              }
              v64 = (void **)((char *)v64 + 2);
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
            }
          }
        }
LABEL_204:
        if ( v81 != (void **)3 || v96 > 1 )
          goto LABEL_231;
        if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( *((_BYTE *)v7 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(v7);
        if ( *(void ***)a3 == v17 )
        {
          if ( (void **)*v7 != v17 )
            goto LABEL_223;
        }
        else if ( (void **)*v7 == v17 )
        {
LABEL_223:
          if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          v63 = v89;
          if ( v91 >= 8 )
            v63 = (void **)v89[0];
          if ( *(_WORD *)(a3 + 10) == *(_WORD *)v63 )
            goto LABEL_231;
        }
        v62 = v89;
        if ( v91 >= 8 )
          v62 = (void **)v89[0];
        goto LABEL_230;
      case '+':
        if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( *((_BYTE *)v7 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(v7);
        if ( *(void ***)a3 == v17 )
        {
          if ( (void **)*v7 != v17 )
            goto LABEL_151;
        }
        else if ( (void **)*v7 == v17 )
        {
LABEL_151:
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v89);
          v55 = v18 | 0x202;
          if ( v90 > (unsigned __int64)v17 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v92);
            v55 |= 0x404u;
            v17 = v92;
            if ( v94 >= 8 )
              v17 = (void **)v92[0];
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            LOBYTE(v17) = *(_WORD *)v17 == *(_WORD *)(a3 + 10);
          }
          if ( (v55 & 4) != 0 )
          {
            v55 &= ~4u;
            if ( v94 >= 8 )
              operator delete(v92[0]);
            v94 = 7LL;
            v93 = 0LL;
            LOWORD(v92[0]) = 0;
          }
          if ( (v55 & 2) != 0 )
          {
            v55 &= ~2u;
            if ( v91 >= 8 )
              operator delete(v89[0]);
          }
          if ( (_BYTE)v17 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v92);
            v18 = v55 | 0x800;
            if ( v97 >= 8 )
              operator delete(v95[0]);
            v97 = 7LL;
            v17 = 0LL;
            v96 = 0LL;
            LOWORD(v95[0]) = 0;
            std::wstring::_Assign_rv(v95, v92);
            if ( v94 >= 8 )
              operator delete(v92[0]);
          }
          else
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v89);
            v56 = v55 | 0x1008;
            if ( !v90 )
              goto LABEL_176;
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v92);
            v56 |= 0x2010u;
            v57 = v92;
            if ( v94 >= 8 )
              v57 = (void **)v92[0];
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( *(_WORD *)v57 == *(_WORD *)(a3 + 10) )
              v58 = 1;
            else
LABEL_176:
              v58 = 0;
            if ( (v56 & 0x10) != 0 )
            {
              v56 &= ~0x10u;
              if ( v94 >= 8 )
                operator delete(v92[0]);
              v94 = 7LL;
              v93 = 0LL;
              LOWORD(v92[0]) = 0;
            }
            if ( (v56 & 8) != 0 )
            {
              v56 &= ~8u;
              if ( v91 >= 8 )
                operator delete(v89[0]);
            }
            if ( !v58 )
            {
              (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v92);
              v18 = v56 | 0x8000;
              v59 = v93 == 0;
              if ( v94 >= 8 )
                operator delete(v92[0]);
              if ( v59 )
                goto LABEL_85;
              (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v92);
              v18 |= 0x10000u;
              v60 = v93 == 0;
              if ( v94 >= 8 )
                operator delete(v92[0]);
              v23 = v75;
              if ( v60 )
                v74 = 1;
              goto LABEL_265;
            }
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v92);
            v18 = v56 | 0x4000;
            if ( v97 >= 8 )
              operator delete(v95[0]);
            v97 = 7LL;
            v17 = 0LL;
            v96 = 0LL;
            LOWORD(v95[0]) = 0;
            std::wstring::_Assign_rv(v95, v92);
            if ( v94 >= 8 )
              operator delete(v92[0]);
            v74 = 1;
          }
        }
LABEL_20:
        v23 = v75;
        goto LABEL_266;
    }
    if ( v22 != 118 )
    {
      if ( v22 == 120 )
      {
LABEL_253:
        if ( v81 != (void **)3 )
        {
          v67 = v79;
          while ( 1 )
          {
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( !*((_BYTE *)v7 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(v7);
            if ( *(_QWORD *)a3 )
            {
              if ( *v7 )
                break;
            }
            else if ( !*v7 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v67 + 32LL))(
                    v67,
                    72LL,
                    *(unsigned __int16 *)(a3 + 10)) )
              break;
            LOBYTE(v17) = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          v9 = a2;
          v13 = v80;
          if ( *((_BYTE *)&v82 + (_QWORD)v81) != 32 )
            goto LABEL_85;
          v23 = v75;
          if ( !(_BYTE)v17 )
            v23 = 1;
          v75 = v23;
          goto LABEL_265;
        }
      }
      goto LABEL_20;
    }
    v76 = (int)v17;
    v24 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13);
    v85 = v24;
    v25 = v80;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v80 + 40LL))(v80, v92);
    v18 |= 0x20000u;
    v84 = v18;
    if ( v93 )
    {
      v26 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v25 + 32LL))(v25);
      if ( v26 )
      {
        v27 = v92;
        if ( v94 >= 0x10 )
          v27 = (void **)v92[0];
        if ( *(_BYTE *)v27 < 0x7Fu )
        {
          v28 = 15LL;
          v91 = 15LL;
          LOWORD(v89[0]) = 0;
          v90 = 1LL;
          v29 = 0LL;
          v30 = v7 + 1;
          v86 = v7 + 1;
          v31 = (_BYTE *)(a3 + 8);
          v32 = (void **)v89[0];
          while ( 1 )
          {
            if ( !*v31 )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( !*v30 )
              std::istreambuf_iterator<wchar_t>::_Peek(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *a4 )
                goto LABEL_33;
            }
            else if ( !*a4 )
            {
              goto LABEL_33;
            }
            if ( !*v31 )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            v41 = v83;
            for ( i = *v83; i && i != *(_WORD *)(a3 + 10); i = *v41 )
              ++v41;
            if ( (unsigned __int64)(v41 - v83) >= 0xA )
              break;
            std::string::append(a2, 1LL);
            v43 = v89;
            if ( v28 >= 0x10 )
              v43 = v32;
            if ( *((_BYTE *)v43 + v29) != 127 )
            {
              v44 = v89;
              if ( v28 >= 0x10 )
                v44 = v32;
              ++*((_BYTE *)v44 + v29);
LABEL_75:
              v32 = (void **)v89[0];
              v28 = v91;
            }
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          v45 = v89;
          if ( v28 >= 0x10 )
            v45 = v32;
          if ( !*((_BYTE *)v45 + v29) )
            goto LABEL_33;
          if ( !*v31 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( *(_WORD *)(a3 + 10) != v26 )
          {
LABEL_33:
            v18 = v84;
            if ( !v29 )
              goto LABEL_38;
            v33 = v89;
            if ( v28 >= 0x10 )
              v33 = v32;
            if ( *((char *)v33 + v29) <= 0 )
            {
              v34 = 1;
              v75 = 1;
            }
            else
            {
              ++v29;
LABEL_38:
              v34 = v75;
            }
            v35 = v92;
            v36 = v92[0];
            v37 = v94;
            if ( v94 >= 0x10 )
              v35 = (void **)v92[0];
            if ( v34 )
              goto LABEL_79;
            while ( v29 )
            {
              v38 = *(_BYTE *)v35;
              if ( *(_BYTE *)v35 == 127 )
                break;
              if ( --v29 )
              {
                v39 = v89;
                if ( v28 >= 0x10 )
                  v39 = v32;
                if ( v38 != *((_BYTE *)v39 + v29) )
                  goto LABEL_78;
              }
              if ( !v29 )
              {
                v40 = v89;
                if ( v28 >= 0x10 )
                  v40 = v32;
                if ( v38 < *(char *)v40 )
                {
LABEL_78:
                  v75 = 1;
LABEL_79:
                  if ( v28 >= 0x10 )
                  {
                    operator delete(v32);
                    v37 = v94;
                    v36 = v92[0];
                  }
                  if ( v37 >= 0x10 )
                    operator delete(v36);
                  v9 = a2;
                  goto LABEL_84;
                }
              }
              if ( *((char *)v35 + 1) > 0 )
                v35 = (void **)((char *)v35 + 1);
            }
            if ( v28 >= 0x10 )
              operator delete(v32);
            v46 = v86;
            v24 = v85;
            goto LABEL_89;
          }
          std::string::append(v89, 1LL);
          ++v29;
          goto LABEL_75;
        }
      }
    }
    v46 = v7 + 1;
    v31 = (_BYTE *)(a3 + 8);
    while ( 1 )
    {
      if ( !*v31 )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*v46 )
        std::istreambuf_iterator<wchar_t>::_Peek(a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *a4 )
          break;
      }
      else if ( !*a4 )
      {
        break;
      }
      if ( !*v31 )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v49 = v83;
      for ( j = *v83; j && j != *(_WORD *)(a3 + 10); j = *v49 )
        ++v49;
      if ( (unsigned __int64)(v49 - v83) >= 0xA )
        break;
      std::string::append(a2, 1LL);
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
LABEL_89:
    v47 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v80 + 24LL))(v80);
    if ( !*v31 )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*v46 )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *a4 )
        goto LABEL_95;
    }
    else if ( !*a4 )
    {
      goto LABEL_95;
    }
    if ( !v47 )
    {
LABEL_95:
      v48 = v76;
      goto LABEL_96;
    }
    if ( !*v31 )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v51 = *(_WORD *)(a3 + 10) == v47;
    v48 = v76;
    if ( !v51 )
      goto LABEL_96;
    while ( 1 )
    {
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( !*v31 )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*v46 )
        std::istreambuf_iterator<wchar_t>::_Peek(a4);
      if ( *(_QWORD *)a3 )
        break;
      if ( !*a4 )
        goto LABEL_126;
LABEL_129:
      if ( v48 >= v24 )
        goto LABEL_96;
      if ( !*v31 )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v52 = v83;
      for ( k = *v83; k && k != *(_WORD *)(a3 + 10); k = *v52 )
        ++v52;
      if ( (unsigned __int64)(v52 - v83) >= 0xA )
        goto LABEL_127;
      std::string::append(a2, 1LL);
      ++v48;
    }
    if ( !*a4 )
      goto LABEL_129;
LABEL_126:
    if ( v48 >= v24 )
      goto LABEL_96;
LABEL_127:
    v75 = 1;
LABEL_96:
    v9 = a2;
    if ( a2[2] )
    {
      if ( v48 < v24 )
      {
        v54 = (unsigned int)(v24 - v48);
        do
        {
          std::string::append(a2, 1LL);
          --v54;
        }
        while ( v54 );
      }
    }
    else
    {
      v75 = 1;
    }
    if ( v94 >= 0x10 )
      operator delete(v92[0]);
LABEL_84:
    v7 = a4;
    v13 = v80;
LABEL_85:
    v23 = v75;
LABEL_265:
    v17 = 0LL;
LABEL_266:
    v81 = (void **)((char *)v81 + 1);
    v51 = v23 == 0;
    v21 = (unsigned __int64)v81;
    if ( !v51 )
    {
LABEL_290:
      if ( v9[3] < 0x10uLL )
        v72 = v9;
      else
        v72 = (_BYTE *)*v9;
      v9[2] = v17;
      *v72 = (_BYTE)v17;
      goto LABEL_301;
    }
  }
  if ( v96 > 1 )
  {
    v68 = v95;
    if ( v97 >= 8 )
      v68 = (void **)v95[0];
    v69 = v74;
    while ( 1 )
    {
      v74 = v69;
      v68 = (void **)((char *)v68 + 2);
      v70 = v95;
      if ( v97 >= 8 )
        v70 = (void **)v95[0];
      if ( v68 == (void **)((char *)v70 + 2 * v96) )
        break;
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*((_BYTE *)v7 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(v7);
      if ( *(_QWORD *)a3 )
      {
        if ( *v7 )
          break;
      }
      else if ( !*v7 )
      {
        break;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v74 = v69;
      if ( *(_WORD *)(a3 + 10) != *(_WORD *)v68 )
        break;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v71 = v95;
    if ( v97 >= 8 )
      v71 = (void **)v95[0];
    v9 = a2;
    if ( v68 != (void **)((char *)v71 + 2 * v96) )
    {
      v17 = 0LL;
      goto LABEL_290;
    }
  }
  if ( v74 )
    std::string::insert(v9, 0LL, 1uLL, 45);
LABEL_301:
  if ( v97 >= 8 )
    operator delete(v95[0]);
  return v9;
}
