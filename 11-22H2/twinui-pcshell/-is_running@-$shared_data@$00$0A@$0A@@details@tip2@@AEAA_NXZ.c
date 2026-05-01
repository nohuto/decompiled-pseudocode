/*
 * XREFs of ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800B6920
 * Callers:
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x180273118 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 * Callees:
 *     ?update_from_test_info@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180013178 (-update_from_test_info@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_gu.c)
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

bool __fastcall tip2::details::shared_data<1,0,0>::is_running(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rcx
  __int64 v5; // r8
  bool v6; // di
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h]

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v3 = *(_QWORD *)(a1 + 232);
  if ( !v3 || (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
  {
LABEL_2:
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0;
  }
  v5 = *(unsigned int *)(a1 + 184);
  v7 = 0LL;
  *(_OWORD *)pv = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *))TestQueryData)(v3, 0LL, v5, &v7) )
  {
    CoTaskMemFree(pv[1]);
    pv[1] = 0LL;
    goto LABEL_2;
  }
  tip2::details::shared_data<1,0,0>::update_from_test_info(a1, (__int64)&v7);
  CoTaskMemFree(pv[1]);
  v6 = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  if ( v1 )
    LeaveCriticalSection(v1);
  return v6;
}
