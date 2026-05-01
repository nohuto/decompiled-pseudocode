/*
 * XREFs of ?GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z @ 0x1800C4B48
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1800C4710 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C5230 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetAppID(
        PenWorkspace::Discover::RecentAppsCache *this,
        DWORD a2,
        unsigned __int16 **a3)
{
  wil::details *v6; // rcx
  char *v7; // rbx
  unsigned __int16 **v8; // r8
  signed int LastErrorFailHr; // edi

  v7 = (char *)OpenProcess(0x410u, 0, a2);
  if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( (int)CallerIdentity::GetProcessAppId(v7, a3, v8) >= 0
      || (LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 48LL))(
                              *((_QWORD *)this + 23),
                              a2,
                              a3,
                              0LL,
                              0LL,
                              0LL),
          LastErrorFailHr >= 0) )
    {
      LastErrorFailHr = 0;
    }
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
  }
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)LastErrorFailHr;
}
