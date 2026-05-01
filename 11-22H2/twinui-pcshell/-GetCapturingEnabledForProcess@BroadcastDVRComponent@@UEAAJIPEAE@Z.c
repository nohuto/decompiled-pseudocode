/*
 * XREFs of ?GetCapturingEnabledForProcess@BroadcastDVRComponent@@UEAAJIPEAE@Z @ 0x18003EFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetCapturingEnabledForProcess(BroadcastDVRComponent *this, int a2, bool *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  std::_Ref_count_base *v9; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    *a3 = 1;
    v6 = **((_QWORD **)this + 33);
    v14 = v6;
    while ( v6 != *((_QWORD *)this + 33) )
    {
      v7 = *(_QWORD *)(v6 + 48);
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v8 = *(_QWORD *)(v6 + 40);
      v9 = *(std::_Ref_count_base **)(v6 + 48);
      dwProcessId = 0;
      GetWindowThreadProcessId(*(HWND *)v8, &dwProcessId);
      if ( a2 == dwProcessId )
      {
        *a3 = (*(_DWORD *)(v8 + 56) & 0x80) != 0;
        if ( v9 )
          std::_Ref_count_base::_Decref(v9);
        return 0LL;
      }
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v14);
      v6 = v14;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL,
      v11);
    return 2147500035LL;
  }
}
