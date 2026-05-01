/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@wistd@@@wistd@@QEAA@XZ @ 0x1803DDAB8
 * Callers:
 *     _IsGameManager::GetGlobalStringFromGameConfigStore_::_1_::dtor$0 @ 0x1803DEA2A (_IsGameManager--GetGlobalStringFromGameConfigStore_--_1_--dtor$0.c)
 *     _IsGameManager::GetStringFromGameConfigStore_::_1_::dtor$0 @ 0x1803DEF63 (_IsGameManager--GetStringFromGameConfigStore_--_1_--dtor$0.c)
 *     _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$0_0 @ 0x1803E1643 (_IsGameManager--UpdateGameConfigStoreFromKGL_--_1_--dtor$0_0.c)
 *     _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$2 @ 0x1803E165B (_IsGameManager--UpdateGameConfigStoreFromKGL_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<_GUID [0],wistd::default_delete<_GUID [0]>>::~unique_ptr<_GUID [0],wistd::default_delete<_GUID [0]>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete[](v1);
}
