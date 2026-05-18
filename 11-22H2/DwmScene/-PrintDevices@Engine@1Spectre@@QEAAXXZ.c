/*
 * XREFs of ?PrintDevices@Engine@1Spectre@@QEAAXXZ @ 0x1800358C4
 * Callers:
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::Engine::PrintDevices(Spectre::Engine::Engine *this)
{
  int DeviceCount; // eax
  unsigned int i; // ebx
  _QWORD *v4; // rdi
  const char *v5; // rax
  const char *v6; // r15
  const char *v7; // rax
  const char *v8; // rsi
  const char *v9; // rax
  const char *v10; // r14
  int ID; // eax
  const char *v12; // rdx
  _QWORD *v13; // [rsp+50h] [rbp-79h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-71h]
  _BYTE v15[16]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v17[4]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v18[4]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v19[4]; // [rsp+D0h] [rbp+7h] BYREF

  Trace::LevelSettingsWrapper::Output(&gTraceLevelsNativeRenderer_Engine, 3, (const char *)word_180106082);
  DeviceCount = Spectre::Engine::Engine::GetDeviceCount(this);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "Engine has %u device(s) attached:",
    DeviceCount);
  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v15);
  for ( i = 0; i < (unsigned int)Spectre::Engine::Engine::GetDeviceCount(this); ++i )
  {
    Spectre::Engine::Engine::GetDevice(this, &v13, i);
    v4 = v13;
    v5 = (const char *)Spectre::Utils::LexicalCast<std::string,std::wstring>(v19, v13 + 26);
    v6 = v5;
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v6 = *(const char **)v5;
    v7 = (const char *)Spectre::Utils::LexicalCast<std::string,std::wstring>(v18, v4 + 18);
    v8 = v7;
    if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
      v8 = *(const char **)v7;
    v9 = (const char *)Spectre::Utils::LexicalCast<std::string,std::wstring>(v17, v4 + 10);
    v10 = v9;
    if ( *((_QWORD *)v9 + 3) >= 0x10uLL )
      v10 = *(const char **)v9;
    Spectre::Utils::LexicalCast<std::string,std::wstring>(v16, v4 + 14);
    ID = Spectre::Engine::RenderDevice::GetID((__int64)v4);
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Engine,
      3,
      "    index %u      id %-3u    %-20s     %-30s   level=%-10s   profile=%-8s",
      i,
      ID,
      v12,
      v10,
      v8,
      v6);
    std::string::_Tidy_deallocate((__int64)v16);
    std::string::_Tidy_deallocate((__int64)v17);
    std::string::_Tidy_deallocate((__int64)v18);
    std::string::_Tidy_deallocate((__int64)v19);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "-----------------------------------------------------------------------------------");
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v15);
}
