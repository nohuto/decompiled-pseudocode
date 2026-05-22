/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801C58F4
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801C4890 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?A_TAEAW4_Button@@@Z @ 0x1801C5220 (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-A_TA.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801C5354 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x1801C5750 (--D-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801C5CCC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801C60C0 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1801C63A8 (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x1801C6864 (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801C6A38 (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v3; // ecx
  char v4; // r8
  int v5; // ecx
  int v6; // ecx
  char *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  int v10; // r14d
  int v11; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r8
  char *v15; // rbx
  void **v16; // r12
  __int64 *v17; // r15
  signed __int64 v18; // r13
  char *v19; // rbx
  char v20; // al
  __int64 *v21; // r15
  void **v22; // r12
  const void *v23; // rcx
  __int64 v24; // rax
  void *v25; // rbx
  char IsComboButtonCandidate; // al
  __int64 v28; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  void *Src; // [rsp+60h] [rbp+40h] BYREF
  const void *v31; // [rsp+68h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 6);
  v4 = *((_BYTE *)a2 + 68);
  LODWORD(Src) = *((_DWORD *)a2 + 16);
  v5 = v3 - 1;
  if ( !v5 )
  {
    *(_WORD *)((char *)this + 17) = 0;
    *((_BYTE *)this + 16) = 0;
    if ( !v4 )
      return 0LL;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Src);
    ButtonRecognizer::FindExactComboButtonMatch(this, &Src, (char *)this + 48);
    if ( Src != **((void ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v21 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*((__int64 **)&Src);
      v22 = (void **)((char *)this + 88);
      *((_DWORD *)this + 18) = *(_DWORD *)v21;
      *((_BYTE *)this + 80) = *((_BYTE *)v21 + 8);
      if ( (__int64 *)((char *)this + 88) != v21 + 2 )
      {
        v23 = (const void *)v21[2];
        v24 = v21[3] - (_QWORD)v23;
        v31 = v23;
        Src = (void *)v24;
        if ( v24 >> 2 > (unsigned __int64)((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) >> 2) )
        {
          std::vector<enum _Button>::_Clear_and_reserve_geometric((char *)this + 88);
          v23 = v31;
        }
        v25 = *v22;
        memmove_0(*v22, v23, (size_t)Src);
        *((_QWORD *)this + 12) = (char *)Src + (_QWORD)v25;
      }
      *((_OWORD *)this + 7) = *(_OWORD *)(v21 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v21 + 7);
      *((_QWORD *)this + 18) = v21[9];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
      {
        v11 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v11 < 0 )
        {
          v12 = 460LL;
          goto LABEL_43;
        }
        *((_BYTE *)this + 16) = 1;
LABEL_45:
        *((_DWORD *)this + 6) = 3;
        return 0LL;
      }
    }
    else if ( !IsComboButtonCandidate )
    {
      goto LABEL_45;
    }
    v28 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 17) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v28 + 80LL))(v28, 20000000LL, 0LL);
    if ( v11 < 0 )
    {
      v12 = 468LL;
      goto LABEL_43;
    }
    goto LABEL_50;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v10 = 1;
    *((_BYTE *)this + 17) = 1;
    if ( !v4 )
    {
      if ( *((_BYTE *)this + 18) )
      {
        v11 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v11 < 0 )
        {
          v12 = 484LL;
LABEL_43:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\li"
                     "b\\buttonrecognizer.cpp",
            (const char *)(unsigned int)v11);
          return (unsigned int)v11;
        }
        *((_BYTE *)this + 16) = 1;
      }
      v7 = (char *)this + 48;
      v13 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
              &v31,
              *((_DWORD **)this + 6),
              *((_DWORD **)this + 7),
              &Src);
      std::vector<enum _Button>::erase((char *)this + 48, &Src, *v13, v14);
LABEL_14:
      if ( *(_QWORD *)v7 != *((_QWORD *)v7 + 1) )
        v10 = 3;
      goto LABEL_51;
    }
    v15 = (char *)this + 48;
    *((_BYTE *)this + 18) = 0;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Src);
    ButtonRecognizer::FindExactComboButtonMatch(this, &Src, (char *)this + 48);
    if ( Src != **((void ***)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v16 = (void **)((char *)this + 88);
      v17 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*((__int64 **)&Src);
      *((_DWORD *)this + 18) = *(_DWORD *)v17;
      *((_BYTE *)this + 80) = *((_BYTE *)v17 + 8);
      if ( (__int64 *)((char *)this + 88) != v17 + 2 )
      {
        v18 = v17[3] - v17[2];
        Src = (void *)v17[2];
        if ( v18 >> 2 > (unsigned __int64)((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) >> 2) )
          std::vector<enum _Button>::_Clear_and_reserve_geometric((char *)this + 88);
        v19 = (char *)*v16;
        memmove_0(*v16, Src, v18);
        *((_QWORD *)this + 12) = &v19[v18];
        v15 = (char *)this + 48;
      }
      *((_OWORD *)this + 7) = *(_OWORD *)(v17 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v17 + 7);
      *((_QWORD *)this + 18) = v17[9];
    }
    v20 = ButtonRecognizer::IsComboButtonCandidate(this, v15);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !v20 )
      {
        v11 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v11 < 0 )
        {
          v12 = 509LL;
          goto LABEL_43;
        }
        *((_BYTE *)this + 16) = 1;
        goto LABEL_28;
      }
    }
    else if ( !v20 )
    {
LABEL_28:
      v10 = 3;
LABEL_51:
      *((_DWORD *)this + 6) = v10;
      return 0LL;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
            *((_QWORD *)this + 19),
            20000000LL,
            0LL);
    if ( v11 < 0 )
    {
      v12 = 515LL;
      goto LABEL_43;
    }
LABEL_50:
    v10 = 2;
    goto LABEL_51;
  }
  if ( v6 == 1 )
  {
    v7 = (char *)this + 48;
    if ( v4 )
    {
      std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Src);
    }
    else
    {
      v8 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
             &v31,
             *(_DWORD **)v7,
             *((_DWORD **)this + 7),
             &Src);
      std::vector<enum _Button>::erase((char *)this + 48, &Src, *v8, v9);
    }
    v10 = 1;
    goto LABEL_14;
  }
  return 0LL;
}
