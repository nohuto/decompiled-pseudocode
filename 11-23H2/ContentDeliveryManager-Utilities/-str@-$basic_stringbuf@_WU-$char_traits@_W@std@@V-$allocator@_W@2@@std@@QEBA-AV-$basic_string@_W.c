/*
 * XREFs of ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800A0AA0
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009F1A8 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800BECD8 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800D03B0 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180051870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W_K@Z @ 0x18009AE60 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W_K@Z.c)
 */

__int64 __fastcall std::wstringbuf::str(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // r8
  _BYTE *v7; // rdx
  __int64 v8; // r9
  _QWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || (v3 = *(unsigned __int64 **)(a1 + 64), !*v3) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || (v8 = **(_QWORD **)(a1 + 56)) == 0 )
    {
      v10[3] = 7LL;
      v10[2] = 0LL;
      LOWORD(v10[0]) = 0;
      goto LABEL_11;
    }
    v7 = **(_BYTE ***)(a1 + 24);
    v6 = v8 + 2LL * **(int **)(a1 + 80) - (_QWORD)v7;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < *v3 )
      v4 = *v3;
    v5 = *(_QWORD **)(a1 + 32);
    v6 = v4 - *v5;
    v7 = (_BYTE *)*v5;
  }
  std::wstring::wstring((__int64)v10, v7, v6 >> 1);
LABEL_11:
  std::wstring::wstring(a2, (__int64)v10);
  std::wstring::_Tidy(v10, 1, 0LL);
  return a2;
}
