/*
 * XREFs of ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801F283C
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801F1CE0 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801F3020 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801EF0E4 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x1801F0564 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--ComPtr.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801F0790 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801F11E4 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801F1344 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801F13B8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801F3140 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotKeyProcessor::RemoveClientRegistration(
        HotKeyProcessor *this,
        struct HotkeyClientRegistration *a2)
{
  unsigned int v4; // esi
  _QWORD **v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  _QWORD *v9; // rbx
  int v10; // eax
  ULONG_PTR v11; // r8
  int v13; // eax
  _QWORD *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rcx
  _QWORD **v17; // rcx
  _QWORD *v18; // r14
  _QWORD *v19; // rdi
  _QWORD *v20; // [rsp+20h] [rbp-10h] BYREF
  HotKeyProcessor *v21; // [rsp+28h] [rbp-8h]
  ULONG_PTR retaddr; // [rsp+68h] [rbp+38h]
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF
  __int64 v24; // [rsp+80h] [rbp+50h] BYREF
  __int64 v25; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v25 = 0LL;
  if ( a2 )
  {
    v5 = (_QWORD **)*((_QWORD *)this + 3);
    v20 = a2;
    v21 = this;
    v6 = (_QWORD *)*std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___(
                      &v23,
                      *v5,
                      v5,
                      (__int64)&v20);
    if ( v6 != v5 )
    {
      v7 = (_QWORD *)v6[1];
      *v7 = v5;
      v5[1] = v7;
      v8 = 0LL;
      do
      {
        v9 = (_QWORD *)*v6;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v6 + 2);
        std::_Deallocate<16,0>(v6, 0x18uLL);
        v6 = v9;
        ++v8;
      }
      while ( v9 != v5 );
      *((_QWORD *)this + 4) -= v8;
    }
    v10 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 13,
            &v25);
    v4 = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v11 = 1108LL;
LABEL_10:
      FailFastWithHR(v4, retaddr, v11);
      goto LABEL_11;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v25 + 64LL))(
            v25,
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v4 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      v11 = 1109LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)a2 + 13);
    v14 = (_QWORD *)((char *)this + 40);
    v15 = **((_QWORD **)this + 5);
    v24 = v15;
    while ( v15 != *v14 )
    {
      LODWORD(v23) = 0;
      std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v20, (_QWORD ***)(v15 + 40));
      HotKeyProcessor::CleanupClientHotKeys(v16, (__int64)a2, &v20, &v23);
      if ( v21 )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v24);
        v15 = v24;
      }
      else
      {
        v15 = std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::_Erase_unchecked(
                v14,
                v15);
        v24 = v15;
      }
      v17 = (_QWORD **)v20;
      *(_QWORD *)v20[1] = 0LL;
      v18 = *v17;
      if ( *v17 )
      {
        do
        {
          v19 = (_QWORD *)*v18;
          std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v18 + 2));
          std::_Deallocate<16,0>(v18, 0x20uLL);
          v18 = v19;
        }
        while ( v19 );
      }
      std::_Deallocate<16,0>(v20, 0x20uLL);
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
  return v4;
}
