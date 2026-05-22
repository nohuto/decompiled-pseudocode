/*
 * XREFs of ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801D2794
 * Callers:
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801D490C (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801D4E10 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801D17E0 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801D5240 (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

__int64 __fastcall HotKeyProcessor::CleanupClientHotKeys(__int64 a1, __int64 a2, _QWORD **a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+30h] [rbp-40h]
  _QWORD *v11; // [rsp+40h] [rbp-30h]
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+80h] [rbp+10h] BYREF
  __int64 v15; // [rsp+88h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0;
  v4 = *a3;
  v9[0] = &v15;
  *((_QWORD *)&v10 + 1) = a4;
  *(_QWORD *)&v10 = &v15;
  v9[1] = a4;
  v6 = (_QWORD *)*v4;
  v11 = v9;
  v13 = v9;
  v12 = v10;
  v7 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___(
         &v14,
         v6,
         v4,
         (__int64)&v12);
  return std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(a3, *v7, v4);
}
