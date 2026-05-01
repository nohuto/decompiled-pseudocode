/*
 * XREFs of ?MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180334C90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$_Emplace_reallocate@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAY0CA@G@Z @ 0x180327AD4 (--$_Emplace_reallocate@AEAY0CA@G@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::MonitorEnumProc(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // eax
  LONG v9; // ecx
  LONG v10; // ecx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v12[72]; // [rsp+48h] [rbp-41h] BYREF
  _WORD v13[32]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  mi.cbSize = 104;
  if ( !GetMonitorInfoW(a1, &mi) )
  {
    v5 = -2147467259;
    v6 = 2683LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v5);
    return v5;
  }
  memset_0(v13, 0, sizeof(v13));
  if ( (unsigned int)_o_wcscpy_s(v13, 32LL, v12) )
  {
    v5 = -2147024809;
    v6 = 2686LL;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a4 + 1256) == *(_QWORD *)(a4 + 1264) )
  {
    std::vector<std::wstring>::_Emplace_reallocate<unsigned short (&)[32]>(
      (__int64 *)(a4 + 1248),
      *(_QWORD *)(a4 + 1256),
      v13);
  }
  else
  {
    std::wstring::wstring(*(_QWORD **)(a4 + 1256), v13);
    *(_QWORD *)(a4 + 1256) += 32LL;
  }
  v8 = *(_DWORD *)(a4 + 1272);
  if ( v8 == -1 )
  {
    *(_DWORD *)(a4 + 1272) = 0;
    v8 = 0;
  }
  else if ( v8 )
  {
    goto LABEL_16;
  }
  v9 = *(_DWORD *)(a4 + 1292);
  if ( v9 < mi.rcMonitor.right && v9 >= mi.rcMonitor.left )
  {
    v10 = *(_DWORD *)(a4 + 1296);
    if ( v10 < mi.rcMonitor.bottom && v10 >= mi.rcMonitor.top )
      goto LABEL_17;
  }
LABEL_16:
  if ( v8 == (unsigned int)((__int64)(*(_QWORD *)(a4 + 1256) - *(_QWORD *)(a4 + 1248)) >> 5) - 1 )
LABEL_17:
    *(RECT *)(a4 + 1276) = mi.rcMonitor;
  return 1LL;
}
