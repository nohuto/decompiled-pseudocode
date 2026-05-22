/*
 * XREFs of ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800863AC
 * Callers:
 *     ?OnWindowRemoved@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180085D60 (-OnWindowRemoved@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x180086504 (-ReparentWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18008402C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Move_unchecked@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@00@Z @ 0x18008420C (--$_Move_unchecked@PEAV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV-$ComPtr@UCUIWin.c)
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180084914 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180084958 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall CUIHierarchy::RemoveWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *i; // rbx
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 *j; // rdi
  __int64 *k; // rsi
  __int64 *v11; // rdi
  __int64 *v12; // rbp
  __int64 *m; // rsi
  __int64 v14; // rdi
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  for ( i = *(__int64 **)(a1 + 16); i != *(__int64 **)(a1 + 24); ++i )
  {
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(a2, i);
    if ( *(_QWORD *)(*a2 + 16) == a3 )
    {
      v7 = *(_QWORD *)(*a2 + 56);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 72);
        for ( j = *(__int64 **)(v7 + 64); j != (__int64 *)v8 && *(_QWORD *)(*j + 16) != a3; ++j )
          ;
        if ( j != (__int64 *)v8 )
        {
          for ( k = j + 1; k != (__int64 *)v8; ++k )
          {
            if ( *(_QWORD *)(*k + 16) != a3 )
              Microsoft::WRL::ComPtr<CUIWindow>::operator=(j++, k);
          }
          if ( j != (__int64 *)v8 )
          {
            v11 = (__int64 *)std::_Move_unchecked<Microsoft::WRL::ComPtr<CUIWindow> *,Microsoft::WRL::ComPtr<CUIWindow> *>(
                               v8,
                               *(_QWORD *)(v7 + 72),
                               (__int64)j);
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v11, *(__int64 **)(v7 + 72));
            *(_QWORD *)(v7 + 72) = v11;
          }
        }
      }
      v12 = *(__int64 **)(*a2 + 72);
      for ( m = *(__int64 **)(*a2 + 64); m != v12; ++m )
      {
        v16 = *m;
        v14 = v16;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v16);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(v14 + 56));
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
      }
      std::_Move_unchecked<Microsoft::WRL::ComPtr<CUIWindow> *,Microsoft::WRL::ComPtr<CUIWindow> *>(
        (__int64)(i + 1),
        *(_QWORD *)(a1 + 24),
        (__int64)i);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 24) - 8LL));
      *(_QWORD *)(a1 + 24) -= 8LL;
      return a2;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  }
  return a2;
}
