/*
 * XREFs of ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803DA1AC
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUISwitchItemFilteredCollection@@@Z @ 0x1802322EC (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1803D7944 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0 (-GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMO.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_stringbuf<unsigned short>::str(__int64 a1, __int64 a2)
{
  const void *v4; // rbx
  unsigned __int64 v5; // rax

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    v4 = (const void *)std::basic_streambuf<unsigned short>::pbase(a1);
    v5 = std::basic_streambuf<unsigned short>::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    v4 = (const void *)std::basic_streambuf<unsigned short>::eback(a1);
    v5 = std::basic_streambuf<unsigned short>::egptr(a1);
LABEL_9:
    std::wstring::assign((char *)a2, v4, (__int64)(v5 - (_QWORD)v4) >> 1);
  }
  return a2;
}
