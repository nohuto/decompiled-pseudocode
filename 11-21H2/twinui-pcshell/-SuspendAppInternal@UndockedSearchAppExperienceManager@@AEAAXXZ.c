/*
 * XREFs of ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A1FF4
 * Callers:
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18009EAA8 (-UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::SuspendAppInternal(UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  bool v7; // bl
  _QWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 32LL))(
          *((_QWORD *)this + 12),
          *((_QWORD *)this + 8)) )
  {
    v2 = *((_QWORD *)this + 8);
    if ( v2 )
    {
      v17 = 3;
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 352LL))(v2, &v17);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x627,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      if ( v17 == 3 )
      {
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SuspensionEnabled(v4);
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 344LL))(*((_QWORD *)this + 8), 1LL);
        v6 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x62C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
        if ( !tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
          goto LABEL_18;
        v7 = v6 >= 0;
        v8 = tip::tip_test<_tip_SearchHideTest>::data((__int64)this + 760, v15);
        v9 = *v8 == 0LL;
        v10 = *v8 + 154LL;
        if ( v9 )
          v10 = 10LL;
        *(_BYTE *)v10 = v7;
      }
      else
      {
        if ( v17 != 5 || !tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
          goto LABEL_18;
        v11 = tip::tip_test<_tip_SearchHideTest>::data((__int64)this + 760, v15);
        v9 = *v11 == 0LL;
        v12 = *v11 + 177LL;
        if ( v9 )
          v12 = 33LL;
        *(_BYTE *)v12 = 1;
      }
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v15);
    }
LABEL_18:
    *((_DWORD *)this + 160) = 6;
    return;
  }
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 95) )
  {
    v13 = tip::tip_test<_tip_SearchHideTest>::data((__int64)this + 760, v15);
    v9 = *v13 == 0LL;
    v14 = *v13 + 176LL;
    if ( v9 )
      v14 = 32LL;
    *(_BYTE *)v14 = 1;
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v15);
  }
}
