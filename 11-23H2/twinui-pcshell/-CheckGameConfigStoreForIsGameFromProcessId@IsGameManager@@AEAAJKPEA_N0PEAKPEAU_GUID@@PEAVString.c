/*
 * XREFs of ?CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString@Internal@Windows@@@Z @ 0x180039818
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DECB8 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x1803DF010 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 */

__int64 __fastcall IsGameManager::CheckGameConfigStoreForIsGameFromProcessId(
        IsGameManager *this,
        unsigned int a2,
        bool *a3,
        bool *a4,
        unsigned int *a5,
        struct _GUID *a6,
        struct Windows::Internal::String *a7)
{
  int IsEnabledInGameConfigStore; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int StringFromGameConfigStore; // eax
  unsigned int v16; // eax
  int v17; // [rsp+20h] [rbp-58h]
  unsigned int v18[4]; // [rsp+30h] [rbp-48h] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-38h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  *a3 = 0;
  *a4 = 0;
  v20 = (struct _GUID)xmmword_180834B18;
  v18[0] = 0;
  *a6 = (struct _GUID)xmmword_180834B18;
  *a5 = 0;
  Windows::Internal::String::Release(a7);
  IsEnabledInGameConfigStore = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**((_QWORD **)this + 2) + 32LL))(
                                 *((_QWORD *)this + 2),
                                 a2,
                                 &v20);
  if ( IsEnabledInGameConfigStore >= 0 )
  {
    v19 = v20;
    IsEnabledInGameConfigStore = IsGameManager::IsEnabledInGameConfigStore(this, &v19, a3, a4, v18);
    if ( IsEnabledInGameConfigStore >= 0 )
    {
      if ( !v18[0] )
      {
        v13 = *((_QWORD *)this + 2);
        v18[0] = 1;
        v19 = v20;
        v17 = 4;
        v14 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, _QWORD, unsigned int *))(*(_QWORD *)v13 + 72LL))(
                v13,
                &v19,
                0LL,
                v18);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x478,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v14,
            4);
      }
      v19 = v20;
      StringFromGameConfigStore = IsGameManager::GetStringFromGameConfigStore(this, &v19, 15LL, a7);
      if ( StringFromGameConfigStore < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47D,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)StringFromGameConfigStore,
          v17);
      v16 = v18[0];
      *a6 = v20;
      *a5 = v16;
    }
  }
  return (unsigned int)IsEnabledInGameConfigStore;
}
