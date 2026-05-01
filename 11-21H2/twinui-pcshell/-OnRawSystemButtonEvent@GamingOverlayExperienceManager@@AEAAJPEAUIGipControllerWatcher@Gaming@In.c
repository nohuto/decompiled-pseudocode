/*
 * XREFs of ?OnRawSystemButtonEvent@GamingOverlayExperienceManager@@AEAAJPEAUIGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@345@@Z @ 0x180335890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x180332B24 (-HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnRawSystemButtonEvent(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Gaming::IGipControllerWatcher *a2,
        struct Windows::Internal::Gaming::IGipSystemButtonEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Gaming::IGipSystemButtonEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
           a3,
           &v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1136,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Gaming::IGipSystemButtonEventArgs *, unsigned __int64 *))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1139,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    GamingOverlayExperienceManager::HandleButtonEvent(this, (v11 & 2) != 0, v11 & 1, v12);
  }
  return 0LL;
}
