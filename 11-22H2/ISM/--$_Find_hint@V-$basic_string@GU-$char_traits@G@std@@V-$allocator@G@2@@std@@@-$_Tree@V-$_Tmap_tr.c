/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800470B0
 * Callers:
 *     ??$insert@PEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAXPEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@0@Z @ 0x180046E38 (--$insert@PEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$varian.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800BCFF0 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CE978 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Find_hint<std::wstring>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r12
  __int64 *v5; // rbp
  __int64 v7; // rdi
  int v8; // r15d
  _QWORD *v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // r13
  char *v12; // r9
  char *v13; // rax
  unsigned __int64 v14; // r11
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  signed __int64 v17; // r9
  bool v18; // cc
  unsigned __int16 v19; // cx
  int v20; // eax
  __int64 *v21; // r10
  unsigned __int64 v22; // rdi
  char *v23; // r9
  char *v24; // rax
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r8
  unsigned __int16 v27; // cx
  signed __int64 v28; // r9
  bool v29; // cc
  unsigned __int16 v30; // cx
  int v31; // eax
  _QWORD *v32; // rax
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  unsigned __int16 v36; // dx
  signed __int64 v37; // r12
  bool v38; // cc
  unsigned __int16 v39; // dx
  __int64 result; // rax
  _QWORD *v41; // rdi
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rbp
  _QWORD *v45; // r8
  __int64 v46; // r14
  unsigned __int64 v47; // rsi
  __int64 v48; // r15
  _QWORD *v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // r8
  __int64 v52; // rdi
  _QWORD *v53; // rcx
  char v54; // cl
  _QWORD *v55; // r8
  __int64 v56; // rax
  _QWORD *v57; // rdi
  _QWORD *v58; // r8
  _QWORD *v59; // rcx
  char v60; // cl
  __int128 v61; // [rsp+20h] [rbp-58h]
  __int64 *v62; // [rsp+80h] [rbp+8h]
  __int64 v64; // [rsp+90h] [rbp+18h] BYREF

  v4 = a4;
  v5 = *a1;
  v62 = *a1;
  v7 = a2;
  v8 = 1;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v41 = (_QWORD *)(a3 + 32);
    if ( a3 == *v5 )
    {
      if ( *(_QWORD *)(a3 + 56) >= 8uLL )
        v41 = (_QWORD *)*v41;
      v9 = a4 + 3;
      v11 = a4 + 2;
      v42 = a4;
      if ( a4[3] >= 8uLL )
        v42 = (_QWORD *)*a4;
      if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(v42, *v11, v41, *(_QWORD *)(a3 + 48)) < 0 )
      {
        v43 = a2;
        *(_DWORD *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 0;
LABEL_98:
        *(_QWORD *)v43 = a3;
        return v43;
      }
LABEL_91:
      v7 = a2;
      goto LABEL_18;
    }
    v44 = *(_QWORD *)(a3 + 56);
    v45 = (_QWORD *)(a3 + 32);
    v46 = v41[2];
    if ( v44 >= 8 )
      v45 = (_QWORD *)*v41;
    v47 = a4[3];
    v11 = a4 + 2;
    v48 = a4[2];
    v49 = a4;
    if ( v47 >= 8 )
      v49 = (_QWORD *)*a4;
    if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(v49, v48, v45, v41[2]) < 0 )
    {
      v64 = a3;
      v50 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>,std::_Iterator_base0>::operator--(&v64);
      v51 = v4;
      v52 = *(_QWORD *)v50;
      v53 = (_QWORD *)(*(_QWORD *)v50 + 32LL);
      if ( v47 >= 8 )
        v51 = (_QWORD *)*v4;
      if ( *(_QWORD *)(*(_QWORD *)v50 + 56LL) >= 8uLL )
        v53 = (_QWORD *)*v53;
      if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(
                  v53,
                  *(_QWORD *)(*(_QWORD *)v50 + 48LL),
                  v51,
                  v48) < 0 )
      {
        v43 = a2;
        v54 = *(_BYTE *)(*(_QWORD *)(v52 + 16) + 25LL);
        *(_BYTE *)(a2 + 16) = 0;
        if ( !v54 )
        {
          *(_DWORD *)(a2 + 8) = 1;
          goto LABEL_98;
        }
        *(_QWORD *)a2 = v52;
        *(_DWORD *)(a2 + 8) = 0;
        return v43;
      }
