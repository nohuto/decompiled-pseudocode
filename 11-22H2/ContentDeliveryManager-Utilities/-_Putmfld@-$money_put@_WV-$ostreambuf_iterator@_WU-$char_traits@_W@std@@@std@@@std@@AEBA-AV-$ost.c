/*
 * XREFs of ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180017290
 * Callers:
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18001A060 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x18001A2D0 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_18001A2D0.c)
 * Callees:
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x18000FAD8 (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x18000FC30 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x180010454 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x18001BEA0 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180060170 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_OWORD *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int64 a8,
        unsigned __int16 a9)
{
  __int128 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // r13
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  __int64 v16; // rbx
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  unsigned int v18; // r14d
  unsigned __int64 v19; // rbx
  void **v20; // rax
  void **v21; // rax
  unsigned __int16 v22; // r14
  void **v23; // rbx
  unsigned __int64 v24; // rsi
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 i; // rdx
  char v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  unsigned __int64 v33; // r14
  int v34; // ebx
  __int128 v35; // xmm0
  unsigned __int64 v36; // rax
  char v37; // al
  unsigned __int16 v38; // si
  __int128 v39; // xmm0
  void **v40; // rbx
  unsigned __int16 *v41; // rbx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rsi
  unsigned __int16 *v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int16 v46; // ax
  unsigned __int64 v47; // rbx
  __int64 v48; // rsi
  unsigned __int16 *v49; // rbx
  unsigned __int64 v50; // rsi
  unsigned __int16 *v51; // rbx
  __int128 v52; // xmm0
  unsigned __int16 v53; // ax
  char *v54; // rcx
  char *v55; // rbx
  unsigned __int64 v56; // rsi
  void **v57; // rax
  void **v58; // rbx
  __int64 v59; // rsi
  __int128 v60; // xmm0
  _OWORD *v61; // rbx
  int v63; // [rsp+2Ch] [rbp-DCh]
  __int128 *v64; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v66; // [rsp+40h] [rbp-C8h]
  __int64 v67; // [rsp+48h] [rbp-C0h]
  __int128 v68; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+68h] [rbp-A0h]
  _OWORD *v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  void *v73[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-68h]
  void *v75[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v76; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v77; // [rsp+C0h] [rbp-48h]
  void *v78[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v80; // [rsp+E0h] [rbp-28h]
  void *v81[3]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v82; // [rsp+100h] [rbp-8h]

  v71 = -2LL;
  v9 = a3;
  v64 = a3;
  v70 = a2;
  v10 = a5;
  v69 = a5;
  v11 = a8;
  v67 = a8;
  v72 = a8;
  v12 = *(__int64 **)(a5 + 64);
  if ( a4 )
  {
    v13 = *v12;
    *(_QWORD *)&v68 = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = std::use_facet<std::moneypunct<wchar_t,1>>((__int64 *)&v68);
    if ( v13 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v15 )
        (**v15)(v15, 1LL);
    }
  }
  else
  {
    v16 = *v12;
    *(_QWORD *)&v68 = v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v14 = std::use_facet<std::moneypunct<wchar_t,0>>((__int64 *)&v68);
    if ( v16 )
    {
      v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v17 )
        (**v17)(v17, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v81);
  v18 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14));
  LODWORD(v65) = v18;
  v19 = v18;
  v66 = v18;
  if ( *(_QWORD *)(a8 + 16) > (unsigned __int64)v18 )
  {
    v20 = v81;
    if ( v82 >= 0x10 )
      v20 = (void **)v81[0];
    if ( *(_BYTE *)v20 != 127 )
    {
      v21 = v81;
      if ( v82 >= 0x10 )
        v21 = (void **)v81[0];
      if ( *(char *)v21 > 0 )
      {
        v22 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v23 = v81;
        if ( v82 >= 0x10 )
          v23 = (void **)v81[0];
        v24 = *(_QWORD *)(a8 + 16) - v66;
        v25 = *(_BYTE *)v23;
        if ( *(_BYTE *)v23 != 127 )
        {
          do
          {
            if ( v25 <= 0 || v25 >= v24 )
              break;
            v24 -= v25;
            std::wstring::insert(a8, v24, 1LL, v22);
            if ( *((char *)v23 + 1) > 0 )
              v23 = (void **)((char *)v23 + 1);
            v25 = *(_BYTE *)v23;
          }
          while ( *(_BYTE *)v23 != 127 );
          v9 = v64;
        }
        v18 = v65;
        v10 = v69;
        v19 = v66;
      }
    }
  }
  else
  {
    std::wstring::insert(a8, 0LL, v18 - *(_QWORD *)(a8 + 16) + 1LL, a9);
  }
  v77 = 7LL;
  v76 = 0LL;
  LOWORD(v75[0]) = 0;
  v26 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 **))(v26 + 88))(v14, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 64LL))(v14, v73);
    if ( v77 >= 8 )
      operator delete(v75[0]);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 **))(v26 + 80))(v14, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v73);
    if ( v77 >= 8 )
      operator delete(v75[0]);
  }
  v77 = 7LL;
  v76 = 0LL;
  LOWORD(v75[0]) = 0;
  std::wstring::_Assign_rv(v75, v73);
  if ( v74 >= 8 )
    operator delete(v73[0]);
  v80 = 7LL;
  v79 = 0LL;
  LOWORD(v78[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 48LL))(v14, v73);
    if ( v80 >= 8 )
      operator delete(v78[0]);
    v80 = 7LL;
    v79 = 0LL;
    LOWORD(v78[0]) = 0;
    std::wstring::_Assign_rv(v78, v73);
    if ( v74 >= 8 )
      operator delete(v73[0]);
  }
  LOBYTE(v27) = 0;
  v28 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v30 = *((_BYTE *)&v64 + i);
    switch ( v30 )
    {
      case ' ':
        ++v28;
LABEL_53:
        v27 = (unsigned __int8)v27;
        if ( i != 3 )
          v27 = 1LL;
        continue;
      case '$':
        v28 += v79;
        continue;
      case '+':
        v28 += v76;
        continue;
    }
    if ( v30 != 118 )
    {
      if ( v30 != 120 )
        continue;
      goto LABEL_53;
    }
    v31 = v19 + 1;
    if ( *(_QWORD *)(a8 + 16) > v19 )
      v31 = *(_QWORD *)(a8 + 16);
    v28 += v31 + (v18 != 0);
  }
  v32 = *(_QWORD *)(v10 + 40);
  if ( v32 <= 0 || v32 <= v28 )
    v33 = 0LL;
  else
    v33 = v32 - v28;
  v34 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v63 = v34;
  if ( v34 != 64 && (v34 != 256 || !(_BYTE)v27) )
  {
    v35 = *v9;
    v68 = *v9;
    if ( v33 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v68, a6);
        --v33;
      }
      while ( v33 );
      v35 = v68;
    }
    *v9 = v35;
    v33 = 0LL;
  }
  v36 = 0LL;
  *(_QWORD *)&v68 = 0LL;
  while ( 2 )
  {
    v37 = *((_BYTE *)&v64 + v36);
    if ( v37 != 32 )
    {
      switch ( v37 )
      {
        case '$':
          v58 = v78;
          if ( v80 >= 8 )
            v58 = (void **)v78[0];
          v39 = *v9;
          *(_OWORD *)v73 = *v9;
          v59 = v79;
          if ( !v79 )
            goto LABEL_94;
          do
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *(unsigned __int16 *)v58);
            v58 = (void **)((char *)v58 + 2);
            --v59;
          }
          while ( v59 );
          break;
        case '+':
          if ( !v76 )
            goto LABEL_80;
          v57 = v75;
          if ( v77 >= 8 )
            v57 = (void **)v75[0];
          *(_OWORD *)v73 = *v9;
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *(unsigned __int16 *)v57);
          v39 = *(_OWORD *)v73;
          goto LABEL_79;
        case 'v':
          v43 = *(_QWORD *)(v11 + 16);
          if ( !(_DWORD)v65 )
          {
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v44 = (unsigned __int16 *)v11;
            else
              v44 = *(unsigned __int16 **)v11;
            v39 = *v9;
            *(_OWORD *)v73 = *v9;
            if ( v43 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *v44++);
                --v43;
              }
              while ( v43 );
              break;
            }
LABEL_94:
            v34 = v63;
LABEL_79:
            *v9 = v39;
            goto LABEL_80;
          }
          v45 = v66;
          if ( v43 > v66 )
          {
            v50 = v43 - v66;
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v51 = (unsigned __int16 *)v11;
            else
              v51 = *(unsigned __int16 **)v11;
            v52 = *v9;
            *(_OWORD *)v73 = *v9;
            if ( v50 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *v51++);
                --v50;
              }
              while ( v50 );
              v52 = *(_OWORD *)v73;
              v11 = v67;
            }
            *v9 = v52;
            v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v27);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v53);
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v54 = (char *)v11;
            else
              v54 = *(char **)v11;
            v55 = &v54[2 * (*(_QWORD *)(v11 + 16) - v66)];
            *(_OWORD *)v73 = *v9;
            v56 = v66;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *(unsigned __int16 *)v55);
              v55 += 2;
              --v56;
            }
            while ( v56 );
          }
          else
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, a9);
            v46 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v46);
            v39 = *v9;
            *(_OWORD *)v73 = *v9;
            v47 = v45 - *(_QWORD *)(v11 + 16);
            if ( v47 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, a9);
                --v47;
              }
              while ( v47 );
              v39 = *(_OWORD *)v73;
            }
            v48 = *(_QWORD *)(v11 + 16);
            if ( *(_QWORD *)(v11 + 24) < 8uLL )
              v49 = (unsigned __int16 *)v11;
            else
              v49 = *(unsigned __int16 **)v11;
            *(_OWORD *)v73 = v39;
            if ( !v48 )
              goto LABEL_94;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *v49++);
              --v48;
            }
            while ( v48 );
          }
          break;
        case 'x':
          v38 = a6;
          goto LABEL_74;
        default:
          goto LABEL_80;
      }
      v39 = *(_OWORD *)v73;
      v11 = v67;
      goto LABEL_94;
    }
    *(_OWORD *)v73 = *v9;
    v38 = a6;
    std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, a6);
    *v9 = *(_OWORD *)v73;
LABEL_74:
    if ( v34 == 256 )
    {
      v39 = *v9;
      *(_OWORD *)v73 = *v9;
      if ( v33 )
      {
        do
        {
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, v38);
          --v33;
        }
        while ( v33 );
        v39 = *(_OWORD *)v73;
      }
      v33 = 0LL;
      goto LABEL_79;
    }
LABEL_80:
    v36 = v68 + 1;
    *(_QWORD *)&v68 = v36;
    if ( v36 < 4 )
      continue;
    break;
  }
  if ( v76 > 1 )
  {
    v40 = v75;
    if ( v77 >= 8 )
      v40 = (void **)v75[0];
    v41 = (unsigned __int16 *)v40 + 1;
    *(_OWORD *)v73 = *v9;
    v42 = v76 - 1;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, *v41++);
      --v42;
    }
    while ( v42 );
    *v9 = *(_OWORD *)v73;
  }
  *(_QWORD *)(v69 + 40) = 0LL;
  v60 = *v9;
  *(_OWORD *)v73 = *v9;
  if ( v33 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v73, a6);
      --v33;
    }
    while ( v33 );
    v60 = *(_OWORD *)v73;
  }
  v61 = v70;
  *v70 = v60;
  if ( v80 >= 8 )
    operator delete(v78[0]);
  v80 = 7LL;
  v79 = 0LL;
  LOWORD(v78[0]) = 0;
  if ( v77 >= 8 )
    operator delete(v75[0]);
  v77 = 7LL;
  v76 = 0LL;
  LOWORD(v75[0]) = 0;
  if ( v82 >= 0x10 )
    operator delete(v81[0]);
  v82 = 15LL;
  v81[2] = 0LL;
  LOBYTE(v81[0]) = 0;
  if ( *(_QWORD *)(v11 + 24) >= 8uLL )
    operator delete(*(void **)v11);
  *(_QWORD *)(v11 + 24) = 7LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_WORD *)v11 = 0;
  return v61;
}
