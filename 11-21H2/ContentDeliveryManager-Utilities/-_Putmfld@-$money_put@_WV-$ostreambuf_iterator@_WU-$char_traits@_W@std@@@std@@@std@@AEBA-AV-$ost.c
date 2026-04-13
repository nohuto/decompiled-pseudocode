/*
 * XREFs of ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180016B00
 * Callers:
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180019900 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x180019B70 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_180019B70.c)
 * Callees:
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x18000F318 (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x18000F464 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x18000FC40 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x18001B740 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
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
        __int64 *a8,
        unsigned __int16 a9)
{
  __int128 *v9; // r12
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r13
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  unsigned int v17; // r14d
  unsigned __int64 v18; // rbx
  void **v19; // rax
  void **v20; // rax
  unsigned __int16 v21; // r14
  void **v22; // rbx
  unsigned __int64 v23; // rsi
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 i; // rdx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // r14
  int v33; // ebx
  __int128 v34; // xmm0
  unsigned __int64 v35; // rax
  char v36; // al
  unsigned __int16 v37; // si
  __int128 v38; // xmm0
  void **v39; // rbx
  unsigned __int16 *v40; // rbx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rsi
  unsigned __int16 *v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int16 v45; // ax
  __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  unsigned __int16 *v48; // rbx
  unsigned __int64 v49; // rsi
  unsigned __int16 *v50; // rbx
  __int128 v51; // xmm0
  unsigned __int16 v52; // ax
  __int64 v53; // rcx
  unsigned __int16 *v54; // rbx
  unsigned __int64 v55; // rsi
  void **v56; // rax
  void **v57; // rbx
  __int64 v58; // rsi
  __int128 v59; // xmm0
  _OWORD *v60; // rbx
  int v62; // [rsp+2Ch] [rbp-D5h] BYREF
  int v63; // [rsp+30h] [rbp-D1h]
  unsigned int v64; // [rsp+34h] [rbp-CDh]
  __int128 *v65; // [rsp+38h] [rbp-C9h]
  unsigned __int64 v66; // [rsp+40h] [rbp-C1h]
  __int128 v67; // [rsp+48h] [rbp-B9h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A9h]
  _OWORD *v69; // [rsp+60h] [rbp-A1h]
  __int64 v70; // [rsp+68h] [rbp-99h]
  __int64 v71; // [rsp+70h] [rbp-91h]
  void *v72[2]; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp-71h]
  void *v74[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-51h]
  void *v77[2]; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-39h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-31h]
  void *v80[3]; // [rsp+D8h] [rbp-29h] BYREF
  unsigned __int64 v81; // [rsp+F0h] [rbp-11h]

  v70 = -2LL;
  v9 = a3;
  v65 = a3;
  v69 = a2;
  v10 = a5;
  v68 = a5;
  v71 = (__int64)a8;
  v11 = *(__int64 **)(a5 + 64);
  if ( a4 )
  {
    v12 = *v11;
    *(_QWORD *)&v67 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::moneypunct<wchar_t,1>>((__int64 *)&v67);
    if ( v12 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  else
  {
    v15 = *v11;
    *(_QWORD *)&v67 = v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v13 = std::use_facet<std::moneypunct<wchar_t,0>>((__int64 *)&v67);
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 40LL))(v13, v80);
  v17 = abs32((*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13));
  v64 = v17;
  v18 = v17;
  v66 = v17;
  if ( a8[2] > (unsigned __int64)v17 )
  {
    v19 = v80;
    if ( v81 >= 0x10 )
      v19 = (void **)v80[0];
    if ( *(_BYTE *)v19 != 127 )
    {
      v20 = v80;
      if ( v81 >= 0x10 )
        v20 = (void **)v80[0];
      if ( *(char *)v20 > 0 )
      {
        v21 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 32LL))(v13);
        v22 = v80;
        if ( v81 >= 0x10 )
          v22 = (void **)v80[0];
        v23 = a8[2] - v66;
        v24 = *(_BYTE *)v22;
        if ( *(_BYTE *)v22 != 127 )
        {
          do
          {
            if ( v24 <= 0 || v24 >= v23 )
              break;
            v23 -= v24;
            std::wstring::insert(a8, v23, 1LL, v21);
            if ( *((char *)v22 + 1) > 0 )
              v22 = (void **)((char *)v22 + 1);
            v24 = *(_BYTE *)v22;
          }
          while ( *(_BYTE *)v22 != 127 );
          v9 = v65;
        }
        v17 = v64;
        v10 = v68;
        v18 = v66;
      }
    }
  }
  else
  {
    std::wstring::insert(a8, 0LL, v17 - a8[2] + 1, a9);
  }
  v76 = 7LL;
  v75 = 0LL;
  LOWORD(v74[0]) = 0;
  v25 = *(_QWORD *)v13;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v25 + 88))(v13, &v62);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v72);
    if ( v76 >= 8 )
      operator delete(v74[0]);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v25 + 80))(v13, &v62);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v72);
    if ( v76 >= 8 )
      operator delete(v74[0]);
  }
  v76 = 7LL;
  v75 = 0LL;
  LOWORD(v74[0]) = 0;
  std::wstring::_Assign_rv(v74, v72);
  if ( v73 >= 8 )
    operator delete(v72[0]);
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v72);
    if ( v79 >= 8 )
      operator delete(v77[0]);
    v79 = 7LL;
    v78 = 0LL;
    LOWORD(v77[0]) = 0;
    std::wstring::_Assign_rv(v77, v72);
    if ( v73 >= 8 )
      operator delete(v72[0]);
  }
  LOBYTE(v26) = 0;
  v27 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v29 = *((_BYTE *)&v62 + i);
    switch ( v29 )
    {
      case ' ':
        ++v27;
LABEL_53:
        v26 = (unsigned __int8)v26;
        if ( i != 3 )
          v26 = 1LL;
        continue;
      case '$':
        v27 += v78;
        continue;
      case '+':
        v27 += v75;
        continue;
    }
    if ( v29 != 118 )
    {
      if ( v29 != 120 )
        continue;
      goto LABEL_53;
    }
    v30 = v18 + 1;
    if ( a8[2] > v18 )
      v30 = a8[2];
    v27 += v30 + (v17 != 0);
  }
  v31 = *(_QWORD *)(v10 + 40);
  if ( v31 <= 0 || v31 <= v27 )
    v32 = 0LL;
  else
    v32 = v31 - v27;
  v33 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v63 = v33;
  if ( v33 != 64 && (v33 != 256 || !(_BYTE)v26) )
  {
    v34 = *v9;
    v67 = *v9;
    if ( v32 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v67, a6);
        --v32;
      }
      while ( v32 );
      v34 = v67;
    }
    *v9 = v34;
    v32 = 0LL;
  }
  v35 = 0LL;
  *(_QWORD *)&v67 = 0LL;
  while ( 2 )
  {
    v36 = *((_BYTE *)&v62 + v35);
    if ( v36 != 32 )
    {
      switch ( v36 )
      {
        case '$':
          v57 = v77;
          if ( v79 >= 8 )
            v57 = (void **)v77[0];
          v38 = *v9;
          *(_OWORD *)v72 = *v9;
          v58 = v78;
          if ( !v78 )
            goto LABEL_94;
          do
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *(unsigned __int16 *)v57);
            v57 = (void **)((char *)v57 + 2);
            --v58;
          }
          while ( v58 );
          break;
        case '+':
          if ( !v75 )
            goto LABEL_80;
          v56 = v74;
          if ( v76 >= 8 )
            v56 = (void **)v74[0];
          *(_OWORD *)v72 = *v9;
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *(unsigned __int16 *)v56);
          v38 = *(_OWORD *)v72;
          goto LABEL_79;
        case 'v':
          v42 = a8[2];
          if ( !v64 )
          {
            if ( (unsigned __int64)a8[3] < 8 )
              v43 = (unsigned __int16 *)a8;
            else
              v43 = (unsigned __int16 *)*a8;
            v38 = *v9;
            *(_OWORD *)v72 = *v9;
            if ( v42 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v43++);
                --v42;
              }
              while ( v42 );
              break;
            }
LABEL_94:
            v33 = v63;
LABEL_79:
            *v9 = v38;
            goto LABEL_80;
          }
          v44 = v66;
          if ( v42 > v66 )
          {
            v49 = v42 - v66;
            if ( (unsigned __int64)a8[3] < 8 )
              v50 = (unsigned __int16 *)a8;
            else
              v50 = (unsigned __int16 *)*a8;
            v51 = *v9;
            *(_OWORD *)v72 = *v9;
            if ( v49 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v50++);
                --v49;
              }
              while ( v49 );
              v51 = *(_OWORD *)v72;
              v9 = v65;
            }
            *v9 = v51;
            v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v13 + 24LL))(
                    v13,
                    i,
                    v26);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v52);
            if ( (unsigned __int64)a8[3] < 8 )
              v53 = (__int64)a8;
            else
              v53 = *a8;
            v54 = (unsigned __int16 *)(v53 + 2 * (a8[2] - v66));
            *(_OWORD *)v72 = *v9;
            v55 = v66;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v54++);
              --v55;
            }
            while ( v55 );
          }
          else
          {
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, a9);
            v45 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 24LL))(v13);
            std::ostreambuf_iterator<wchar_t>::operator=((__int64)v9, v45);
            v46 = a8[2];
            v38 = *v9;
            *(_OWORD *)v72 = *v9;
            v47 = v44 - v46;
            if ( v47 )
            {
              do
              {
                std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a9);
                --v47;
              }
              while ( v47 );
              v46 = a8[2];
              v38 = *(_OWORD *)v72;
              v9 = v65;
            }
            if ( (unsigned __int64)a8[3] < 8 )
              v48 = (unsigned __int16 *)a8;
            else
              v48 = (unsigned __int16 *)*a8;
            *(_OWORD *)v72 = v38;
            if ( !v46 )
              goto LABEL_94;
            do
            {
              std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v48++);
              --v46;
            }
            while ( v46 );
          }
          break;
        case 'x':
          v37 = a6;
          goto LABEL_74;
        default:
          goto LABEL_80;
      }
      v38 = *(_OWORD *)v72;
      v9 = v65;
      goto LABEL_94;
    }
    *(_OWORD *)v72 = *v9;
    v37 = a6;
    std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a6);
    *v9 = *(_OWORD *)v72;
LABEL_74:
    if ( v33 == 256 )
    {
      v38 = *v9;
      *(_OWORD *)v72 = *v9;
      if ( v32 )
      {
        do
        {
          std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, v37);
          --v32;
        }
        while ( v32 );
        v38 = *(_OWORD *)v72;
      }
      v32 = 0LL;
      goto LABEL_79;
    }
LABEL_80:
    v35 = v67 + 1;
    *(_QWORD *)&v67 = v35;
    if ( v35 < 4 )
      continue;
    break;
  }
  if ( v75 > 1 )
  {
    v39 = v74;
    if ( v76 >= 8 )
      v39 = (void **)v74[0];
    v40 = (unsigned __int16 *)v39 + 1;
    *(_OWORD *)v72 = *v9;
    v41 = v75 - 1;
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, *v40++);
      --v41;
    }
    while ( v41 );
    *v9 = *(_OWORD *)v72;
  }
  *(_QWORD *)(v68 + 40) = 0LL;
  v59 = *v9;
  *(_OWORD *)v72 = *v9;
  if ( v32 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)v72, a6);
      --v32;
    }
    while ( v32 );
    v59 = *(_OWORD *)v72;
  }
  v60 = v69;
  *v69 = v59;
  if ( v79 >= 8 )
    operator delete(v77[0]);
  v79 = 7LL;
  v78 = 0LL;
  LOWORD(v77[0]) = 0;
  if ( v76 >= 8 )
    operator delete(v74[0]);
  v76 = 7LL;
  v75 = 0LL;
  LOWORD(v74[0]) = 0;
  if ( v81 >= 0x10 )
    operator delete(v80[0]);
  v81 = 15LL;
  v80[2] = 0LL;
  LOBYTE(v80[0]) = 0;
  if ( (unsigned __int64)a8[3] >= 8 )
    operator delete((void *)*a8);
  a8[3] = 7LL;
  a8[2] = 0LL;
  *(_WORD *)a8 = 0;
  return v60;
}
