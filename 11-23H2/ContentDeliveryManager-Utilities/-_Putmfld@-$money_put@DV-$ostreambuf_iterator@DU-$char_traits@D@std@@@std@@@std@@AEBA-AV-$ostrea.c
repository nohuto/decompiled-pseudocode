/*
 * XREFs of ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001F0C4
 * Callers:
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180020CE0 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x180020F30 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_180020F30.c)
 * Callees:
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180006DD4 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000B7F0 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C8F4 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001CA4C (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006E7F4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int8 *a8,
        char a9)
{
  __int64 v10; // r14
  unsigned __int8 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // r13
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  __int64 v16; // rbx
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  unsigned int v18; // r15d
  unsigned __int64 v19; // rbx
  void **v20; // rax
  void **v21; // rax
  char v22; // r15
  void **v23; // rbx
  unsigned __int64 v24; // r14
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 i; // rdx
  char v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // r15
  unsigned __int64 v33; // r15
  int v34; // ebx
  __int128 v35; // xmm0
  unsigned __int64 v36; // rax
  char v37; // al
  unsigned __int8 v38; // r14
  __int128 v39; // xmm0
  void **v40; // rbx
  unsigned __int8 *v41; // rbx
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r14
  unsigned __int8 *v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int8 v46; // al
  unsigned __int64 v47; // rbx
  __int64 v48; // r14
  unsigned __int8 *v49; // rbx
  unsigned __int64 v50; // r14
  unsigned __int8 *v51; // rbx
  __int128 v52; // xmm0
  unsigned __int8 v53; // al
  unsigned __int8 *v54; // rbx
  unsigned __int8 *v55; // rbx
  unsigned __int64 v56; // r14
  unsigned __int8 *v57; // rax
  unsigned __int8 *v58; // rbx
  __int64 v59; // r14
  __int128 v60; // xmm0
  _OWORD *v61; // rbx
  int v63; // [rsp+2Ch] [rbp-D5h] BYREF
  int v64; // [rsp+30h] [rbp-D1h]
  unsigned int v65; // [rsp+34h] [rbp-CDh]
  unsigned __int64 v66; // [rsp+38h] [rbp-C9h]
  unsigned __int8 *v67; // [rsp+40h] [rbp-C1h]
  __int128 v68; // [rsp+48h] [rbp-B9h] BYREF
  __int64 v69; // [rsp+58h] [rbp-A9h]
  _OWORD *v70; // [rsp+60h] [rbp-A1h]
  __int64 v71; // [rsp+68h] [rbp-99h]
  unsigned __int8 *v72; // [rsp+70h] [rbp-91h]
  void *v73[2]; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v74; // [rsp+90h] [rbp-71h]
  void *v75[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-51h]
  void *v78[3]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned __int64 v79; // [rsp+D0h] [rbp-31h]
  void *v80[2]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-19h]
  unsigned __int64 v82; // [rsp+F0h] [rbp-11h]

  v71 = -2LL;
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
    v14 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v68);
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
    v14 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v68);
    if ( v16 )
    {
      v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v17 )
        (**v17)(v17, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v78);
  v18 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14));
  v65 = v18;
  v19 = v18;
  v66 = v18;
  if ( *((_QWORD *)a8 + 2) > (unsigned __int64)v18 )
  {
    v20 = v78;
    if ( v79 >= 0x10 )
      v20 = (void **)v78[0];
    if ( *(_BYTE *)v20 != 127 )
    {
      v21 = v78;
      if ( v79 >= 0x10 )
        v21 = (void **)v78[0];
      if ( *(char *)v21 > 0 )
      {
        v22 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v23 = v78;
        if ( v79 >= 0x10 )
          v23 = (void **)v78[0];
        v24 = *((_QWORD *)a8 + 2) - v66;
        while ( 1 )
        {
          v25 = *(_BYTE *)v23;
          if ( *(_BYTE *)v23 == 127 || v25 <= 0 || v25 >= v24 )
            break;
          v24 -= v25;
          std::string::insert(a8, v24, 1uLL, v22);
          if ( *((char *)v23 + 1) > 0 )
            v23 = (void **)((char *)v23 + 1);
        }
        v18 = v65;
        v10 = v69;
        v19 = v66;
      }
    }
  }
  else
  {
    std::string::insert(a8, 0LL, v18 - *((_QWORD *)a8 + 2) + 1LL, a9);
  }
  v77 = 15LL;
  v76 = 0LL;
  LOBYTE(v75[0]) = 0;
  v26 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v26 + 88))(v14, &v63);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 64LL))(v14, v73);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v26 + 80))(v14, &v63);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v73);
  }
  std::string::operator=(v75, v73);
  if ( v74 >= 0x10 )
    operator delete(v73[0]);
  v82 = 15LL;
  v81 = 0LL;
  LOBYTE(v80[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 48LL))(v14, v73);
    std::string::operator=(v80, v73);
    if ( v74 >= 0x10 )
      operator delete(v73[0]);
  }
  LOBYTE(v27) = 0;
  v28 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v30 = *((_BYTE *)&v63 + i);
    switch ( v30 )
    {
      case ' ':
        ++v28;
LABEL_48:
        v27 = (unsigned __int8)v27;
        if ( i != 3 )
          v27 = 1LL;
        continue;
      case '$':
        v28 += v81;
        continue;
      case '+':
        v28 += v76;
        continue;
    }
    if ( v30 != 118 )
    {
      if ( v30 != 120 )
        continue;
      goto LABEL_48;
    }
    v31 = v19 + 1;
    if ( *((_QWORD *)a8 + 2) > v19 )
      v31 = *((_QWORD *)a8 + 2);
    v28 += v31 + (v18 != 0);
  }
  v32 = *(_QWORD *)(v10 + 40);
  if ( v32 <= 0 || v32 <= v28 )
    v33 = 0LL;
  else
    v33 = v32 - v28;
  v34 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v64 = v34;
  if ( v34 != 64 && (v34 != 256 || !(_BYTE)v27) )
  {
    v35 = *a3;
    v68 = *a3;
    if ( v33 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v68, a6);
        --v33;
      }
      while ( v33 );
      v35 = v68;
    }
    *a3 = v35;
    v33 = 0LL;
  }
  v36 = 0LL;
  *(_QWORD *)&v68 = 0LL;
  while ( 2 )
  {
    v37 = *((_BYTE *)&v63 + v36);
    if ( v37 != 32 )
    {
      switch ( v37 )
      {
        case '$':
          v58 = (unsigned __int8 *)v80;
          if ( v82 >= 0x10 )
            v58 = (unsigned __int8 *)v80[0];
          v39 = *a3;
          *(_OWORD *)v73 = *a3;
          v59 = v81;
          if ( !v81 )
            goto LABEL_89;
          do
          {
            std::ostreambuf_iterator<char>::operator=((__int64)v73, *v58++);
            --v59;
          }
          while ( v59 );
          break;
        case '+':
          if ( !v76 )
            goto LABEL_75;
          v57 = (unsigned __int8 *)v75;
          if ( v77 >= 0x10 )
            v57 = (unsigned __int8 *)v75[0];
          *(_OWORD *)v73 = *a3;
          std::ostreambuf_iterator<char>::operator=((__int64)v73, *v57);
          v39 = *(_OWORD *)v73;
          goto LABEL_74;
        case 'v':
          v43 = *((_QWORD *)v11 + 2);
          if ( !v65 )
          {
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v44 = v11;
            else
              v44 = *(unsigned __int8 **)v11;
            v39 = *a3;
            *(_OWORD *)v73 = *a3;
            if ( v43 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v73, *v44++);
                --v43;
              }
              while ( v43 );
              break;
            }
LABEL_89:
            v34 = v64;
LABEL_74:
            *a3 = v39;
            goto LABEL_75;
          }
          v45 = v66;
          if ( v43 > v66 )
          {
            v50 = v43 - v66;
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v51 = v11;
            else
              v51 = *(unsigned __int8 **)v11;
            v52 = *a3;
            *(_OWORD *)v73 = *a3;
            if ( v50 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v73, *v51++);
                --v50;
              }
              while ( v50 );
              v52 = *(_OWORD *)v73;
              v11 = v67;
            }
            *a3 = v52;
            v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v27);
            std::ostreambuf_iterator<char>::operator=((__int64)a3, v53);
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v54 = v11;
            else
              v54 = *(unsigned __int8 **)v11;
            v55 = &v54[*((_QWORD *)v11 + 2) - v66];
            *(_OWORD *)v73 = *a3;
            v56 = v66;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)v73, *v55++);
              --v56;
            }
            while ( v56 );
          }
          else
          {
            std::ostreambuf_iterator<char>::operator=((__int64)a3, a9);
            v46 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<char>::operator=((__int64)a3, v46);
            v39 = *a3;
            *(_OWORD *)v73 = *a3;
            v47 = v45 - *((_QWORD *)v11 + 2);
            if ( v47 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v73, a9);
                --v47;
              }
              while ( v47 );
              v39 = *(_OWORD *)v73;
            }
            v48 = *((_QWORD *)v11 + 2);
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v49 = v11;
            else
              v49 = *(unsigned __int8 **)v11;
            *(_OWORD *)v73 = v39;
            if ( !v48 )
              goto LABEL_89;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)v73, *v49++);
              --v48;
            }
            while ( v48 );
          }
          break;
        case 'x':
          v38 = a6;
          goto LABEL_69;
        default:
          goto LABEL_75;
      }
      v39 = *(_OWORD *)v73;
      v11 = v67;
      goto LABEL_89;
    }
    *(_OWORD *)v73 = *a3;
    v38 = a6;
    std::ostreambuf_iterator<char>::operator=((__int64)v73, a6);
    *a3 = *(_OWORD *)v73;
LABEL_69:
    if ( v34 == 256 )
    {
      v39 = *a3;
      *(_OWORD *)v73 = *a3;
      if ( v33 )
      {
        do
        {
          std::ostreambuf_iterator<char>::operator=((__int64)v73, v38);
          --v33;
        }
        while ( v33 );
        v39 = *(_OWORD *)v73;
      }
      v33 = 0LL;
      goto LABEL_74;
    }
LABEL_75:
    v36 = v68 + 1;
    *(_QWORD *)&v68 = v36;
    if ( v36 < 4 )
      continue;
    break;
  }
  if ( v76 > 1 )
  {
    v40 = v75;
    if ( v77 >= 0x10 )
      v40 = (void **)v75[0];
    v41 = (unsigned __int8 *)v40 + 1;
    *(_OWORD *)v73 = *a3;
    v42 = v76 - 1;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)v73, *v41++);
      --v42;
    }
    while ( v42 );
    *a3 = *(_OWORD *)v73;
  }
  *(_QWORD *)(v69 + 40) = 0LL;
  v60 = *a3;
  *(_OWORD *)v73 = *a3;
  if ( v33 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)v73, a6);
      --v33;
    }
    while ( v33 );
    v60 = *(_OWORD *)v73;
  }
  v61 = v70;
  *v70 = v60;
  if ( v82 >= 0x10 )
    operator delete(v80[0]);
  v82 = 15LL;
  v81 = 0LL;
  LOBYTE(v80[0]) = 0;
  if ( v77 >= 0x10 )
    operator delete(v75[0]);
  v77 = 15LL;
  v76 = 0LL;
  LOBYTE(v75[0]) = 0;
  if ( v79 >= 0x10 )
    operator delete(v78[0]);
  v79 = 15LL;
  v78[2] = 0LL;
  LOBYTE(v78[0]) = 0;
  if ( *((_QWORD *)v11 + 3) >= 0x10uLL )
    operator delete(*(void **)v11);
  *((_QWORD *)v11 + 3) = 15LL;
  *((_QWORD *)v11 + 2) = 0LL;
  *v11 = 0;
  return v61;
}
