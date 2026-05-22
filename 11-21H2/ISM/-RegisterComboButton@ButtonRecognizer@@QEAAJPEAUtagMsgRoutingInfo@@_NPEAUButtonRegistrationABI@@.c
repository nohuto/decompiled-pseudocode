/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801A81A8
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1801A8440 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A6BD4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801A6D74 (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A6E9C (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801A6FA4 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801A7074 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 *     ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x1801A7F34 (-OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x1801A84F4 (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A8560 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801A86C8 (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        char a3,
        struct ButtonRegistrationABI *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  int *v9; // rbx
  _BYTE *v10; // rsi
  char *v11; // rdi
  signed __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rbx
  void **v17; // rdi
  __int64 v18; // rsi
  void *v19; // r12
  char *v20; // r14
  size_t v21; // rsi
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v25; // [rsp+20h] [rbp-89h] BYREF
  __int64 v26; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-79h] BYREF
  void *Src; // [rsp+40h] [rbp-69h] BYREF
  int *v29; // [rsp+48h] [rbp-61h]
  _DWORD v30[5]; // [rsp+58h] [rbp-51h] BYREF
  char v31; // [rsp+6Ch] [rbp-3Dh] BYREF
  _BYTE v32[8]; // [rsp+70h] [rbp-39h] BYREF
  void *v33; // [rsp+78h] [rbp-31h] BYREF
  __int128 v34; // [rsp+80h] [rbp-29h]
  __int128 v35; // [rsp+90h] [rbp-19h]
  __int128 v36; // [rsp+A0h] [rbp-9h]
  __int64 v37; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v30[0] = *(_DWORD *)a4;
  v30[1] = *((_DWORD *)a4 + 1);
  v30[2] = *((_DWORD *)a4 + 2);
  v30[3] = *((_DWORD *)a4 + 3);
  v30[4] = *((_DWORD *)a4 + 4);
  v27[0] = v30;
  v27[1] = &v31;
  std::vector<enum _Button>::vector<enum _Button>(&Src, (__int64)v27);
  LODWORD(v26) = 240;
  v7 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
         v27,
         Src,
         v29,
         &v26);
  std::vector<enum _Button>::erase(&Src, &v26, *v7, v8);
  v9 = v29;
  v10 = Src;
  if ( !a3 )
    std::_Sort_unchecked<enum _Button *,std::less<void>>((char *)Src, v29, ((char *)v29 - (_BYTE *)Src) >> 2, 0);
  v11 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v32[0] = a3;
  v12 = (char *)v9 - v10;
  if ( v12 >> 2 )
  {
    std::vector<enum _Button>::_Clear_and_reserve_geometric(&v33);
    v11 = (char *)v33;
  }
  memmove_0(v11, v10, v12);
  *(_QWORD *)&v34 = &v11[v12];
  v35 = *(_OWORD *)a2;
  v36 = *((_OWORD *)a2 + 1);
  v37 = *((_QWORD *)a2 + 4);
  std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
    &v26,
    **((_QWORD **)this + 4),
    *((_QWORD *)this + 4),
    v32);
  v14 = (_QWORD *)*((_QWORD *)this + 4);
  if ( (_QWORD *)v26 == v14 )
  {
    v15 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v15 + 1;
  }
  else
  {
    v15 = *(_DWORD *)(v26 + 32);
  }
  v25 = v15;
  if ( *((_QWORD *)this + 5) )
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase_unchecked(
      (char *)this + 32,
      *v14);
  v16 = *(_QWORD *)std::map<unsigned int,ComboButtonRegistration>::_Try_emplace<unsigned int const &,>(
                     (__int64 *)this + 4,
                     (__int64)v27,
                     &v25,
                     v13);
  *(_BYTE *)(v16 + 40) = v32[0];
  v17 = (void **)(v16 + 48);
  if ( (void **)(v16 + 48) != &v33 )
  {
    v18 = v34;
    v19 = v33;
    v20 = (char *)*v17;
    if ( (__int64)(v34 - (_QWORD)v33) >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(v16 + 64) - *(_QWORD *)(v16 + 48)) >> 2) )
    {
      std::vector<enum _Button>::_Clear_and_reserve_geometric(v16 + 48);
      v20 = (char *)*v17;
    }
    v21 = v18 - (_QWORD)v19;
    memmove_0(v20, v19, v21);
    *(_QWORD *)(v16 + 56) = &v20[v21];
  }
  *(_OWORD *)(v16 + 72) = v35;
  *(_OWORD *)(v16 + 88) = v36;
  *(_QWORD *)(v16 + 104) = v37;
  v22 = ButtonRecognizer::OnComboButtonRegistryComplete(this, v25, a2);
  v23 = v22;
  if ( v22 >= 0 )
    v23 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
      (const char *)(unsigned int)v22);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v33);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&Src);
  return v23;
}
