/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@?$vector@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@QEAAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@1@QEAU21@$$QEAU21@@Z @ 0x18016D884
 * Callers:
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@AEAAXQEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@2@_K1@Z @ 0x18016D970 (-_Change_array@-$vector@U-$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std.c)
 */

_QWORD *__fastcall std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  _QWORD *v13; // r10
  _QWORD *v14; // r14
  char *v15; // r8
  char *v16; // rcx
  _QWORD *v17; // rdx
  char *v19; // rdx
  signed __int64 v20; // rcx

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6];
  *v14 = *a3;
  v15 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( v4 == v15 )
  {
    while ( v16 != v15 )
    {
      *v17++ = *(_QWORD *)v16;
      v16 += 8;
    }
  }
  else
  {
    while ( v16 != v4 )
    {
      *v17++ = *(_QWORD *)v16;
      v16 += 8;
    }
    v19 = a1[1];
    if ( v4 != v19 )
    {
      v20 = (char *)(v14 + 1) - v4;
      do
      {
        *(_QWORD *)&v4[v20] = *(_QWORD *)v4;
        v4 += 8;
      }
      while ( v4 != v19 );
    }
  }
  std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Change_array(
    a1,
    v13,
    v9,
    v8);
  return v14;
}
