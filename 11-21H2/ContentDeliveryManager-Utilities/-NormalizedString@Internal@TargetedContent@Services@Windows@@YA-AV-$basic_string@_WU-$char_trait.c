/*
 * XREFs of ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A5E7C
 * Callers:
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A55A0 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AB6C4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800AF814 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall Windows::Services::TargetedContent::Internal::NormalizedString(
        unsigned __int64 *a1,
        char *a2)
{
  unsigned __int64 v3; // r8
  void **v4; // rax
  __int64 v5; // rcx

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)&a2[2 * v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign(a1, a2, v3);
  while ( 1 )
  {
    v5 = std::wstring::find(a1, L"-", 0LL, 1LL);
    if ( v5 == -1 )
      break;
    v4 = (void **)std::wstring::replace(a1, v5, 1LL, L"%", asc_18012F7A4[0] != 0);
    if ( a1 != (unsigned __int64 *)v4 )
      std::wstring::assign((void **)a1, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  }
  return a1;
}
