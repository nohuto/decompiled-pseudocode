/*
 * XREFs of ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801F2D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800A8048 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1801EF310 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1801EF828 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$_Assign_cast@AEAV?$shared_ptr@UHotKeyInfo@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801EFA4C (--$_Assign_cast@AEAV-$shared_ptr@UHotKeyInfo@@@std@@V-$_List_unchecked_const_iterator@V-$_List_v.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801F0254 (--$_Try_emplace@AEBK$$V@-$map@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_p.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801F0790 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801F11E4 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801F1344 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801F13B8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801F1480 (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801F3140 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@KV-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator.c)
 *     ?reset@?$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ @ 0x1801F32C8 (-reset@-$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall HotKeyProcessor::UnregisterHotKey(__int64 *a1, __int64 a2, int a3, int a4)
{
  int RegisteredClient; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rcx
  _QWORD **v17; // rcx
  _QWORD **v18; // rcx
  _QWORD *v19; // rsi
  _QWORD *v20; // rbx
  int v22; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+54h] [rbp-15h] BYREF
  struct HotkeyClientRegistration *v24; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v26[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v27; // [rsp+80h] [rbp+17h]
  ULONG_PTR retaddr; // [rsp+C8h] [rbp+5Fh]
  int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v30; // [rsp+E0h] [rbp+77h] BYREF
  int v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v31 = 0;
  v24 = 0LL;
  v30 = a3 & 0xF | ((unsigned __int16)a4 << 16);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient(
                       (HotKeyProcessor *)a1,
                       (const struct MessageObjectID *)a2,
                       &v24);
  v12 = RegisteredClient;
  if ( RegisteredClient >= 0 )
  {
    if ( v24 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
        a1 + 5,
        (__int64)v26,
        &v30);
      v13 = v27;
      if ( !*(_BYTE *)(v27 + 25) && v30 >= *(_DWORD *)(v27 + 32) && v27 != a1[5] )
      {
        v14 = std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned long const &,>(
                a1 + 5,
                (__int64)v25,
                &v30);
        std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(
          v26,
          (_QWORD ***)(*(_QWORD *)v14 + 40LL));
        HotKeyProcessor::CleanupClientHotKeys(v15, (__int64)v24, v26, &v31);
        v16 = a1 + 5;
        if ( v26[1] )
        {
          v17 = (_QWORD **)(*(_QWORD *)std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned long const &,>(
                                         v16,
                                         (__int64)v25,
                                         &v30)
                          + 40LL);
          if ( v17 != v26 )
            std::list<std::shared_ptr<HotKeyInfo>>::_Assign_cast<std::shared_ptr<HotKeyInfo> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
              (__int64)v17,
              *(_QWORD **)v26[0],
              v26[0]);
        }
        else
        {
          std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::_Erase_unchecked(
            v16,
            v13);
        }
        v18 = (_QWORD **)v26[0];
        **((_QWORD **)v26[0] + 1) = 0LL;
        v19 = *v18;
        if ( *v18 )
        {
          do
          {
            v20 = (_QWORD *)*v19;
            std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v19 + 2));
            std::_Deallocate<16,0>(v19, 0x20uLL);
            v19 = v20;
          }
          while ( v20 );
        }
        std::_Deallocate<16,0>(v26[0], 0x20uLL);
      }
    }
    if ( v31 )
    {
      if ( (unsigned int)dword_180266508 > 5
        && (qword_180266518 & 0x20000) != 0
        && (qword_180266520 & 0x20000) == qword_180266520 )
      {
        v26[0] = *(_QWORD **)a2;
        v22 = *(_DWORD *)(a2 + 8);
        v29 = a4;
        v23 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_1802297D0,
          v10,
          v11,
          (__int64)&v22,
          (__int64)v26,
          (__int64)&v23,
          (__int64)&v29);
      }
      std::shared_ptr<HotKeyInfo>::reset(a1 + 40);
    }
    else
    {
      v12 = 1419;
      if ( (unsigned int)dword_180266508 > 5
        && (qword_180266518 & 0x20000) != 0
        && (qword_180266520 & 0x20000) == qword_180266520 )
      {
        v25[0] = *(_QWORD *)a2;
        v23 = *(_DWORD *)(a2 + 8);
        v26[0] = "UnregisterHotKey failed because the HotKey was not registered.";
        v29 = a4;
        v22 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_180229A8E,
          v10,
          v11,
          (const unsigned __int16 **)v26,
          (__int64)&v23,
          (__int64)v25,
          (__int64)&v22,
          (__int64)&v29);
      }
    }
  }
  else
  {
    if ( RegisteredClient == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    FailFastWithHR(v12, retaddr, 0x165uLL);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
  return v12;
}