LABEL_90:
      v5 = v62;
      v9 = v4 + 3;
      v8 = 1;
      goto LABEL_91;
    }
    v55 = v4;
    if ( v47 >= 8 )
      v55 = (_QWORD *)*v4;
    if ( v44 >= 8 )
      v41 = (_QWORD *)*v41;
    if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(v41, v46, v55, v48) >= 0 )
    {
      v43 = a2;
      *(_BYTE *)(a2 + 16) = 1;
    }
    else
    {
      v64 = a3;
      v56 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v64);
      v57 = *(_QWORD **)v56;
      if ( !*(_BYTE *)(*(_QWORD *)v56 + 25LL) )
      {
        v58 = v57 + 4;
        if ( v57[7] >= 8uLL )
          v58 = (_QWORD *)*v58;
        v59 = v4;
        if ( v47 >= 8 )
          v59 = (_QWORD *)*v4;
        if ( (int)std::_Traits_compare<std::char_traits<unsigned short>>(v59, v48, v58, v57[6]) >= 0 )
          goto LABEL_90;
      }
      v43 = a2;
      v60 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL);
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v60 )
      {
        *(_QWORD *)a2 = v57;
        *(_DWORD *)(a2 + 8) = 1;
        return v43;
      }
    }
    *(_DWORD *)(v43 + 8) = 0;
    goto LABEL_98;
  }
  if ( *(_BYTE *)(v5[1] + 25) )
    goto LABEL_54;
  v9 = a4 + 3;
  v10 = a4[2];
  v11 = a4 + 2;
  v12 = (char *)(v5[2] + 32);
  v13 = (char *)v4;
  if ( v4[3] >= 8uLL )
    v13 = (char *)*v4;
  v14 = *(_QWORD *)(v5[2] + 48);
  if ( *(_QWORD *)(v5[2] + 56) >= 8uLL )
    v12 = *(char **)v12;
  v15 = v4[2];
  if ( v10 >= v14 )
    v15 = *(_QWORD *)(v5[2] + 48);
  if ( v15 )
  {
    v16 = *(_WORD *)v12;
    if ( *(_WORD *)v12 < *(_WORD *)v13 )
    {
LABEL_15:
      v20 = -1;
    }
    else
    {
      v17 = v12 - v13;
      v18 = v16 <= *(_WORD *)v13;
      while ( v18 )
      {
        if ( v15 == 1 )
          goto LABEL_57;
        v19 = *(_WORD *)&v13[v17 + 2];
        v13 += 2;
        --v15;
        v18 = v19 <= *(_WORD *)v13;
        if ( v19 < *(_WORD *)v13 )
          goto LABEL_15;
      }
      v20 = 1;
    }
    if ( v20 >= 0 )
      goto LABEL_18;
LABEL_54:
    *(_QWORD *)a2 = v5[2];
    result = a2;
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 16) = 0;
    return result;
  }
LABEL_57:
  if ( v14 < v10 )
    goto LABEL_54;
LABEL_18:
  v21 = (__int64 *)v5[1];
  *(_QWORD *)&v61 = v21;
  DWORD2(v61) = 0;
  if ( *((_BYTE *)v21 + 25) )
    goto LABEL_37;
  v22 = *v11;
  do
  {
    *(_QWORD *)&v61 = v21;
    v23 = (char *)(v21 + 4);
    v24 = (char *)v4;
    if ( *v9 >= 8uLL )
      v24 = (char *)*v4;
    v25 = v21[6];
    if ( (unsigned __int64)v21[7] >= 8 )
      v23 = *(char **)v23;
    v26 = *v11;
    if ( v22 >= v25 )
      v26 = v21[6];
    if ( v26 )
    {
      v27 = *(_WORD *)v23;
      if ( *(_WORD *)v23 < *(_WORD *)v24 )
      {
LABEL_32:
        v31 = -1;
      }
      else
      {
        v28 = v23 - v24;
        v29 = v27 <= *(_WORD *)v24;
        while ( v29 )
        {
          if ( v26 == 1 )
            goto LABEL_55;
          v30 = *(_WORD *)&v24[v28 + 2];
          v24 += 2;
          --v26;
          v29 = v30 <= *(_WORD *)v24;
          if ( v30 < *(_WORD *)v24 )
            goto LABEL_32;
        }
        v31 = 1;
      }
      if ( v31 < 0 )
      {
LABEL_34:
        v21 = (__int64 *)v21[2];
        DWORD2(v61) = 0;
        continue;
      }
    }
    else
    {
LABEL_55:
      if ( v25 < v22 )
        goto LABEL_34;
    }
    v5 = v21;
    DWORD2(v61) = 1;
    v21 = (__int64 *)*v21;
  }
  while ( !*((_BYTE *)v21 + 25) );
  v7 = a2;
LABEL_37:
  if ( *((_BYTE *)v5 + 25) )
  {
LABEL_52:
    *(_BYTE *)(v7 + 16) = 0;
    result = v7;
    *(_OWORD *)v7 = v61;
  }
  else
  {
    v32 = v5 + 4;
    v33 = v5[6];
    if ( (unsigned __int64)v5[7] >= 8 )
      v32 = (_QWORD *)*v32;
    v34 = *v11;
    if ( *v9 >= 8uLL )
      v4 = (_QWORD *)*v4;
    v35 = *v11;
    if ( v33 < v34 )
      v35 = v5[6];
    if ( v35 )
    {
      v36 = *(_WORD *)v4;
      if ( *(_WORD *)v4 < *(_WORD *)v32 )
      {
LABEL_50:
        v8 = -1;
      }
      else
      {
        v37 = (char *)v4 - (char *)v32;
        v38 = v36 <= *(_WORD *)v32;
        while ( v38 )
        {
          if ( v35 == 1 )
            goto LABEL_92;
          v39 = *(_WORD *)((char *)v32 + v37 + 2);
          v32 = (_QWORD *)((char *)v32 + 2);
          --v35;
          v38 = v39 <= *(_WORD *)v32;
          if ( v39 < *(_WORD *)v32 )
            goto LABEL_50;
        }
      }
      if ( v8 < 0 )
        goto LABEL_52;
    }
    else
    {
LABEL_92:
      if ( v34 < v33 )
        goto LABEL_52;
    }
    *(_QWORD *)v7 = v5;
    result = v7;
    *(_DWORD *)(v7 + 8) = 2;
    *(_BYTE *)(v7 + 16) = 1;
  }
  return result;
}
