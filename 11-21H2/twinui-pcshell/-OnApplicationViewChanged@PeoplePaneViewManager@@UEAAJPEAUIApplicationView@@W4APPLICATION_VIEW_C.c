/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800F2460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D5CB4 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803D68D4 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D8F54 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 (__fastcall *v6)(struct IApplicationView *, const WCHAR *, int *); // rbp
  int v7; // eax
  const WCHAR *v8; // rdx
  __int64 result; // rax
  LSTATUS ValueW; // eax
  bool v11; // zf
  int v12; // ebx
  __int64 v13; // rdx
  DWORD pdwType; // [rsp+40h] [rbp-28h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-24h] BYREF
  int v16; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int pvData; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, const WCHAR *, int *))(*(_QWORD *)a2 + 152LL);
  v7 = dword_1807B3984;
  if ( !dword_1807B3984 )
  {
    pdwType = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
               L"PrereleaseExperience",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    if ( !ValueW )
    {
      if ( pdwType == 4 )
      {
        if ( pvData <= 1 )
        {
          v11 = pvData == 1;
          goto LABEL_12;
        }
      }
      else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        ValueW = 0;
        v11 = (_WORD)pvData == 49;
LABEL_12:
        LOBYTE(ValueW) = v11;
        if ( ValueW )
        {
          dword_1807B3984 = 1;
          goto LABEL_18;
        }
      }
    }
    v7 = 2;
    dword_1807B3984 = 2;
  }
  if ( v7 != 1 )
  {
    v8 = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
    goto LABEL_4;
  }
LABEL_18:
  v8 = L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
LABEL_4:
  result = v6(a2, v8, &v16);
  if ( (int)result < 0 )
    return result;
  if ( v16 )
  {
    if ( !a3 )
    {
      v12 = PeoplePaneViewManager::AddedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
      if ( v12 >= 0 )
        return 0LL;
      v13 = 546LL;
      goto LABEL_33;
    }
    if ( a3 <= 0 )
      return 0LL;
    if ( a3 > 2 )
    {
      if ( a3 == 7 )
      {
        v12 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 1);
        if ( v12 >= 0 )
          return 0LL;
        v13 = 554LL;
        goto LABEL_33;
      }
      if ( a3 == 9 )
      {
        v12 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 0);
        if ( v12 >= 0 )
          return 0LL;
        v13 = 557LL;
        goto LABEL_33;
      }
      if ( a3 != 11 )
        return 0LL;
    }
    v12 = PeoplePaneViewManager::RemovedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
    if ( v12 >= 0 )
      return 0LL;
    v13 = 551LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  return 0LL;
}
