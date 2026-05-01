/*
 * XREFs of ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x180039C7C
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x1803DF210 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsGameManager::CheckKGLForIsGameFromAppId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        unsigned int a4,
        bool *a5,
        struct _GUID *a6)
{
  RTL_SRWLOCK *v10; // rbx
  PVOID Ptr; // rcx
  int v12; // eax
  IsGameManager *v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // edi
  int IsGameEnabled; // eax
  __int64 v18; // rax
  int updated; // eax
  int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+20h] [rbp-88h]
  struct KnownGameList::IGameEntry *v22[2]; // [rsp+40h] [rbp-68h] BYREF
  struct _GUID v23; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v10 = this + 4;
  v22[1] = (struct KnownGameList::IGameEntry *)&this[4];
  AcquireSRWLockShared(this + 4);
  v22[0] = 0LL;
  *a5 = 0;
  Ptr = this[3].Ptr;
  if ( Ptr )
  {
    v12 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, struct KnownGameList::IGameEntry **))(*(_QWORD *)Ptr + 56LL))(
            Ptr,
            a2,
            v22);
    v14 = v12;
    v15 = -2147023728;
    if ( v12 != -2147023728 )
    {
      if ( v12 >= 0 )
      {
        IsGameEnabled = IsGameManager::IsGameEnabled(v13, v22[0], a5);
        v15 = IsGameEnabled;
        if ( IsGameEnabled >= 0 )
        {
          v18 = *(_QWORD *)&a3->Data1;
          if ( !*(_QWORD *)&a3->Data1 )
            v18 = *(_QWORD *)a3->Data4;
          if ( !v18 )
          {
            v23 = *a3;
            updated = IsGameManager::UpdateGameConfigStoreFromKGL((IsGameManager *)this, v22[0], &v23, a4, 0, 0LL, a6);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x4E7,
                (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                (const char *)(unsigned int)updated,
                v21);
          }
          v15 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4DE,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)IsGameEnabled,
            v20);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4DC,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v12,
          v20);
        v15 = v14;
      }
    }
  }
  else
  {
    v15 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
  ReleaseSRWLockShared(v10);
  return v15;
}
