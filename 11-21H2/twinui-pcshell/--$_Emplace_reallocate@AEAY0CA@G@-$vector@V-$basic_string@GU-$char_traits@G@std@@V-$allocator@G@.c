/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAY0CA@G@Z @ 0x180327AD4
 * Callers:
 *     ?MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180334C90 (-MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803295BC (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18033B9FC (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x18033BD14 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

char *__fastcall std::vector<std::wstring>::_Emplace_reallocate<unsigned short (&)[32]>(
        __int64 *a1,
        __int64 a2,
        _WORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  size_t size_of; // rax
  char *v10; // rsi
  char *v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  v17 = v7 + 1;
  v8 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<32>(v8);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = &v10[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  try
  {
    std::wstring::wstring(v11, a3);
    v16 = (__int64)v11;
    v12 = a1[1];
    v13 = v10;
    v14 = *a1;
    if ( a2 != v12 )
    {
      std::_Uninitialized_move<std::wstring *>(v14, a2, v10);
      v16 = (__int64)v10;
      v13 = v11 + 32;
      v12 = a1[1];
      v14 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v14, v12, v13);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v16, (__int64)(v11 + 32));
    std::_Deallocate<16,0>(v10, 32 * v8);
    throw;
  }
  std::vector<std::wstring>::_Change_array(a1, v10, v17, v8, v8, v10);
  return v11;
}
