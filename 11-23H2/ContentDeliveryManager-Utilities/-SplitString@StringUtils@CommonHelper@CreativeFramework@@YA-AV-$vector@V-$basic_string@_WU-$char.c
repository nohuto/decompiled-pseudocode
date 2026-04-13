/*
 * XREFs of ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800D0644
 * Callers:
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18009CBEC (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x18009D810 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?find@?$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x18006457C (-find@-$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?find_first_of@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z @ 0x180064634 (-find_first_of@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006492C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x1800B0588 (-substr@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800BBD7C (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CreativeFramework::CommonHelper::StringUtils::SplitString(__int64 *a1, _QWORD *a2, _WORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r11
  _QWORD *v8; // rax
  unsigned __int64 v9; // r10
  char *v10; // rdi
  char *v11; // rax
  unsigned __int64 v12; // rdi
  __int64 first_of; // rbx
  unsigned __int64 v14; // rax
  _QWORD v16[4]; // [rsp+30h] [rbp-58h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = a2[2];
  if ( v6 )
  {
    v7 = std::char_traits<wchar_t>::length(a3);
    if ( a2[3] < 8uLL )
      v8 = a2;
    else
      v8 = (_QWORD *)*a2;
    v9 = (unsigned __int64)v8 + 2 * v6;
    if ( a2[3] < 8uLL )
      v10 = (char *)a2;
    else
      v10 = (char *)*a2;
    while ( 1 )
    {
      if ( (unsigned __int64)v10 >= v9 )
      {
        v12 = -1LL;
        goto LABEL_17;
      }
      if ( !std::char_traits<unsigned short>::find(a3, v7, v10) )
        break;
      v10 += 2;
    }
    if ( a2[3] < 8uLL )
      v11 = (char *)a2;
    else
      v11 = (char *)*a2;
    v12 = (v10 - v11) >> 1;
    do
    {
LABEL_17:
      first_of = std::wstring::find_first_of(a2, a3, v12);
      v14 = std::wstring::substr((void **)a2, (__int64)v16, v12, first_of - v12);
      std::vector<std::wstring>::push_back(a1, v14);
      std::wstring::_Tidy(v16, 1, 0LL);
      v12 = first_of + 1;
    }
    while ( first_of != -1 );
  }
  return a1;
}
