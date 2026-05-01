/*
 * XREFs of ?CheckKGLForIsGameFromProcessId@IsGameManager@@AEAAJKU_GUID@@KPEA_NPEAVString@Internal@Windows@@PEAU2@@Z @ 0x180039AE0
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x1803DF210 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803E01B0 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsGameManager::CheckKGLForIsGameFromProcessId(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int a4,
        bool *a5,
        struct Windows::Internal::String *a6,
        struct _GUID *a7)
{
  RTL_SRWLOCK *v11; // rbx
  unsigned int v12; // esi
  PVOID Ptr; // rcx
  IsGameManager *v14; // rcx
  int v15; // edi
  int v16; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int IsGameEnabled; // eax
  __int64 v21; // rax
  int updated; // eax
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+20h] [rbp-98h]
  struct KnownGameList::IGameEntry *v25; // [rsp+40h] [rbp-78h] BYREF
  struct _GUID *v26; // [rsp+48h] [rbp-70h]
  struct Windows::Internal::String *v27; // [rsp+50h] [rbp-68h]
  RTL_SRWLOCK *v28; // [rsp+58h] [rbp-60h]
  struct _GUID v29; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v27 = a6;
  v26 = a7;
  v11 = this + 4;
  v28 = this + 4;
  AcquireSRWLockShared(this + 4);
  v12 = 0;
  v25 = 0LL;
  *a5 = 0;
  Ptr = this[3].Ptr;
  if ( !Ptr )
  {
    v16 = -2147467261;
LABEL_3:
    v15 = v16;
LABEL_4:
    v12 = v15;
    goto LABEL_5;
  }
  v15 = (*(__int64 (__fastcall **)(PVOID, _QWORD, struct KnownGameList::IGameEntry **))(*(_QWORD *)Ptr + 48LL))(
          Ptr,
          a2,
          &v25);
  v16 = -2147023728;
  if ( v15 == -2147023728 || v15 == -2147024894 )
    goto LABEL_3;
  if ( v15 < 0 )
  {
    v18 = (unsigned int)v15;
    v19 = 1176LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v18,
      v23);
    goto LABEL_4;
  }
  IsGameEnabled = IsGameManager::IsGameEnabled(v14, v25, a5);
  v15 = IsGameEnabled;
  if ( IsGameEnabled < 0 )
  {
    v18 = (unsigned int)IsGameEnabled;
    v19 = 1178LL;
    goto LABEL_12;
  }
  v21 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v21 = *(_QWORD *)a3->Data4;
  if ( !v21 )
  {
    v29 = *a3;
    updated = IsGameManager::UpdateGameConfigStoreFromKGL((IsGameManager *)this, v25, &v29, a4, 0, v27, v26);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4A3,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated,
        v24);
    IsGameManager::SendAddGameToConfigStoreTelemetry((IsGameManager *)this, a2);
  }
LABEL_5:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  ReleaseSRWLockShared(v11);
  return v12;
}
