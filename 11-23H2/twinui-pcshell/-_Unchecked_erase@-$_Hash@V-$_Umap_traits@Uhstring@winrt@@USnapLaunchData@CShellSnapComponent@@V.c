/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180222D18
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAAXXZ @ 0x1802230C0 (-clear@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V-$_Uhash_co.c)
 * Callees:
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAAXXZ @ 0x1802224A8 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapCo.c)
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18065CD90 (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 i; // r11
  __int64 v11; // r15
  __int64 v12; // rax
  bool v13; // bl
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r13
  bool v18; // bl
  _QWORD *v19; // rax
  _QWORD *v21; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-18h]
  __int64 v23; // [rsp+30h] [rbp-10h]
  __int64 v25; // [rsp+88h] [rbp+48h]
  __int64 v26; // [rsp+90h] [rbp+50h]

  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v23 = a2;
    v21 = a1 + 1;
    v22 = v6;
    v9 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
           a1,
           a2 + 16);
    v11 = 2 * (a1[6] & v9);
    v25 = *(_QWORD *)(v8 + 16 * (a1[6] & v9));
    v12 = *(_QWORD *)(v8 + 16 * (a1[6] & v9) + 8);
    v26 = v12;
    while ( 1 )
    {
      v13 = i == v12;
      std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Range_eraser::_Bump_erased(&v21);
      if ( v13 )
        break;
      i = v23;
      v12 = v26;
      if ( v23 == a3 )
      {
        if ( v25 == a2 )
          *(_QWORD *)(v8 + 8 * v11) = v23;
        goto LABEL_14;
      }
    }
    if ( v25 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v11) = v7;
      v6 = v7;
    }
    *(_QWORD *)(v8 + 8 * v11 + 8) = v6;
    for ( i = v23; i != a3; *(_QWORD *)(v8 + 8 * v16 + 8) = v7 )
    {
      v15 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
              v14,
              i + 16);
      v16 = 2 * (a1[6] & v15);
      v17 = *(_QWORD *)(v8 + 16 * (a1[6] & v15) + 8);
      while ( 1 )
      {
        v18 = i == v17;
        std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Range_eraser::_Bump_erased(&v21);
        i = v23;
        if ( v18 )
          break;
        if ( v23 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v16) = v23;
          goto LABEL_14;
        }
      }
      *(_QWORD *)(v8 + 8 * v16) = v7;
    }
LABEL_14:
    v19 = v22;
    *v22 = i;
    *(_QWORD *)(i + 8) = v19;
  }
  return a3;
}
