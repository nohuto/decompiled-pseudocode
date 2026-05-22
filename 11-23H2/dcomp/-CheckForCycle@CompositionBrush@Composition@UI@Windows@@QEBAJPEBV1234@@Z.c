/*
 * XREFs of ?CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z @ 0x18004659C
 * Callers:
 *     ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0 (-SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIComp.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180046C64 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA?AW4CycleCheckResult@1234@AEAV?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@@Z @ 0x180046DE0 (-CheckForCycleRecursive@CompositionBrush@Composition@UI@Windows@@AEBA-AW4CycleCheckResult@1234@A.c)
 *     ??$emplace@PEBVCompositionBrush@Composition@UI@Windows@@@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@std@@_N@1@$$QEAPEBVCompositionBrush@Composition@UI@Windows@@@Z @ 0x180047A80 (--$emplace@PEBVCompositionBrush@Composition@UI@Windows@@@-$_Hash@V-$_Uset_traits@PEBVComposition.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 *     ??1?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@QEAA@XZ @ 0x180157970 (--1-$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U-$hash@PEBVCompositionBrush@Com.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBrush::CheckForCycle(
        Windows::UI::Composition::CompositionBrush *this,
        const struct Windows::UI::Composition::CompositionBrush *a2)
{
  SIZE_T size_of; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  int v8; // eax
  void *v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v15; // rdx
  _BYTE v16[16]; // [rsp+20h] [rbp-50h] BYREF
  float v17; // [rsp+30h] [rbp-40h] BYREF
  void *v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  void *v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned __int64 v25; // [rsp+98h] [rbp+28h] BYREF
  void *v26; // [rsp+A0h] [rbp+30h] BYREF

  if ( !a2 )
    return 0LL;
  v19 = 0LL;
  size_of = std::_Get_size_of_n<24>(1LL);
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  v17 = FLOAT_1_0;
  v18 = v5;
  v22 = 7LL;
  v23 = 8LL;
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  v20 = v6;
  v7 = v6 + 16;
  *(_QWORD *)&v21 = v6 + 16;
  *((_QWORD *)&v21 + 1) = v6 + 16;
  while ( v6 != v7 )
    *v6++ = v5;
  v25 = (unsigned __int64)this;
  std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::emplace<Windows::UI::Composition::CompositionBrush const *>(
    &v17,
    v16,
    &v25);
  v8 = Windows::UI::Composition::CompositionBrush::CheckForCycleRecursive(a2, &v17);
  if ( v8 == 1 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(1LL, L"value");
    v15 = 36LL;
  }
  else
  {
    if ( v8 != 2 )
    {
      v9 = v20;
      v26 = v20;
      v10 = (v21 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL;
      v25 = v10;
      if ( v10 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v26, &v25);
        v10 = v25;
        v9 = v26;
      }
      operator delete(v9, v10);
      v20 = 0LL;
      v11 = (_QWORD **)v18;
      v21 = 0LL;
      **((_QWORD **)v18 + 1) = 0LL;
      v12 = *v11;
      if ( v12 )
      {
        do
        {
          v13 = (_QWORD *)*v12;
          operator delete(v12, 0x18uLL);
          v12 = v13;
        }
        while ( v13 );
      }
      operator delete(v18, 0x18uLL);
      return 0LL;
    }
    Windows::UI::Composition::OriginateInvalidArgument(2LL, L"value");
    v15 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbrush.cpp",
    (const char *)0x80070057LL);
  std::unordered_set<Windows::UI::Composition::CompositionBrush const *>::~unordered_set<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>,std::allocator<Windows::UI::Composition::CompositionBrush const *>>(&v17);
  return 2147942487LL;
}
