/*
 * XREFs of ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180288BF4
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287684 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180287E80 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedLis.c)
 * Callees:
 *     TestUnlockData @ 0x1800BD200 (TestUnlockData.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180289230 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::end_update(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  void *v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID v8[2]; // [rsp+30h] [rbp-D0h]
  __int128 v9; // [rsp+40h] [rbp-C0h]
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  char v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+59h] [rbp-A7h] BYREF
  char v13; // [rsp+5Dh] [rbp-A3h]
  _BYTE v14[2043]; // [rsp+5Eh] [rbp-A2h] BYREF
  char v15; // [rsp+859h] [rbp+759h] BYREF
  int *v16; // [rsp+860h] [rbp+760h]
  _BYTE *v17; // [rsp+868h] [rbp+768h]
  char *v18; // [rsp+870h] [rbp+770h]

  v2 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( *(_QWORD *)(a1 + 232) && (v2 & 0x100) == 0 )
  {
    v7 = 0LL;
    *(_OWORD *)v8 = 0LL;
    v9 = 0LL;
    memset_0(v14, 0, 0x802uLL);
    pv = 0LL;
    v4 = (*(_DWORD *)(a1 + 20) & 0x8000) == 0;
    v16 = &v12;
    v18 = &v15;
    v17 = v14;
    v11 = 0;
    v12 = -2143256512;
    v13 = 0;
    if ( v4 )
      v5 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &pv, 1LL);
    else
      v5 = 0LL;
    TestUnlockData(*(_QWORD *)(a1 + 232), v3, v5, &v7);
    *(_DWORD *)(a1 + 64) |= HIDWORD(v8[0]);
    v6 = v8[1];
    if ( !v8[1] )
      *(_DWORD *)(a1 + 184) = v8[0];
    if ( pv )
    {
      CoTaskMemFree(pv);
      v6 = v8[1];
    }
    CoTaskMemFree(v6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
