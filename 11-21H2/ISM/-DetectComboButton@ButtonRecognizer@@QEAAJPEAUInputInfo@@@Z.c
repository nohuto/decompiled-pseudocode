/*
 * XREFs of ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801A7548
 * Callers:
 *     ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A64F0 (-OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x1801A6E70 (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAW4.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801A6FA4 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x1801A7390 (--D-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801A7938 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801A7D30 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1801A8028 (-OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x1801A84F4 (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801A86C8 (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 */

__int64 __fastcall ButtonRecognizer::DetectComboButton(ButtonRecognizer *this, struct InputInfo *a2)
{
  int v3; // ecx
  char v4; // r8
  int v5; // ecx
  int v6; // ecx
  _DWORD **v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r8
  int v10; // esi
  bool v11; // zf
  int v12; // r14d
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  void **v17; // r15
  __int64 *v18; // r14
  const void *v19; // rcx
  char *v20; // r13
  unsigned __int64 v21; // rax
  char v22; // al
  int v23; // esi
  __int64 v24; // rdx
  __int64 *v25; // rax
  void **v26; // r15
  __int64 *v27; // r14
  const void *v28; // rcx
  char *v29; // r13
  unsigned __int64 v30; // rax
  char IsComboButtonCandidate; // al
  __int64 v33; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  size_t Size; // [rsp+60h] [rbp+40h] BYREF
  const void *v36; // [rsp+68h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 6);
  v4 = *((_BYTE *)a2 + 68);
  LODWORD(Size) = *((_DWORD *)a2 + 16);
  v5 = v3 - 1;
  if ( !v5 )
  {
    *(_WORD *)((char *)this + 17) = 0;
    *((_BYTE *)this + 16) = 0;
    if ( !v4 )
      return 0LL;
    std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Size);
    ButtonRecognizer::FindExactComboButtonMatch(this, &Size, (char *)this + 48);
    if ( Size != **((_QWORD **)this + 4) )
    {
      *((_BYTE *)this + 18) = 1;
      v25 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*((__int64 **)&Size);
      v26 = (void **)((char *)this + 88);
      v27 = v25;
      *((_DWORD *)this + 18) = *(_DWORD *)v25;
      *((_BYTE *)this + 80) = *((_BYTE *)v25 + 8);
      if ( (__int64 *)((char *)this + 88) != v25 + 2 )
      {
        v28 = (const void *)v25[2];
        v29 = (char *)*v26;
        Size = v25[3] - (_QWORD)v28;
        v30 = (__int64)(*((_QWORD *)this + 13) - (_QWORD)v29) >> 2;
        v36 = v28;
        if ( (__int64)Size >> 2 > v30 )
        {
          std::vector<enum _Button>::_Clear_and_reserve_geometric((char *)this + 88);
          v28 = v36;
          v29 = (char *)*v26;
        }
        memmove_0(v29, v28, Size);
        *((_QWORD *)this + 12) = &v29[Size];
      }
      *((_OWORD *)this + 7) = *(_OWORD *)(v27 + 5);
      *((_OWORD *)this + 8) = *(_OWORD *)(v27 + 7);
      *((_QWORD *)this + 18) = v27[9];
    }
    IsComboButtonCandidate = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
    if ( *((_BYTE *)this + 18) )
    {
      if ( !IsComboButtonCandidate )
      {
        v12 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
        if ( v12 < 0 )
        {
          v13 = 460LL;
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
    v33 = *((_QWORD *)this + 19);
    *((_BYTE *)this + 17) = 1;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v33 + 80LL))(v33, 20000000LL, 0LL);
    if ( v23 < 0 )
    {
      v24 = 468LL;
      goto LABEL_50;
    }
LABEL_51:
    v10 = 2;
    goto LABEL_52;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v7 = (_DWORD **)((char *)this + 48);
      if ( v4 )
      {
        std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Size);
      }
      else
      {
        v8 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
               &v36,
               *v7,
               *((_DWORD **)this + 7),
               &Size);
        std::vector<enum _Button>::erase((char *)this + 48, &Size, *v8, v9);
      }
      v10 = 1;
      v11 = *v7 == *((_DWORD **)this + 7);
      goto LABEL_14;
    }
    return 0LL;
  }
  v10 = 1;
  *((_BYTE *)this + 17) = 1;
  if ( !v4 )
  {
    if ( *((_BYTE *)this + 18) )
    {
      v12 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
      if ( v12 < 0 )
      {
        v13 = 484LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
          (const char *)(unsigned int)v12);
        return (unsigned int)v12;
      }
      *((_BYTE *)this + 16) = 1;
    }
    v14 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
            &v36,
            *((_DWORD **)this + 6),
            *((_DWORD **)this + 7),
            &Size);
    std::vector<enum _Button>::erase((char *)this + 48, &Size, *v14, v15);
    v11 = *((_QWORD *)this + 6) == *((_QWORD *)this + 7);
LABEL_14:
    if ( !v11 )
      v10 = 3;
    goto LABEL_52;
  }
  *((_BYTE *)this + 18) = 0;
  std::vector<enum _Button>::emplace_back<enum _Button &>((__int64)this + 48, &Size);
  ButtonRecognizer::FindExactComboButtonMatch(this, &Size, (char *)this + 48);
  if ( Size != **((_QWORD **)this + 4) )
  {
    *((_BYTE *)this + 18) = 1;
    v16 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*((__int64 **)&Size);
    v17 = (void **)((char *)this + 88);
    v18 = v16;
    *((_DWORD *)this + 18) = *(_DWORD *)v16;
    *((_BYTE *)this + 80) = *((_BYTE *)v16 + 8);
    if ( (__int64 *)((char *)this + 88) != v16 + 2 )
    {
      v19 = (const void *)v16[2];
      v20 = (char *)*v17;
      Size = v16[3] - (_QWORD)v19;
      v21 = (__int64)(*((_QWORD *)this + 13) - (_QWORD)v20) >> 2;
      v36 = v19;
      if ( (__int64)Size >> 2 > v21 )
      {
        std::vector<enum _Button>::_Clear_and_reserve_geometric((char *)this + 88);
        v19 = v36;
        v20 = (char *)*v17;
      }
      memmove_0(v20, v19, Size);
      *((_QWORD *)this + 12) = &v20[Size];
    }
    *((_OWORD *)this + 7) = *(_OWORD *)(v18 + 5);
    *((_OWORD *)this + 8) = *(_OWORD *)(v18 + 7);
    *((_QWORD *)this + 18) = v18[9];
  }
  v22 = ButtonRecognizer::IsComboButtonCandidate(this, (char *)this + 48);
  if ( *((_BYTE *)this + 18) )
  {
    if ( !v22 )
    {
      v12 = ButtonRecognizer::OnSendComboButtonInvokeEvent(this);
      if ( v12 < 0 )
      {
        v13 = 509LL;
        goto LABEL_43;
      }
      *((_BYTE *)this + 16) = 1;
      goto LABEL_28;
    }
  }
  else if ( !v22 )
  {
LABEL_28:
    v10 = 3;
LABEL_52:
    *((_DWORD *)this + 6) = v10;
    return 0LL;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
          *((_QWORD *)this + 19),
          20000000LL,
          0LL);
  if ( v23 >= 0 )
    goto LABEL_51;
  v24 = 515LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
    (const char *)(unsigned int)v23);
  return (unsigned int)v23;
}
