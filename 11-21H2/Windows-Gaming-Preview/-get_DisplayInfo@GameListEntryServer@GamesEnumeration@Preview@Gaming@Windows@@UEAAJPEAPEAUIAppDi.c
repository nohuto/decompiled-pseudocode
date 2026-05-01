/*
 * XREFs of ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x18002DD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C9E0 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_DisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  struct Windows::ApplicationModel::IAppDisplayInfo *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( *((_QWORD *)this + 26)
    || (*a2 = 0LL,
        v6 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo(this, v5),
        v7 = v6,
        v6 >= 0) )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    v9 = (struct Windows::ApplicationModel::IAppDisplayInfo *)*((_QWORD *)this + 26);
    if ( v9 )
    {
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)v9 + 8LL))(v9);
      v9 = (struct Windows::ApplicationModel::IAppDisplayInfo *)*((_QWORD *)this + 26);
    }
    *a2 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AB,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v7;
  }
}
