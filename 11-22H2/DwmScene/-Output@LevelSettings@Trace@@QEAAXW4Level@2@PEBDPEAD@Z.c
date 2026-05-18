/*
 * XREFs of ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938
 * Callers:
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _vsnprintf_s @ 0x18000C1E8 (_vsnprintf_s.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$sprintf_s@$0IEA@@@YAHAEAY0IEA@DPEBDZZ @ 0x18001CEB0 (--$sprintf_s@$0IEA@@@YAHAEAY0IEA@DPEBDZZ.c)
 *     ??B?$atomic@H@std@@QEBAHXZ @ 0x18001D348 (--B-$atomic@H@std@@QEBAHXZ.c)
 *     ?GetAreaName@LevelSettings@Trace@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18001D4F4 (-GetAreaName@LevelSettings@Trace@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     _anonymous_namespace_::GetSeverityString @ 0x18001D6AC (_anonymous_namespace_--GetSeverityString.c)
 *     _anonymous_namespace_::GetTimeString @ 0x18001D6C8 (_anonymous_namespace_--GetTimeString.c)
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 *     ?PrintLogMessage@Trace@@YAXPEBD@Z @ 0x18001FB00 (-PrintLogMessage@Trace@@YAXPEBD@Z.c)
 *     _alloca_probe @ 0x1800E3880 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Trace::LevelSettings::Output(__int64 a1, int a2)
{
  const char *v4; // r8
  va_list ArgList; // r9
  int v6; // r14d
  int v7; // r13d
  int v8; // r12d
  const char *AreaName; // rax
  const char *v10; // rdi
  char *SeverityString; // r15
  const char *TimeString; // rax
  const char *v13; // rdx
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  _QWORD v15[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[5]; // [rsp+68h] [rbp-98h] BYREF
  CHAR OutputString[2112]; // [rsp+90h] [rbp-70h] BYREF
  char Buffer[2048]; // [rsp+8D0h] [rbp+7D0h] BYREF

  if ( (int)std::atomic<int>::operator int() <= 0 )
  {
    v6 = *(_DWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)a1;
    vsnprintf_s(Buffer, 0x800uLL, 0xFFFFFFFFFFFFFFFFuLL, v4, ArgList);
    CurrentThreadId = GetCurrentThreadId();
    AreaName = (const char *)Trace::LevelSettings::GetAreaName(a1, v15);
    v10 = AreaName;
    if ( *((_QWORD *)AreaName + 3) >= 0x10uLL )
      v10 = *(const char **)AreaName;
    SeverityString = anonymous_namespace_::GetSeverityString(a2);
    TimeString = (const char *)anonymous_namespace_::GetTimeString(v16);
    if ( *((_QWORD *)TimeString + 3) >= 0x10uLL )
      TimeString = *(const char **)TimeString;
    sprintf_s<2112>(OutputString, "[%s][%s][%s][0x%.8x] %s\n", TimeString, SeverityString, v10, CurrentThreadId, Buffer);
    std::string::_Tidy_deallocate((__int64)v16);
    std::string::_Tidy_deallocate((__int64)v15);
    if ( a2 >= v7 )
    {
      std::string::string(v16, (__int64)OutputString);
      std::string::string(v15, *(_QWORD *)(a1 + 16));
      Trace::NotifyHandlers((__int64)v15, a2, (__int64)v16);
      std::string::_Tidy_deallocate((__int64)v15);
      std::string::_Tidy_deallocate((__int64)v16);
    }
    if ( a2 >= v6 )
      Trace::PrintLogMessage((Trace *)OutputString, v13);
    OutputDebugStringA(OutputString);
    if ( a2 >= v8 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
