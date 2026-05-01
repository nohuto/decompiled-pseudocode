/*
 * XREFs of ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1804B68D8
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804B4664 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180711F60 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Get_buffer_view@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x1804B65F0 (-_Get_buffer_view@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AU_Buffer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_stringbuf<unsigned short>::str(__int64 a1, __int64 a2)
{
  void *Src[4]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  std::basic_stringbuf<unsigned short>::_Get_buffer_view(a1, (__int64)Src);
  if ( Src[0] )
    std::wstring::assign((char *)a2, Src[0], (unsigned __int64)Src[1]);
  return a2;
}
