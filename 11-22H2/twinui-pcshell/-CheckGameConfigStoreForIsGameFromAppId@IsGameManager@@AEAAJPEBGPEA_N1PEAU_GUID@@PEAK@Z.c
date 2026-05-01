/*
 * XREFs of ?CheckGameConfigStoreForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_N1PEAU_GUID@@PEAK@Z @ 0x180039770
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x1803DF010 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 */

__int64 __fastcall IsGameManager::CheckGameConfigStoreForIsGameFromAppId(
        IsGameManager *this,
        const unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        struct _GUID *a5,
        unsigned int *a6)
{
  int IsEnabledInGameConfigStore; // ebx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _GUID v15; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v14[0] = 0;
  *a3 = 0;
  *a4 = 0;
  v16 = (struct _GUID)xmmword_180834B18;
  *a5 = (struct _GUID)xmmword_180834B18;
  *a6 = 0;
  IsEnabledInGameConfigStore = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct _GUID *))(**((_QWORD **)this + 2) + 40LL))(
                                 *((_QWORD *)this + 2),
                                 a2,
                                 &v16);
  if ( IsEnabledInGameConfigStore >= 0 )
  {
    v15 = v16;
    IsEnabledInGameConfigStore = IsGameManager::IsEnabledInGameConfigStore(this, &v15, a3, a4, v14);
    if ( IsEnabledInGameConfigStore >= 0 )
    {
      if ( !v14[0] )
      {
        v11 = *((_QWORD *)this + 2);
        v14[0] = 1;
        v15 = v16;
        v12 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, _QWORD, unsigned int *))(*(_QWORD *)v11 + 72LL))(
                v11,
                &v15,
                0LL,
                v14);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4C1,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v12,
            4);
      }
      v13 = v14[0];
      *a5 = v16;
      *a6 = v13;
    }
  }
  return (unsigned int)IsEnabledInGameConfigStore;
}
