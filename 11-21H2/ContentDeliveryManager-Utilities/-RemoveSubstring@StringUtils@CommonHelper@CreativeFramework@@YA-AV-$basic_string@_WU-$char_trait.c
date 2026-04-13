/*
 * XREFs of ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800E885C
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x18006B760 (-erase@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 *__fastcall CreativeFramework::CommonHelper::StringUtils::RemoveSubstring(
        unsigned __int64 *a1,
        char *a2,
        char *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 *v8; // rdx
  void *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v14[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-20h]
  unsigned __int64 v16; // [rsp+48h] [rbp-18h]

  v5 = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign(a1, a2, v6);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( *(_WORD *)a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&a3[2 * v7] );
    v5 = v7;
  }
  std::wstring::assign(v14, a3, v5);
  v8 = v14;
  v9 = (void *)v14[0];
  v10 = v16;
  if ( v16 >= 8 )
    v8 = (unsigned __int64 *)v14[0];
  v11 = std::wstring::find((char *)a1, v8, 0LL, v15);
  if ( v11 != -1LL )
  {
    std::wstring::erase(a1, v11, v12);
    v10 = v16;
    v9 = (void *)v14[0];
  }
  if ( v10 >= 8 )
    operator delete(v9);
  return a1;
}
