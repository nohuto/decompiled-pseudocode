/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801EBF70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800D6FF4 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Insert_or_assign@KAEAG@?$unordered_map@KGU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAG@Z @ 0x1801EBAE4 (--$_Insert_or_assign@KAEAG@-$unordered_map@KGU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair.c)
 *     ?ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z @ 0x1801EBEF0 (-ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  bool v2; // zf
  struct InputInfo *v3; // r13
  const char *v5; // r9
  unsigned int v6; // eax
  char v7; // r10
  unsigned __int8 v8; // r12
  unsigned int v9; // r11d
  __int16 v10; // si
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  __int16 v13; // r14
  __int64 v14; // r12
  int v15; // r15d
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 appended; // rax
  _QWORD *v19; // r11
  unsigned __int8 *v20; // rbx
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // dx
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // r14
  __int16 v35; // dx
  __int128 v36; // xmm1
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int64 *v39; // rbx
  __int64 *v40; // r15
  unsigned __int64 v41; // rax
  _QWORD **v42; // r11
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // eax
  int v46; // r9d
  __int64 v47; // r8
  unsigned __int16 v48; // dx
  __int64 v49; // r10
  unsigned __int16 v50; // dx
  _OWORD *v51; // rcx
  __int16 *v52; // rax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // rax
  __int64 v65; // r9
  __int64 v66; // rax
  __int16 v67; // cx
  __int64 v68; // rcx
  unsigned __int8 v69; // r10
  unsigned int v70; // r9d
  unsigned int j; // r8d
  __int64 v72; // rdx
  unsigned __int16 v73; // dx
  int v74; // eax
  __int64 v75; // rcx
  unsigned __int8 v76; // r10
  unsigned int v77; // r9d
  unsigned int i; // r8d
  __int64 v79; // rdx
  __int16 v80; // ax
  unsigned __int16 v81; // dx
  int v82; // eax
  int v83; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v84[4]; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int v85; // [rsp+28h] [rbp-D8h]
  int v86; // [rsp+2Ch] [rbp-D4h]
  int v87; // [rsp+30h] [rbp-D0h] BYREF
  int v88; // [rsp+34h] [rbp-CCh]
  unsigned int v89; // [rsp+38h] [rbp-C8h]
  struct TouchContact *v90; // [rsp+40h] [rbp-C0h] BYREF
  struct InputInfo *v91; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v92; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v93; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v94; // [rsp+62h] [rbp-9Eh]
  int v95; // [rsp+64h] [rbp-9Ch]
  int v96; // [rsp+70h] [rbp-90h]
  char v97; // [rsp+75h] [rbp-8Bh]
  unsigned __int8 v98; // [rsp+76h] [rbp-8Ah]
  unsigned __int8 v99; // [rsp+77h] [rbp-89h]
  _BYTE v100[568]; // [rsp+78h] [rbp-88h]
  __int128 v101; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v102; // [rsp+2C0h] [rbp+1C0h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v2 = (*(_DWORD *)a2 & 0x100003B) == 0;
  v3 = a2;
  v91 = a2;
  if ( v2 )
    return 0LL;
  memset_0(&v93, 0, 0x248uLL);
  v6 = *((_DWORD *)v3 + 79);
  v7 = 0;
  LOBYTE(v88) = 0;
  v8 = 0;
  LOWORD(v83) = 0;
  v9 = 0;
  v85 = 0;
  if ( v6 > 0xA )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
      v5);
  v89 = 0;
  v10 = 1;
  v11 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = v8;
      v13 = 0;
      v14 = 18LL * v11;
      v15 = *((_DWORD *)v3 + 36 * v11 + 83);
      if ( (*(_BYTE *)v3 & 2) != 0 && (v15 & 0x10) == 0 )
      {
        v15 &= ~4u;
        *((_DWORD *)v3 + 36 * v11 + 83) = v15;
      }
      if ( (v15 & 2) != 0 && !*((_BYTE *)this + 32) )
      {
        v13 = 8;
        LOBYTE(v83) = v7 + 1;
      }
      v16 = (unsigned __int8)(v12 + 1);
      v17 = *((_DWORD *)v3 + 2 * v14 + 81);
      if ( (v15 & 4) == 0 )
        v16 = v12;
      v87 = v15 & 4;
      v86 = v16;
      *(_DWORD *)v84 = v17;
      appended = std::_Fnv1a_append_bytes(v16, v84, 4uLL);
      v20 = (unsigned __int8 *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                                 v19,
                                 &v101,
                                 v84,
                                 appended)[1];
      if ( !v20 )
        v20 = (unsigned __int8 *)*((_QWORD *)this + 6);
      if ( v20 != *((unsigned __int8 **)this + 6) )
        break;
      if ( v87 )
      {
        v13 |= 1u;
LABEL_18:
        *(_WORD *)v84 = *((_WORD *)this + 54);
        *((_WORD *)this + 54) = *(_WORD *)v84 + 1;
        v87 = *((_DWORD *)v3 + 2 * v14 + 81);
        std::unordered_map<unsigned long,unsigned short>::_Insert_or_assign<unsigned long,unsigned short &>(
          (float *)this + 10,
          (__int64)&v92,
          (unsigned __int8 *)&v87,
          v84);
        v20 = v92;
LABEL_27:
        v24 = *((_WORD *)v3 + 4 * v14 + 184);
        v25 = *(_WORD *)v84;
        v26 = 56LL * v85;
        v9 = ++v85;
        *(_WORD *)&v100[v26 + 4] = v24;
        *(_WORD *)&v100[v26 + 6] = *((_WORD *)v3 + 4 * v14 + 186);
        *(_WORD *)&v100[v26 + 8] = *((_WORD *)v3 + 4 * v14 + 176);
        *(_WORD *)&v100[v26 + 10] = *((_WORD *)v3 + 4 * v14 + 178);
        v27 = *((_DWORD *)v3 + 2 * v14 + 83);
        *(_WORD *)&v100[v26] = v25;
        *(_WORD *)&v100[v26 + 2] = v13;
        if ( (v27 & 2) == 0 || *((_BYTE *)this + 32) && (v27 & 4) == 0 )
        {
          v28 = std::_Fnv1a_append_bytes(v26, v20 + 16, 4uLL);
          v29 = *((_QWORD *)this + 8);
          v30 = 2 * (*((_QWORD *)this + 11) & v28);
          if ( *(unsigned __int8 **)(v29 + 16 * (*((_QWORD *)this + 11) & v28) + 8) == v20 )
          {
            if ( *(unsigned __int8 **)(v29 + 16 * (*((_QWORD *)this + 11) & v28)) == v20 )
            {
              v31 = *((_QWORD *)this + 6);
              *(_QWORD *)(v29 + 8 * v30) = v31;
            }
            else
            {
              v31 = *((_QWORD *)v20 + 1);
            }
            *(_QWORD *)(v29 + 8 * v30 + 8) = v31;
          }
          else if ( *(unsigned __int8 **)(v29 + 16 * (*((_QWORD *)this + 11) & v28)) == v20 )
          {
            *(_QWORD *)(v29 + 16 * (*((_QWORD *)this + 11) & v28)) = *(_QWORD *)v20;
          }
          v32 = *(_QWORD *)v20;
          --*((_QWORD *)this + 7);
          **((_QWORD **)v20 + 1) = v32;
          *(_QWORD *)(v32 + 8) = *((_QWORD *)v20 + 1);
          std::_Deallocate<16,0>(v20, 0x18uLL);
          v9 = v85;
        }
        goto LABEL_41;
      }
      if ( !*((_BYTE *)this + 32) )
        goto LABEL_18;
      v9 = v85;
