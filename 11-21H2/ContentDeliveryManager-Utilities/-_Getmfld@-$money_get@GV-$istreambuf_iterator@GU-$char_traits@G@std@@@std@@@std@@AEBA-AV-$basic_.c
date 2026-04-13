/*
 * XREFs of ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x180011DB8
 * Callers:
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800176C0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800177E0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800177E0.c)
 * Callees:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B0F0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x18000F080 (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x18000F1CC (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180069AD8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  __int64 v7; // r15
  _QWORD *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // r12d
  struct std::_Facet_base *v13; // r13
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  void **v17; // rbx
  int v18; // r12d
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  unsigned __int64 v21; // rax
  char v22; // al
  __int64 v23; // rsi
  char v24; // al
  bool v25; // zf
  __int16 v26; // r15
  void **v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rbx
  void **v30; // r14
  __int64 v31; // r13
  int v32; // r13d
  void **v33; // rax
  char v34; // al
  void **v35; // rcx
  void *v36; // r9
  unsigned __int64 v37; // r8
  char v38; // dl
  void **v39; // rax
  void **v40; // rax
  __int16 *v41; // rax
  __int16 j; // cx
  void **v43; // rax
  void **v44; // rax
  void **v45; // rax
  int v46; // esi
  __int16 v47; // bx
  __int16 *v48; // rbx
  __int16 *v49; // rax
  __int16 i; // cx
  __int16 *v51; // rax
  __int16 k; // cx
  int v53; // r12d
  int v54; // r12d
  void **v55; // rbx
  char v56; // bl
  bool v57; // bl
  bool v58; // bl
  void **v59; // rax
  void **v60; // rax
  void **v61; // rax
  void **v62; // rbx
  void **v63; // rdx
  void **v64; // rcx
  void **v65; // rbx
  void **v66; // rcx
  void **v67; // rcx
  _BYTE *v68; // rax
  char v70; // [rsp+38h] [rbp-C1h]
  char v71; // [rsp+3Ch] [rbp-BDh]
  struct std::_Facet_base *v73; // [rsp+50h] [rbp-A9h]
  void **v74; // [rsp+58h] [rbp-A1h] BYREF
  __int64 v75; // [rsp+60h] [rbp-99h]
  __int64 v76; // [rsp+68h] [rbp-91h]
  unsigned __int64 v77; // [rsp+70h] [rbp-89h]
  int v78; // [rsp+78h] [rbp-81h]
  _BYTE v79[4]; // [rsp+7Ch] [rbp-7Dh] BYREF
  __int16 *v80; // [rsp+80h] [rbp-79h]
  int v81; // [rsp+88h] [rbp-71h]
  __int64 v82; // [rsp+90h] [rbp-69h]
  _QWORD *v83; // [rsp+98h] [rbp-61h]
  void *v84[2]; // [rsp+A0h] [rbp-59h] BYREF
  unsigned __int64 v85; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v86; // [rsp+B8h] [rbp-41h]
  void *v87[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v89; // [rsp+D8h] [rbp-21h]
  void *v90[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v91; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v92; // [rsp+F8h] [rbp-1h]

  v82 = -2LL;
  v7 = a4;
  v76 = a4;
  v9 = a2;
  v83 = a2;
  v80 = a7;
  v10 = *(__int64 **)(a6 + 64);
  if ( a5 )
  {
    v11 = *v10;
    v74 = (void **)v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = 32;
    v13 = std::use_facet<std::moneypunct<unsigned short,1>>((__int64 *)&v74);
    v73 = v13;
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
    v74 = (void **)v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v12 = 64;
    v13 = std::use_facet<std::moneypunct<unsigned short,0>>((__int64 *)&v74);
    v73 = v13;
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  v70 = 0;
  v71 = 0;
  v92 = 7LL;
  v91 = 0LL;
  LOWORD(v90[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v13 + 88LL))(v13, v79);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v17 = **(void ****)(a6 + 64);
  v74 = v17;
  (*((void (__fastcall **)(void **))*v17 + 1))(v17);
  v18 = v12 | 0x81;
  v19 = std::use_facet<std::ctype<unsigned short>>(&v74);
  v74 = (void **)v19;
  if ( v17 )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))(*((__int64 (__fastcall **)(void **))*v17 + 2))(v17);
    v17 = 0LL;
    if ( v20 )
      (**v20)(v20, 1LL);
    v19 = (__int64)v74;
  }
  (*(void (__fastcall **)(__int64, const char *, char *, __int16 *))(*(_QWORD *)v19 + 88LL))(
    v19,
    "0123456789-",
    "",
    v80);
  v21 = (unsigned __int64)v17;
  v77 = (unsigned __int64)v17;
  while ( v21 < 4 )
  {
    v22 = v79[v21];
    switch ( v22 )
    {
      case ' ':
        goto LABEL_20;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v84);
        v18 |= 0x100u;
        if ( (*(_BYTE *)(a6 + 24) & 8) == 0 )
        {
          if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( *(_BYTE *)(v7 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(v7);
          if ( *(void ***)a3 == v17 )
          {
            if ( *(void ***)v7 == v17 )
              goto LABEL_223;
          }
          else if ( *(void ***)v7 != v17 )
          {
            goto LABEL_223;
          }
          if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          v59 = v84;
          if ( v86 >= 8 )
            v59 = (void **)v84[0];
          if ( *(_WORD *)(a3 + 10) != *(_WORD *)v59 )
          {
            v60 = v84;
            if ( v86 >= 8 )
              v60 = (void **)v84[0];
LABEL_249:
            v85 = (unsigned __int64)v17;
            *(_WORD *)v60 = (_WORD)v17;
LABEL_250:
            v62 = v84;
            if ( v86 >= 8 )
              v62 = (void **)v84[0];
            while ( 1 )
            {
              if ( !*(_BYTE *)(a3 + 8) )
                std::istreambuf_iterator<wchar_t>::_Peek(a3);
              if ( !*(_BYTE *)(v7 + 8) )
                std::istreambuf_iterator<wchar_t>::_Peek(v7);
              if ( *(_QWORD *)a3 )
              {
                if ( *(_QWORD *)v7 )
                  break;
              }
              else if ( !*(_QWORD *)v7 )
              {
                break;
              }
              v64 = v84;
              if ( v86 >= 8 )
                v64 = (void **)v84[0];
              if ( v62 == (void **)((char *)v64 + 2 * v85) )
                break;
              if ( !*(_BYTE *)(a3 + 8) )
                std::istreambuf_iterator<wchar_t>::_Peek(a3);
              if ( *(_WORD *)(a3 + 10) != *(_WORD *)v62 )
                break;
              v62 = (void **)((char *)v62 + 2);
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
            }
            v63 = v84;
            if ( v86 >= 8 )
              v63 = (void **)v84[0];
            v24 = v70;
            if ( v62 != (void **)((char *)v63 + 2 * v85) )
              v24 = 1;
            v70 = v24;
            v9 = a2;
            if ( v86 >= 8 )
            {
              operator delete(v84[0]);
              goto LABEL_98;
            }
LABEL_32:
            v17 = 0LL;
            goto LABEL_33;
          }
        }
LABEL_223:
        if ( v77 != 3 || v91 > 1 )
          goto LABEL_250;
        if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( *(_BYTE *)(v7 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(v7);
        if ( *(void ***)a3 == v17 )
        {
          if ( *(void ***)v7 != v17 )
            goto LABEL_242;
        }
        else if ( *(void ***)v7 == v17 )
        {
LABEL_242:
          if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          v61 = v84;
          if ( v86 >= 8 )
            v61 = (void **)v84[0];
          if ( *(_WORD *)(a3 + 10) == *(_WORD *)v61 )
            goto LABEL_250;
        }
        v60 = v84;
        if ( v86 >= 8 )
          v60 = (void **)v84[0];
        goto LABEL_249;
      case '+':
        if ( *(_BYTE *)(a3 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( *(_BYTE *)(v7 + 8) == (_BYTE)v17 )
          std::istreambuf_iterator<wchar_t>::_Peek(v7);
        if ( *(void ***)a3 == v17 )
        {
          if ( *(void ***)v7 == v17 )
            goto LABEL_115;
        }
        else if ( *(void ***)v7 != v17 )
        {
          goto LABEL_115;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v84);
        v53 = v18 | 0x202;
        if ( v85 > (unsigned __int64)v17 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v87);
          v53 |= 0x404u;
          v17 = v87;
          if ( v89 >= 8 )
            v17 = (void **)v87[0];
          if ( !*(_BYTE *)(a3 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          LOBYTE(v17) = *(_WORD *)v17 == *(_WORD *)(a3 + 10);
        }
        if ( (v53 & 4) != 0 )
        {
          v53 &= ~4u;
          if ( v89 >= 8 )
            operator delete(v87[0]);
          v89 = 7LL;
          v88 = 0LL;
          LOWORD(v87[0]) = 0;
        }
        if ( (v53 & 2) != 0 )
        {
          v53 &= ~2u;
          if ( v86 >= 8 )
            operator delete(v84[0]);
        }
        if ( (_BYTE)v17 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v87);
          v18 = v53 | 0x800;
          if ( v92 >= 8 )
            operator delete(v90[0]);
          v92 = 7LL;
          v17 = 0LL;
          v91 = 0LL;
          LOWORD(v90[0]) = 0;
          std::wstring::_Assign_rv(v90, v87);
          if ( v89 >= 8 )
            operator delete(v87[0]);
          goto LABEL_115;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v84);
        v54 = v53 | 0x1008;
        if ( !v85 )
          goto LABEL_195;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v87);
        v54 |= 0x2010u;
        v55 = v87;
        if ( v89 >= 8 )
          v55 = (void **)v87[0];
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( *(_WORD *)v55 == *(_WORD *)(a3 + 10) )
          v56 = 1;
        else
LABEL_195:
          v56 = 0;
        if ( (v54 & 0x10) != 0 )
        {
          v54 &= ~0x10u;
          if ( v89 >= 8 )
            operator delete(v87[0]);
          v89 = 7LL;
          v88 = 0LL;
          LOWORD(v87[0]) = 0;
        }
        if ( (v54 & 8) != 0 )
        {
          v54 &= ~8u;
          if ( v86 >= 8 )
            operator delete(v84[0]);
        }
        if ( v56 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v87);
          v18 = v54 | 0x4000;
          if ( v92 >= 8 )
            operator delete(v90[0]);
          v92 = 7LL;
          v17 = 0LL;
          v91 = 0LL;
          LOWORD(v90[0]) = 0;
          std::wstring::_Assign_rv(v90, v87);
          if ( v89 >= 8 )
            operator delete(v87[0]);
          v71 = 1;
          goto LABEL_115;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v87);
        v18 = v54 | 0x8000;
        v57 = v88 == 0;
        if ( v89 >= 8 )
          operator delete(v87[0]);
        if ( !v57 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v87);
          v18 |= 0x10000u;
          v58 = v88 == 0;
          if ( v89 >= 8 )
            operator delete(v87[0]);
          v24 = v70;
          if ( v58 )
            v71 = 1;
          goto LABEL_32;
        }
        goto LABEL_98;
    }
    if ( v22 != 118 )
    {
      if ( v22 != 120 )
        goto LABEL_115;
LABEL_20:
      if ( v77 == 3 )
        goto LABEL_115;
      v23 = (__int64)v74;
      while ( 1 )
      {
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( !*(_BYTE *)(v7 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(v7);
        if ( *(_QWORD *)a3 )
        {
          if ( *(_QWORD *)v7 )
            break;
        }
        else if ( !*(_QWORD *)v7 )
        {
          break;
        }
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 32LL))(
                v23,
                72LL,
                *(unsigned __int16 *)(a3 + 10)) )
          break;
        LOBYTE(v17) = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      v9 = a2;
      v13 = v73;
      if ( v79[v77] == 32 )
      {
        v24 = v70;
        if ( !(_BYTE)v17 )
          v24 = 1;
        v70 = v24;
        goto LABEL_32;
      }
      goto LABEL_98;
    }
    LODWORD(v75) = (_DWORD)v17;
    v78 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v73 + 40LL))(v73, v87);
    v18 |= 0x20000u;
    v81 = v18;
    if ( !v88 )
      goto LABEL_117;
    v26 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v73 + 32LL))(v73);
    if ( !v26 )
      goto LABEL_116;
    v27 = v87;
    if ( v89 >= 0x10 )
      v27 = (void **)v87[0];
    if ( *(_BYTE *)v27 >= 0x7Fu )
    {
LABEL_116:
      v7 = v76;
LABEL_117:
      v48 = v80;
      while ( 1 )
      {
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( !*(_BYTE *)(v7 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(v7);
        if ( *(_QWORD *)a3 )
        {
          if ( *(_QWORD *)v7 )
            goto LABEL_124;
        }
        else if ( !*(_QWORD *)v7 )
        {
          goto LABEL_124;
        }
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v49 = v48;
        for ( i = *v48; i && i != *(_WORD *)(a3 + 10); i = *v49 )
          ++v49;
        if ( (unsigned __int64)(v49 - v48) >= 0xA )
        {
LABEL_124:
          v32 = v78;
          goto LABEL_102;
        }
        std::string::append(a2, 1LL);
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
    }
    v28 = 15LL;
    v86 = 15LL;
    LOWORD(v84[0]) = 0;
    v85 = 1LL;
    v29 = 0LL;
    v30 = (void **)v84[0];
    v31 = v76;
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*(_BYTE *)(v31 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(v31);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)v31 )
          goto LABEL_47;
      }
      else if ( !*(_QWORD *)v31 )
      {
        goto LABEL_47;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v41 = v80;
      for ( j = *v80; j && j != *(_WORD *)(a3 + 10); j = *v41 )
        ++v41;
      if ( (unsigned __int64)(v41 - v80) >= 0xA )
        break;
      std::string::append(a2, 1LL);
      v43 = v84;
      if ( v28 >= 0x10 )
        v43 = v30;
      if ( *((_BYTE *)v43 + v29) != 127 )
      {
        v44 = v84;
        if ( v28 >= 0x10 )
          v44 = v30;
        ++*((_BYTE *)v44 + v29);
        goto LABEL_89;
      }
LABEL_90:
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v45 = v84;
    if ( v28 >= 0x10 )
      v45 = v30;
    if ( *((_BYTE *)v45 + v29) )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( *(_WORD *)(a3 + 10) == v26 )
      {
        std::string::append(v84, 1LL);
        ++v29;
LABEL_89:
        v30 = (void **)v84[0];
        v28 = v86;
        goto LABEL_90;
      }
    }
LABEL_47:
    v18 = v81;
    v32 = v78;
    if ( !v29 )
      goto LABEL_52;
    v33 = v84;
    if ( v28 >= 0x10 )
      v33 = v30;
    if ( *((char *)v33 + v29) <= 0 )
    {
      v34 = 1;
      v70 = 1;
    }
    else
    {
      ++v29;
LABEL_52:
      v34 = v70;
    }
    v35 = v87;
    v36 = v87[0];
    v37 = v89;
    if ( v89 >= 0x10 )
      v35 = (void **)v87[0];
    if ( v34 )
    {
LABEL_93:
      if ( v28 >= 0x10 )
      {
        operator delete(v30);
        v37 = v89;
        v36 = v87[0];
      }
      if ( v37 >= 0x10 )
        operator delete(v36);
      v7 = v76;
      v9 = a2;
      v13 = v73;
LABEL_98:
      v24 = v70;
      goto LABEL_32;
    }
    while ( v29 )
    {
      v38 = *(_BYTE *)v35;
      if ( *(_BYTE *)v35 == 127 )
        break;
      if ( --v29 )
      {
        v39 = v84;
        if ( v28 >= 0x10 )
          v39 = v30;
        if ( v38 != *((_BYTE *)v39 + v29) )
          goto LABEL_92;
      }
      if ( !v29 )
      {
        v40 = v84;
        if ( v28 >= 0x10 )
          v40 = v30;
        if ( v38 < *(char *)v40 )
        {
LABEL_92:
          v70 = 1;
          goto LABEL_93;
        }
      }
      if ( *((char *)v35 + 1) > 0 )
        v35 = (void **)((char *)v35 + 1);
    }
    if ( v28 >= 0x10 )
      operator delete(v30);
    v7 = v76;
LABEL_102:
    v46 = v75;
    v47 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v73 + 24LL))(v73);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(v7 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(v7);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)v7 )
        goto LABEL_108;
    }
    else if ( !*(_QWORD *)v7 )
    {
LABEL_108:
      v17 = 0LL;
      goto LABEL_109;
    }
    if ( !v47 )
      goto LABEL_108;
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) != v47 )
      goto LABEL_108;
    v17 = 0LL;
    while ( 2 )
    {
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*(_BYTE *)(v7 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(v7);
      if ( !*(_QWORD *)a3 )
      {
        if ( !*(_QWORD *)v7 )
          break;
        goto LABEL_149;
      }
      if ( !*(_QWORD *)v7 )
      {
LABEL_149:
        if ( v46 >= v32 )
          goto LABEL_109;
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v51 = v80;
        for ( k = *v80; k && k != *(_WORD *)(a3 + 10); k = *v51 )
          ++v51;
        if ( (unsigned __int64)(v51 - v80) >= 0xA )
          goto LABEL_147;
        std::string::append(a2, 1LL);
        ++v46;
        continue;
      }
      break;
    }
    if ( v46 >= v32 )
      goto LABEL_109;
LABEL_147:
    v70 = 1;
LABEL_109:
    if ( !a2[2] )
    {
      v70 = 1;
      goto LABEL_111;
    }
    if ( v46 >= v32 )
    {
LABEL_111:
      v9 = a2;
    }
    else
    {
      v17 = (void **)(unsigned int)(v32 - v46);
      v9 = a2;
      do
      {
        std::string::append(a2, 1LL);
        v17 = (void **)((char *)v17 - 1);
      }
      while ( v17 );
    }
    if ( v89 >= 0x10 )
      operator delete(v87[0]);
    v13 = v73;
LABEL_115:
    v24 = v70;
LABEL_33:
    ++v77;
    v25 = v24 == 0;
    v21 = v77;
    if ( !v25 )
    {
LABEL_293:
      if ( v9[3] < 0x10uLL )
        v68 = v9;
      else
        v68 = (_BYTE *)*v9;
      v9[2] = v17;
      *v68 = (_BYTE)v17;
      goto LABEL_304;
    }
  }
  if ( v91 > 1 )
  {
    v65 = v90;
    if ( v92 >= 8 )
      v65 = (void **)v90[0];
    while ( 1 )
    {
      v65 = (void **)((char *)v65 + 2);
      v66 = v90;
      if ( v92 >= 8 )
        v66 = (void **)v90[0];
      if ( v65 == (void **)((char *)v66 + 2 * v91) )
        break;
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*(_BYTE *)(v7 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(v7);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)v7 )
          break;
      }
      else if ( !*(_QWORD *)v7 )
      {
        break;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( *(_WORD *)(a3 + 10) != *(_WORD *)v65 )
        break;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v67 = v90;
    if ( v92 >= 8 )
      v67 = (void **)v90[0];
    if ( v65 != (void **)((char *)v67 + 2 * v91) )
    {
      v17 = 0LL;
      goto LABEL_293;
    }
  }
  if ( v71 )
    std::string::insert(v9, 0LL, 1uLL, 45);
LABEL_304:
  if ( v92 >= 8 )
    operator delete(v90[0]);
  return v9;
}
