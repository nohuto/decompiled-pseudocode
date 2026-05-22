/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801CCE90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Insert_or_assign@AEBKAEAG@?$unordered_map@KGU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEBKAEAG@Z @ 0x1801CCA00 (--$_Insert_or_assign@AEBKAEAG@-$unordered_map@KGU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$p.c)
 *     ?ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z @ 0x1801CCE10 (-ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  const char *v4; // r9
  unsigned int v5; // eax
  char v6; // dl
  int v7; // r10d
  unsigned int v8; // r8d
  __int16 v9; // si
  unsigned int v10; // ecx
  _QWORD *v11; // rbx
  __int16 v12; // r14
  __int64 v13; // r12
  int v14; // r15d
  __int64 v15; // rcx
  int v16; // eax
  __int64 appended; // rax
  __int64 *v18; // rbx
  __int16 v19; // ax
  __int16 v20; // cx
  int v21; // r15d
  int v22; // ecx
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // dx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  char v33; // dl
  unsigned int v34; // r12d
  __int64 v35; // r14
  __int16 v36; // dx
  __int128 v37; // xmm1
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int64 *v40; // rbx
  __int64 *v41; // r15
  __int64 v42; // rax
  _QWORD **v43; // r11
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // r9d
  __int16 v48; // dx
  __int64 v50; // r9
  __int64 v51; // rax
  __int16 v52; // cx
  __int64 v53; // rcx
  unsigned __int8 v54; // r10
  unsigned int v55; // r9d
  unsigned int j; // r8d
  __int64 v57; // rdx
  unsigned __int16 v58; // dx
  int v59; // eax
  char v60; // cl
  unsigned __int8 v61; // r10
  unsigned int i; // r8d
  __int64 v63; // rdx
  __int16 v64; // ax
  unsigned __int16 v65; // dx
  int v66; // eax
  _OWORD *v67; // rcx
  __int16 *v68; // rax
  __int64 v69; // r8
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int64 v80; // rax
  int v81; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v82[4]; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int v83; // [rsp+28h] [rbp-D8h]
  int v84; // [rsp+2Ch] [rbp-D4h]
  int v85; // [rsp+30h] [rbp-D0h] BYREF
  int v86; // [rsp+34h] [rbp-CCh]
  unsigned int v87; // [rsp+38h] [rbp-C8h]
  struct TouchContact *v88; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v89; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v90; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v91; // [rsp+62h] [rbp-9Eh]
  int v92; // [rsp+64h] [rbp-9Ch]
  int v93; // [rsp+70h] [rbp-90h]
  char v94; // [rsp+75h] [rbp-8Bh]
  char v95; // [rsp+76h] [rbp-8Ah]
  unsigned __int8 v96; // [rsp+77h] [rbp-89h]
  _BYTE v97[568]; // [rsp+78h] [rbp-88h]
  __int128 v98; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v99; // [rsp+2C0h] [rbp+1C0h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
  {
    memset_0(&v90, 0, 0x248uLL);
    v5 = *((_DWORD *)a2 + 79);
    v6 = 0;
    LOWORD(v81) = 0;
    LOBYTE(v7) = 0;
    v84 = v7;
    v8 = 0;
    LOBYTE(v86) = 0;
    v83 = 0;
    if ( v5 > 0xA )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        128LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
        v4);
    v9 = 1;
    v10 = 0;
    v87 = 0;
    if ( v5 )
    {
      v11 = (_QWORD *)((char *)this + 40);
      do
      {
        v12 = 0;
        v13 = 18LL * v10;
        v14 = *((_DWORD *)a2 + 36 * v10 + 83);
        if ( (*(_BYTE *)a2 & 2) != 0 && (v14 & 0x10) == 0 )
        {
          v14 &= ~4u;
          *((_DWORD *)a2 + 36 * v10 + 83) = v14;
        }
        if ( (v14 & 2) != 0 && !*((_BYTE *)this + 32) )
        {
          v12 = 8;
          LOBYTE(v81) = v6 + 1;
        }
        v15 = (unsigned __int8)(v7 + 1);
        v16 = *((_DWORD *)a2 + 2 * v13 + 81);
        if ( (v14 & 4) == 0 )
          v15 = (unsigned __int8)v7;
        v85 = v14 & 4;
        v84 = v15;
        *(_DWORD *)v82 = v16;
        appended = std::_Fnv1a_append_bytes(v15, v82, 4uLL);
        v18 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                           v11,
                           &v98,
                           v82,
                           appended)[1];
        if ( !v18 )
          v18 = (__int64 *)*((_QWORD *)this + 6);
        if ( v18 == *((__int64 **)this + 6) )
        {
          if ( v85 )
          {
            v12 |= 1u;
          }
          else if ( *((_BYTE *)this + 32) )
          {
            goto LABEL_46;
          }
          *(_WORD *)v82 = *((_WORD *)this + 54);
          *((_WORD *)this + 54) = *(_WORD *)v82 + 1;
          v85 = *((_DWORD *)a2 + 2 * v13 + 81);
          std::unordered_map<unsigned long,unsigned short>::_Insert_or_assign<unsigned long const &,unsigned short &>(
            (float *)this + 10,
            (__int64)&v89,
            (unsigned __int8 *)&v85,
            v82);
          v18 = v89;
        }
        else
        {
          v19 = *((_WORD *)v18 + 10);
          v88 = 0LL;
          *(_WORD *)v82 = v19;
          if ( !TouchInfoAdapter::ExistingTouchContactWithId(this, v19, &v88) )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xBF,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
              (const char *)0x8000FFFFLL,
              v81);
          if ( v85 )
          {
            if ( (v88->Flags & 1) != 0 || (v88->Flags & 2) != 0 )
              v20 = 2;
            else
              v20 = 1;
            v12 |= v20;
          }
          else if ( (v88->Flags & 1) != 0 || (v88->Flags & 2) != 0 )
          {
            v12 |= 4u;
          }
          LOBYTE(v22) = v86;
          v21 = v14 & 0x8000;
          v88->Reserved = 1;
          v22 = (unsigned __int8)v22;
          if ( v21 )
            v22 = 1;
          v86 = v22;
          v23 = v12 | 0x2000;
          if ( (v21 & 0x8000) == 0 )
            v23 = v12;
          v12 = v23;
        }
        v24 = *((_WORD *)a2 + 4 * v13 + 184);
        v25 = *(_WORD *)v82;
        v26 = 56LL * v83;
        v8 = ++v83;
        *(_WORD *)&v97[v26 + 4] = v24;
        *(_WORD *)&v97[v26 + 6] = *((_WORD *)a2 + 4 * v13 + 186);
        *(_WORD *)&v97[v26 + 8] = *((_WORD *)a2 + 4 * v13 + 176);
        *(_WORD *)&v97[v26 + 10] = *((_WORD *)a2 + 4 * v13 + 178);
        v27 = *((_DWORD *)a2 + 2 * v13 + 83);
        *(_WORD *)&v97[v26] = v25;
        *(_WORD *)&v97[v26 + 2] = v12;
        if ( (v27 & 2) != 0 && (!*((_BYTE *)this + 32) || (v27 & 4) != 0) )
          goto LABEL_47;
        v28 = std::_Fnv1a_append_bytes(v26, (const unsigned __int8 *const)v18 + 16, 4uLL);
        v29 = *((_QWORD *)this + 8);
        v30 = 2 * (*((_QWORD *)this + 11) & v28);
        if ( *(__int64 **)(v29 + 16 * (*((_QWORD *)this + 11) & v28) + 8) == v18 )
        {
          if ( *(__int64 **)(v29 + 16 * (*((_QWORD *)this + 11) & v28)) == v18 )
          {
            v31 = *((_QWORD *)this + 6);
            *(_QWORD *)(v29 + 8 * v30) = v31;
          }
          else
          {
            v31 = v18[1];
          }
          *(_QWORD *)(v29 + 8 * v30 + 8) = v31;
        }
        else if ( *(__int64 **)(v29 + 16 * (*((_QWORD *)this + 11) & v28)) == v18 )
        {
          *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & v28)) = *v18;
        }
        v32 = *v18;
        --*((_QWORD *)this + 7);
        *(_QWORD *)v18[1] = v32;
        *(_QWORD *)(v32 + 8) = v18[1];
        std::_Deallocate<16,0>(v18, 0x18uLL);
