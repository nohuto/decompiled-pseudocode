/*
 * XREFs of ??0SpectreException@Utils@Spectre@@QEAA@JAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C3DC
 * Callers:
 *     ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001E3A4 (--0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::SpectreException::SpectreException(__int64 a1, int a2, const char *a3, char a4)
{
  const char *v5; // rbx
  const char *v8; // rax
  __int64 v9; // rdx

  v5 = a3;
  v8 = a3;
  if ( *((_QWORD *)a3 + 3) >= 0x10uLL )
    v8 = *(const char **)a3;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  std::string::string((_QWORD *)(a1 + 16), (__int64)a3);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  if ( a4 )
  {
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const char **)v5;
    v9 = 4LL;
  }
  else
  {
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const char **)v5;
    v9 = 3LL;
  }
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsSmartThrow,
    v9,
    "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x",
    v5,
    a2);
  return a1;
}