LABEL_41:
      v8 = v86;
      v11 = v89 + 1;
      v7 = v83;
      v89 = v11;
      if ( v11 >= *((_DWORD *)v3 + 79) )
        goto LABEL_42;
    }
    v21 = *((_WORD *)v20 + 10);
    v90 = 0LL;
    *(_WORD *)v84 = v21;
    if ( !TouchInfoAdapter::ExistingTouchContactWithId(this, v21, &v90) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBF,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
        (const char *)0x8000FFFFLL,
        v83);
    if ( v87 )
    {
      v13 |= ((v90->Flags & 3) != 0) + 1;
    }
    else if ( (v90->Flags & 1) != 0 || (v90->Flags & 2) != 0 )
    {
      v13 |= 4u;
    }
    v22 = (unsigned __int8)v88;
    if ( (v15 & 0x8000) != 0 )
      v22 = 1;
    v90->Reserved = 1;
    v88 = v22;
    v23 = v13 | 0x2000;
    if ( (v15 & 0x8000) == 0 )
      v23 = v13;
    v13 = v23;
    goto LABEL_27;
  }
LABEL_42:
  if ( *((_BYTE *)this + 696) )
  {
    v33 = 0;
    v86 = 0;
    if ( *((_BYTE *)this + 135) )
    {
      do
      {
        v34 = 56LL * v33;
        v35 = *(_WORD *)((char *)this + v34 + 138);
        if ( (v35 & 0xB) != 0 && *(_WORD *)((char *)this + v34 + 154) != 1 )
        {
          v36 = *(_OWORD *)((char *)this + v34 + 152);
          v37 = 56LL * v9;
          *(_OWORD *)&v100[v37] = *(_OWORD *)((char *)this + v34 + 136);
          v38 = *(_OWORD *)((char *)this + v34 + 168);
          v85 = v9 + 1;
          *(_OWORD *)&v100[v37 + 16] = v36;
          *(_QWORD *)&v36 = *(_QWORD *)((char *)this + v34 + 184);
          *(_OWORD *)&v100[v37 + 32] = v38;
          *(_QWORD *)&v100[v37 + 48] = v36;
          *(_WORD *)&v100[v37 + 2] = (v35 & 3) != 0 ? 4 : 0;
          v39 = (__int64 *)*((_QWORD *)this + 6);
LABEL_47:
          v39 = (__int64 *)*v39;
          while ( 1 )
          {
            v40 = (__int64 *)*((_QWORD *)this + 6);
            if ( v39 == v40 )
              break;
            if ( *((_WORD *)v39 + 10) != *(_WORD *)((char *)this + v34 + 136) )
              goto LABEL_47;
            v41 = std::_Fnv1a_append_bytes(v37, (const unsigned __int8 *const)v39 + 16, 4uLL);
            v43 = *((_QWORD *)this + 8);
            v44 = 2 * (*((_QWORD *)this + 11) & v41);
            if ( *(__int64 **)(v43 + 16 * (*((_QWORD *)this + 11) & v41) + 8) == v39 )
            {
              if ( *(__int64 **)(v43 + 16 * (*((_QWORD *)this + 11) & v41)) == v39 )
                *(_QWORD *)(v43 + 16 * (*((_QWORD *)this + 11) & v41)) = v40;
              else
                v40 = (__int64 *)v39[1];
              *(_QWORD *)(v43 + 8 * v44 + 8) = v40;
            }
            else if ( *(__int64 **)(v43 + 16 * (*((_QWORD *)this + 11) & v41)) == v39 )
            {
              *(_QWORD *)(v43 + 16 * (*((_QWORD *)this + 11) & v41)) = *v39;
            }
            v39 = (__int64 *)*v39;
            --*((_QWORD *)this + 7);
            *v42[1] = v39;
            v39[1] = (__int64)v42[1];
            std::_Deallocate<16,0>(v42, 0x18uLL);
          }
          v33 = v86;
          v9 = v85;
        }
        v45 = *((unsigned __int8 *)this + 135);
        v86 = ++v33;
      }
      while ( v33 < v45 );
      v3 = v91;
      v7 = v83;
    }
  }
  v46 = *((_DWORD *)this + 26);
  v47 = 0LL;
  v95 = *((_DWORD *)v3 + 2);
  v96 = v46;
  v94 = 0;
  v97 = v7;
  v98 = v8;
  v99 = v9;
  v93 = 56 * v9 + 24;
  if ( *((_BYTE *)this + 696) )
  {
    if ( *((_BYTE *)this + 32) || (v48 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
    {
      v48 = 0;
      if ( !v8 )
      {
        if ( !v7 )
        {
          v49 = 4LL;
          *((_BYTE *)this + 696) = 0;
          v94 = 4;
          v47 = 4LL;
          *((_DWORD *)this + 26) = v46 + 1;
          v48 = 4;
          *((_WORD *)this + 54) = 0;
          goto LABEL_72;
        }
        v75 = *((_QWORD *)this + 3);
        v94 = 4;
        (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v75 + 24LL))(v75, &v93);
        v76 = v99;
        v77 = 0;
        for ( i = 0; i < v76; ++i )
        {
          v79 = 56LL * v77;
          v80 = *(_WORD *)&v100[56 * i + 2];
          if ( (v80 & 8) != 0 )
          {
            *(_WORD *)&v100[56 * v77++ + 2] = v80 & 0xFFFB;
            *(_WORD *)&v100[v79] = *(_WORD *)&v100[56 * i];
            *(_WORD *)&v100[v79 + 4] = *(_WORD *)&v100[56 * i + 4];
            *(_WORD *)&v100[v79 + 6] = *(_WORD *)&v100[56 * i + 6];
            *(_WORD *)&v100[v79 + 8] = *(_WORD *)&v100[56 * i + 8];
            *(_WORD *)&v100[v79 + 10] = *(_WORD *)&v100[56 * i + 10];
            v76 = v99;
          }
        }
        v81 = v94;
        v82 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v82;
        v96 = v82;
        v48 = v81 & 0xFEFA | 0x101;
        v99 = v77;
        v47 = v48;
        v94 = v48;
        v93 = 56 * v77 + 24;
      }
    }
    else
    {
      if ( v8 )
      {
        v102 = 0;
        v65 = 0LL;
        v101 = 0LL;
        if ( (_BYTE)v9 )
        {
          do
          {
            v66 = (unsigned int)v65;
            v65 = (unsigned int)(v65 + 1);
            v67 = *(_WORD *)&v100[56 * v66 + 2];
            *((_WORD *)&v101 + v66) = v67;
            *(_WORD *)&v100[56 * v66 + 2] = v67 & 0xFFFE;
          }
          while ( (unsigned int)v65 < v99 );
          v47 = v94;
        }
        v68 = *((_QWORD *)this + 3);
        LOWORD(v47) = v47 | 0x104;
        v98 = 0;
        v94 = v47;
        (*(void (__fastcall **)(__int64, __int16 *, __int64, __int64))(*(_QWORD *)v68 + 24LL))(v68, &v93, v47, v65);
        v69 = v99;
        v70 = 0;
        for ( j = 0; j < v69; ++j )
        {
          v72 = 56LL * v70;
          if ( (v100[56 * j + 2] & 8) != 0 )
          {
            ++v70;
            *(_WORD *)&v100[v72 + 2] = *((_WORD *)&v101 + j);
            *(_WORD *)&v100[v72] = *(_WORD *)&v100[56 * j];
            *(_WORD *)&v100[v72 + 4] = *(_WORD *)&v100[56 * j + 4];
            *(_WORD *)&v100[v72 + 6] = *(_WORD *)&v100[56 * j + 6];
            *(_WORD *)&v100[v72 + 8] = *(_WORD *)&v100[56 * j + 8];
            *(_WORD *)&v100[v72 + 10] = *(_WORD *)&v100[56 * j + 10];
            v69 = v99;
          }
        }
        v73 = v94;
        v74 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v74;
        v96 = v74;
        v98 = v8;
        v48 = v73 & 0xFEFA | 1;
        v99 = v70;
        v93 = 56 * v70 + 24;
      }
      else if ( !v7 )
      {
        *((_BYTE *)this + 696) = 0;
        *((_DWORD *)this + 26) = v46 + 1;
        v48 = 260;
        *((_WORD *)this + 54) = 0;
      }
      v47 = v48;
      v94 = v48;
    }
LABEL_71:
    v49 = 4LL;
LABEL_72:
    if ( (_BYTE)v88 )
    {
      v50 = v48 | 0x8000;
      v47 = v50;
      v94 = v50;
    }
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
    {
      LOWORD(v47) = v47 | 0x1000;
      v94 = v47;
    }
    if ( !BYTE1(v83) )
    {
      v51 = (_OWORD *)((char *)this + 112);
      v52 = &v93;
      do
      {
        v53 = *((_OWORD *)v52 + 1);
        *v51 = *(_OWORD *)v52;
        v54 = *((_OWORD *)v52 + 2);
        v51[1] = v53;
        v55 = *((_OWORD *)v52 + 3);
        v51[2] = v54;
        v56 = *((_OWORD *)v52 + 4);
        v51[3] = v55;
        v57 = *((_OWORD *)v52 + 5);
        v51[4] = v56;
        v58 = *((_OWORD *)v52 + 6);
        v51[5] = v57;
        v59 = *((_OWORD *)v52 + 7);
        v52 += 64;
        v51[6] = v58;
        v51 += 8;
        *(v51 - 1) = v59;
        --v49;
      }
      while ( v49 );
      v60 = *((_OWORD *)v52 + 1);
      *v51 = *(_OWORD *)v52;
      v61 = *((_OWORD *)v52 + 2);
      v51[1] = v60;
      v62 = *((_OWORD *)v52 + 3);
      v63 = *((_QWORD *)v52 + 8);
      v51[2] = v61;
      v51[3] = v62;
      *((_QWORD *)v51 + 8) = v63;
      (*(void (__fastcall **)(_QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        &v93,
        v47);
    }
    return 0LL;
  }
  *((_BYTE *)this + 696) = 1;
  if ( v8 )
  {
    v47 = 1LL;
    v94 = 1;
LABEL_70:
    v48 = v10;
    goto LABEL_71;
  }
  if ( v7 )
  {
    v47 = 257LL;
    v94 = 257;
    v10 = 257;
    goto LABEL_70;
  }
  if ( *((_BYTE *)this + 32) )
  {
    BYTE1(v83) = 1;
    v10 = 0;
    *((_BYTE *)this + 696) = 0;
    goto LABEL_70;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