LABEL_46:
        v8 = v83;
LABEL_47:
        v11 = (_QWORD *)((char *)this + 40);
        LOBYTE(v7) = v84;
        v10 = v87 + 1;
        v6 = v81;
        v87 = v10;
      }
      while ( v10 < *((_DWORD *)a2 + 79) );
    }
    v33 = *((_BYTE *)this + 696);
    if ( v33 )
    {
      v34 = 0;
      if ( *((_BYTE *)this + 135) )
      {
        do
        {
          v35 = 56LL * v34;
          v36 = *(_WORD *)((char *)this + v35 + 138);
          if ( (v36 & 0xB) != 0 && *(_WORD *)((char *)this + v35 + 154) != 1 )
          {
            v37 = *(_OWORD *)((char *)this + v35 + 152);
            v38 = 56LL * v8;
            *(_OWORD *)&v97[v38] = *(_OWORD *)((char *)this + v35 + 136);
            v39 = *(_OWORD *)((char *)this + v35 + 168);
            v83 = v8 + 1;
            *(_OWORD *)&v97[v38 + 16] = v37;
            *(_QWORD *)&v37 = *(_QWORD *)((char *)this + v35 + 184);
            *(_OWORD *)&v97[v38 + 32] = v39;
            *(_QWORD *)&v97[v38 + 48] = v37;
            *(_WORD *)&v97[v38 + 2] = (v36 & 3) != 0 ? 4 : 0;
            v40 = (__int64 *)*((_QWORD *)this + 6);
LABEL_53:
            v40 = (__int64 *)*v40;
            while ( 1 )
            {
              v41 = (__int64 *)*((_QWORD *)this + 6);
              if ( v40 == v41 )
                break;
              if ( *((_WORD *)v40 + 10) != *(_WORD *)((char *)this + v35 + 136) )
                goto LABEL_53;
              v42 = std::_Fnv1a_append_bytes(v38, (const unsigned __int8 *const)v40 + 16, 4uLL);
              v44 = *((_QWORD *)this + 8);
              v45 = 2 * (*((_QWORD *)this + 11) & v42);
              if ( *(__int64 **)(v44 + 16 * (*((_QWORD *)this + 11) & v42) + 8) == v40 )
              {
                if ( *(__int64 **)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) == v40 )
                  *(_QWORD *)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) = v41;
                else
                  v41 = (__int64 *)v40[1];
                *(_QWORD *)(v44 + 8 * v45 + 8) = v41;
              }
              else if ( *(__int64 **)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) == v40 )
              {
                *(_QWORD *)(v44 + 16 * (*((_QWORD *)this + 11) & v42)) = *v40;
              }
              v40 = (__int64 *)*v40;
              --*((_QWORD *)this + 7);
              *v43[1] = v40;
              v40[1] = (__int64)v43[1];
              std::_Deallocate<16,0>(v43, 0x18uLL);
            }
            v8 = v83;
          }
          ++v34;
        }
        while ( v34 < *((unsigned __int8 *)this + 135) );
        v33 = *((_BYTE *)this + 696);
        LOBYTE(v7) = v84;
      }
    }
    v46 = 0LL;
    v47 = *((_DWORD *)this + 26);
    v92 = *((_DWORD *)a2 + 2);
    v93 = v47;
    v91 = 0;
    v94 = v81;
    v95 = v7;
    v96 = v83;
    v90 = 56 * v83 + 24;
    if ( !v33 )
    {
      *((_BYTE *)this + 696) = 1;
      if ( (_BYTE)v7 )
      {
        LOWORD(v46) = 1;
        v91 = 1;
      }
      else if ( (_BYTE)v81 )
      {
        LOWORD(v46) = 257;
        v91 = 257;
        v9 = 257;
      }
      else
      {
        if ( !*((_BYTE *)this + 32) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14F,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
            (const char *)0x8000FFFFLL);
          return 2147549183LL;
        }
        BYTE1(v81) = 1;
        v9 = 0;
        *((_BYTE *)this + 696) = 0;
      }
      v48 = v9;
      goto LABEL_101;
    }
    if ( *((_BYTE *)this + 32) || (v48 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
    {
      v48 = 0;
      if ( (_BYTE)v7 )
        goto LABEL_101;
      v91 = 4;
      if ( (_BYTE)v81 )
      {
        (*(void (__fastcall **)(_QWORD, __int16 *, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
          *((_QWORD *)this + 3),
          &v90,
          0LL);
        v61 = v96;
        v55 = 0;
        for ( i = 0; i < v61; ++i )
        {
          v63 = 56LL * v55;
          v64 = *(_WORD *)&v97[56 * i + 2];
          if ( (v64 & 8) != 0 )
          {
            *(_WORD *)&v97[56 * v55++ + 2] = v64 & 0xFFFB;
            *(_WORD *)&v97[v63] = *(_WORD *)&v97[56 * i];
            *(_WORD *)&v97[v63 + 4] = *(_WORD *)&v97[56 * i + 4];
            *(_WORD *)&v97[v63 + 6] = *(_WORD *)&v97[56 * i + 6];
            *(_WORD *)&v97[v63 + 8] = *(_WORD *)&v97[56 * i + 8];
            *(_WORD *)&v97[v63 + 10] = *(_WORD *)&v97[56 * i + 10];
            v61 = v96;
          }
        }
        v65 = v91;
        v66 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v66;
        v93 = v66;
        v48 = v65 & 0xFEFA | 0x101;
        goto LABEL_98;
      }
      LOWORD(v46) = 4;
      v48 = 4;
    }
    else
    {
      if ( (_BYTE)v7 )
      {
        v99 = 0;
        v50 = 0LL;
        v98 = 0LL;
        if ( (_BYTE)v83 )
        {
          do
          {
            v51 = (unsigned int)v50;
            v50 = (unsigned int)(v50 + 1);
            v52 = *(_WORD *)&v97[56 * v51 + 2];
            *((_WORD *)&v98 + v51) = v52;
            *(_WORD *)&v97[56 * v51 + 2] = v52 & 0xFFFE;
          }
          while ( (unsigned int)v50 < v96 );
          v46 = v91;
        }
        v53 = *((_QWORD *)this + 3);
        LOWORD(v46) = v46 | 0x104;
        v95 = 0;
        v91 = v46;
        (*(void (__fastcall **)(__int64, __int16 *, __int64, __int64))(*(_QWORD *)v53 + 24LL))(v53, &v90, v46, v50);
        v54 = v96;
        v55 = 0;
        for ( j = 0; j < v54; ++j )
        {
          v57 = 56LL * v55;
          if ( (v97[56 * j + 2] & 8) != 0 )
          {
            ++v55;
            *(_WORD *)&v97[v57 + 2] = *((_WORD *)&v98 + j);
            *(_WORD *)&v97[v57] = *(_WORD *)&v97[56 * j];
            *(_WORD *)&v97[v57 + 4] = *(_WORD *)&v97[56 * j + 4];
            *(_WORD *)&v97[v57 + 6] = *(_WORD *)&v97[56 * j + 6];
            *(_WORD *)&v97[v57 + 8] = *(_WORD *)&v97[56 * j + 8];
            *(_WORD *)&v97[v57 + 10] = *(_WORD *)&v97[56 * j + 10];
            v54 = v96;
          }
        }
        v58 = v91;
        v59 = *((_DWORD *)this + 26) + 1;
        v60 = v84;
        *((_DWORD *)this + 26) = v59;
        v93 = v59;
        v95 = v60;
        v48 = v58 & 0xFEFA | 1;
LABEL_98:
        LOWORD(v46) = v48;
        v91 = v48;
        v96 = v55;
        v90 = 56 * v55 + 24;
        goto LABEL_101;
      }
      if ( (_BYTE)v81 )
      {
        LOWORD(v46) = 256;
        v91 = 256;
LABEL_101:
        if ( (_BYTE)v86 )
        {
          LOWORD(v46) = v48 | 0x8000;
          v91 = v48 | 0x8000;
        }
        if ( (*(_BYTE *)a2 & 0x20) != 0 )
          v91 = v46 | 0x1000;
        if ( !BYTE1(v81) )
        {
          v67 = (_OWORD *)((char *)this + 112);
          v68 = &v90;
          v69 = 4LL;
          do
          {
            v70 = *((_OWORD *)v68 + 1);
            *v67 = *(_OWORD *)v68;
            v71 = *((_OWORD *)v68 + 2);
            v67[1] = v70;
            v72 = *((_OWORD *)v68 + 3);
            v67[2] = v71;
            v73 = *((_OWORD *)v68 + 4);
            v67[3] = v72;
            v74 = *((_OWORD *)v68 + 5);
            v67[4] = v73;
            v75 = *((_OWORD *)v68 + 6);
            v67[5] = v74;
            v76 = *((_OWORD *)v68 + 7);
            v68 += 64;
            v67[6] = v75;
            v67 += 8;
            *(v67 - 1) = v76;
            --v69;
          }
          while ( v69 );
          v77 = *((_OWORD *)v68 + 1);
          *v67 = *(_OWORD *)v68;
          v78 = *((_OWORD *)v68 + 2);
          v67[1] = v77;
          v79 = *((_OWORD *)v68 + 3);
          v80 = *((_QWORD *)v68 + 8);
          v67[2] = v78;
          v67[3] = v79;
          *((_QWORD *)v67 + 8) = v80;
          (*(void (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v90);
        }
        return 0LL;
      }
      v48 = 260;
      LOWORD(v46) = 260;
      v91 = 260;
    }
    *((_WORD *)this + 54) = 0;
    *((_DWORD *)this + 26) = v47 + 1;
    *((_BYTE *)this + 696) = 0;
    goto LABEL_101;
  }
  return 0LL;
}
