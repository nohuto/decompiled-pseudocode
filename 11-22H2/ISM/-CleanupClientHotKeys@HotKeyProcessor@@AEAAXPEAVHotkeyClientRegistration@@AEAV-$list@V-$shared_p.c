/*
 * XREFs of ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801FE074
 * Callers:
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801FF56C (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801FFA80 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801FD37C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801FFF10 (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

__int64 __fastcall HotKeyProcessor::CleanupClientHotKeys(__int64 a1, __int64 a2, _QWORD **a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  *a4 = 0;
  v4 = *a3;
  v9[0] = &v12;
  v9[1] = a4;
  v10[0] = &v12;
  v6 = (_QWORD *)*v4;
  v10[1] = a4;
  v10[2] = v9;
  v7 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___(
         &v11,
         v6,
         v4,
         (__int64)v10);
  return std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(a3, *v7, v4);
}
