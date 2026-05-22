/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801C6524
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1801C67B0 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801C4F7C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801C5124 (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801C524C (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801C5354 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801C5434 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 *     ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x1801C62B4 (-OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x1801C6864 (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801C68D0 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801C6A38 (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
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
  __int64 v16; // rdi
  void **v17; // rsi
  void *v18; // r12
  size_t v19; // r14
  char *v20; // rbx
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+20h] [rbp-89h] BYREF
  __int64 v25; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-79h] BYREF
  void *Src; // [rsp+40h] [rbp-69h] BYREF
  int *v28; // [rsp+48h] [rbp-61h]
  _DWORD v29[5]; // [rsp+58h] [rbp-51h] BYREF
  char v30; // [rsp+6Ch] [rbp-3Dh] BYREF
  _BYTE v31[8]; // [rsp+70h] [rbp-39h] BYREF
  void *v32; // [rsp+78h] [rbp-31h] BYREF
  __int128 v33; // [rsp+80h] [rbp-29h]
  __int128 v34; // [rsp+90h] [rbp-19h]
  __int128 v35; // [rsp+A0h] [rbp-9h]
  __int64 v36; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v29[0] = *(_DWORD *)a4;
  v29[1] = *((_DWORD *)a4 + 1);
  v29[2] = *((_DWORD *)a4 + 2);
  v29[3] = *((_DWORD *)a4 + 3);
  v29[4] = *((_DWORD *)a4 + 4);
  v26[0] = v29;
  v26[1] = &v30;
  std::vector<enum _Button>::vector<enum _Button>(&Src, (__int64)v26);
  LODWORD(v25) = 305;
  v7 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
         v26,
         Src,
         v28,
         &v25);
  std::vector<enum _Button>::erase(&Src, &v25, *v7, v8);
  v9 = v28;
  v10 = Src;
  if ( !a3 )
    std::_Sort_unchecked<enum _Button *,std::less<void>>((char *)Src, v28, ((char *)v28 - (_BYTE *)Src) >> 2, 0);
  v11 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31[0] = a3;
  v12 = (char *)v9 - v10;
  if ( v12 >> 2 )
  {
    std::vector<enum _Button>::_Clear_and_reserve_geometric(&v32);
    v11 = (char *)v32;
  }
  memmove_0(v11, v10, v12);
  *(_QWORD *)&v33 = &v11[v12];
  v34 = *(_OWORD *)a2;
  v35 = *((_OWORD *)a2 + 1);
  v36 = *((_QWORD *)a2 + 4);
  std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
    &v25,
    **((_QWORD **)this + 4),
    *((_QWORD *)this + 4),
    v31);
  v14 = (_QWORD *)*((_QWORD *)this + 4);
  if ( (_QWORD *)v25 == v14 )
  {
    v15 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v15 + 1;
  }
  else
  {
    v15 = *(_DWORD *)(v25 + 32);
  }
  v24 = v15;
  if ( *((_QWORD *)this + 5) )
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase_unchecked(
      (char *)this + 32,
      *v14);
  v16 = *(_QWORD *)std::map<unsigned int,ComboButtonRegistration>::_Try_emplace<unsigned int const &,>(
                     (__int64 *)this + 4,
                     (__int64)v26,
                     &v24,
                     v13);
  *(_BYTE *)(v16 + 40) = v31[0];
  v17 = (void **)(v16 + 48);
  if ( (void **)(v16 + 48) != &v32 )
  {
    v18 = v32;
    v19 = v33 - (_QWORD)v32;
    if ( (__int64)(v33 - (_QWORD)v32) >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(v16 + 64) - *(_QWORD *)(v16 + 48)) >> 2) )
      std::vector<enum _Button>::_Clear_and_reserve_geometric(v16 + 48);
    v20 = (char *)*v17;
    memmove_0(*v17, v18, v19);
    *(_QWORD *)(v16 + 56) = &v20[v19];
  }
  *(_OWORD *)(v16 + 72) = v34;
  *(_OWORD *)(v16 + 88) = v35;
  *(_QWORD *)(v16 + 104) = v36;
  v21 = ButtonRecognizer::OnComboButtonRegistryComplete(this, v24, a2);
  v22 = v21;
  if ( v21 >= 0 )
    v22 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v21);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v32);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&Src);
  return v22;
}
