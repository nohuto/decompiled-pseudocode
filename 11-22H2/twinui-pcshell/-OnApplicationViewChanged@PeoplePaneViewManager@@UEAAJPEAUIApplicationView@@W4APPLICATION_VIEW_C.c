/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800F6500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2890 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804B35BC (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B5CDC (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
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
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rdx
  int pdwType; // [rsp+20h] [rbp-48h]
  DWORD v19; // [rsp+40h] [rbp-28h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-24h] BYREF
  int v21; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int pvData; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, const WCHAR *, int *))(*(_QWORD *)a2 + 152LL);
  v7 = dword_18098D610;
  if ( !dword_18098D610 )
  {
    v19 = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
               L"PrereleaseExperience",
               0x10000012u,
               &v19,
               &pvData,
               &pcbData);
    if ( !ValueW )
    {
      if ( v19 == 4 )
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
          dword_18098D610 = 1;
          goto LABEL_18;
        }
      }
    }
    v7 = 2;
    dword_18098D610 = 2;
  }
  if ( v7 != 1 )
  {
    v8 = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
    goto LABEL_4;
  }
LABEL_18:
  v8 = L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
LABEL_4:
  result = v6(a2, v8, &v21);
  if ( (int)result < 0 )
    return result;
  if ( v21 )
  {
    if ( !a3 )
    {
      v16 = PeoplePaneViewManager::AddedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
      if ( v16 >= 0 )
        return 0LL;
      v17 = 546LL;
      goto LABEL_33;
    }
    v12 = a3 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 5;
        if ( !v14 )
        {
          v16 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 1);
          if ( v16 >= 0 )
            return 0LL;
          v17 = 554LL;
          goto LABEL_33;
        }
        v15 = v14 - 2;
        if ( !v15 )
        {
          v16 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 0);
          if ( v16 >= 0 )
            return 0LL;
          v17 = 557LL;
          goto LABEL_33;
        }
        if ( v15 != 2 )
          return 0LL;
      }
    }
    v16 = PeoplePaneViewManager::RemovedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
    if ( v16 >= 0 )
      return 0LL;
    v17 = 551LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v16,
      pdwType);
    return (unsigned int)v16;
  }
  return 0LL;
}
