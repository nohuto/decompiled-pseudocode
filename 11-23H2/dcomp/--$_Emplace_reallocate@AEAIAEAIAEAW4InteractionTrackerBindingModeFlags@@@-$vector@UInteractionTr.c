/*
 * XREFs of ??$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@?$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V?$allocator@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAU234567@AEAI1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801878EC
 * Callers:
 *     ?SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIW4InteractionBindingAxisModes@2345@@Z @ 0x180187BFC (-SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x18017821C (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V?$allocator@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@_K1@Z @ 0x180187D40 (-_Change_array@-$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@.c)
 */

_DWORD *__fastcall std::vector<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem>::_Emplace_reallocate<unsigned int &,unsigned int &,enum InteractionTrackerBindingModeFlags &>(
        const char *a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        int *a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // r10
  int v20; // edx
  _DWORD *v21; // r14
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  char *v28; // rdx

  v5 = a2;
  v6 = 0x1555555555555555LL;
  v7 = (unsigned __int128)((a2 - *(_QWORD *)a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v11 = ((unsigned __int64)v7 >> 63) + (v7 >> 1);
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2);
  if ( v12 == 0x1555555555555555LL )
    std::_Dwm_Xlength_error(a1);
  v13 = v12 + 1;
  v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 2);
  v15 = v14 >> 1;
  if ( v14 <= 0x1555555555555555LL - (v14 >> 1) )
  {
    v6 = v15 + v14;
    if ( v15 + v14 < v13 )
      v6 = v13;
  }
  size_of = std::_Get_size_of_n<12>(v6);
  v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v18 = *a4;
  v19 = v17;
  v20 = *a5;
  v21 = (_DWORD *)(v17 + 12 * v11);
  *v21 = *a3;
  v21[1] = v18;
  v21[2] = v20;
  v22 = (_QWORD *)v17;
  v23 = *((_QWORD *)a1 + 1);
  v24 = *(_QWORD *)a1;
  if ( v5 == v23 )
  {
    while ( v24 != v23 )
    {
      *v22 = *(_QWORD *)v24;
      v22 = (_QWORD *)((char *)v22 + 12);
      v25 = *(_DWORD *)(v24 + 8);
      v24 += 12LL;
      *((_DWORD *)v22 - 1) = v25;
    }
  }
  else
  {
    while ( v24 != v5 )
    {
      *v22 = *(_QWORD *)v24;
      v22 = (_QWORD *)((char *)v22 + 12);
      v26 = *(_DWORD *)(v24 + 8);
      v24 += 12LL;
      *((_DWORD *)v22 - 1) = v26;
    }
    v27 = *((_QWORD *)a1 + 1);
    if ( v5 != v27 )
    {
      v28 = (char *)v21 - v5;
      do
      {
        *(_QWORD *)&v28[v5 + 12] = *(_QWORD *)v5;
        *(_DWORD *)&v28[v5 + 20] = *(_DWORD *)(v5 + 8);
        v5 += 12LL;
      }
      while ( v5 != v27 );
    }
  }
  std::vector<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem>::_Change_array(
    a1,
    v19,
    v13,
    v6);
  return v21;
}
