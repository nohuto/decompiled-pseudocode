/*
 * XREFs of ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EDB50
 * Callers:
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1801AC7E0 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x180086408 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E8934 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1801E8A94 (--1-$test_data_control@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1801E8ACC (--1-$test_watcher@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1801F1620 (-start@-$tip_test@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x18073DBBC (-SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::MitigateSpartanSubDomains(
        UndockedSearchAppExperienceManager *this)
{
  LSTATUS DWORD; // eax
  HKEY v2; // rcx
  unsigned int v3; // ebx
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  void **v13; // rcx
  int v14; // edi
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // ebx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rdx
  void **v25; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v26[40]; // [rsp+38h] [rbp-90h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-68h]
  volatile signed __int32 *v28; // [rsp+68h] [rbp-60h] BYREF
  volatile signed __int32 *v29; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-50h] BYREF
  volatile signed __int32 *v31; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v32; // [rsp+88h] [rbp-40h] BYREF
  volatile signed __int32 *v33; // [rsp+90h] [rbp-38h] BYREF
  __int64 v34; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  UndockedSearchAppExperienceManager *v36; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+10h] BYREF
  volatile signed __int32 *v38; // [rsp+E0h] [rbp+18h] BYREF
  volatile signed __int32 *v39; // [rsp+E8h] [rbp+20h] BYREF

  v36 = this;
  v38 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::start(
    &v38,
    &v34);
  v25 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v26,
    (struct wil::details::IFailureCallback *)&v25,
    0LL,
    1);
  v27 = v38;
  if ( v38 )
    _InterlockedIncrement(v38 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>((void **)&v38);
  DWORD = SHRegGetDWORD(
            HKEY_CLASSES_ROOT,
            L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client"
             ".cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
            L"NumberOfSubdomains",
            &v37);
  v3 = DWORD;
  if ( DWORD == 2 )
  {
    v4 = v27;
    v39 = v27;
    if ( v27 )
      _InterlockedIncrement(v27 + 68);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v4 + 2));
    *((_BYTE *)v4 + 267) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(
      (void **)&v39,
      v5);
    v6 = v27;
    v28 = v27;
    if ( v27 )
      _InterlockedIncrement(v27 + 68);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v6 + 2));
    tip2::details::shared_data<0,0,0>::complete_helper((__int64)(v6 + 2), 2048, 0xAu);
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(
      (void **)&v28,
      v7);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v25);
    return 0LL;
  }
  else
  {
    if ( DWORD < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)DWORD);
      tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v25);
      return v3;
    }
    SHRegGetDWORDWithDefault(
      v2,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
      L"SubdomainResetCount",
      0,
      (unsigned int *)&v36);
    if ( v37 < 0x3E8 )
    {
      if ( (_DWORD)v36 )
      {
        v19 = v27;
        v32 = v27;
        if ( v27 )
          _InterlockedIncrement(v27 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v19 + 2));
        *((_BYTE *)v19 + 265) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(
          (void **)&v32,
          v20);
        v21 = SHRegSetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
                L"SubdomainResetCount",
                0);
        v22 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3F0,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v21);
          tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v25);
          return v22;
        }
      }
    }
    else
    {
      v9 = SHRegSetDWORD(
             HKEY_CLASSES_ROOT,
             L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.clien"
              "t.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
             L"NumberOfSubdomains",
             1u);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3DF,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v25);
        return v10;
      }
      v11 = v27;
      if ( (_DWORD)v36 )
      {
        v29 = v27;
        if ( v27 )
          _InterlockedIncrement(v27 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v11 + 2));
        *((_BYTE *)v11 + 264) = 1;
        v13 = (void **)&v29;
      }
      else
      {
        v30 = v27;
        if ( v27 )
          _InterlockedIncrement(v27 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v11 + 2));
        *((_BYTE *)v11 + 266) = 1;
        v13 = (void **)&v30;
      }
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(
        v13,
        v12);
      v14 = (_DWORD)v36 + 1;
      LODWORD(v36) = (_DWORD)v36 + 1;
      v15 = v27;
      v31 = v27;
      if ( v27 )
        _InterlockedIncrement(v27 + 68);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v15 + 2));
      *((_DWORD *)v15 + 67) = v14;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(
        (void **)&v31,
        v16);
      v17 = SHRegSetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
              L"SubdomainResetCount",
              (unsigned int)v36);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EB,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v25);
        return v18;
      }
    }
    v23 = v27;
    v33 = v27;
    if ( v27 )
      _InterlockedIncrement(v27 + 68);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v23 + 2));
    tip2::details::shared_data<0,0,0>::complete_helper((__int64)(v23 + 2), 2048, 0xAu);
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(
      (void **)&v33,
      v24);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v25);
    return 0LL;
  }
}
