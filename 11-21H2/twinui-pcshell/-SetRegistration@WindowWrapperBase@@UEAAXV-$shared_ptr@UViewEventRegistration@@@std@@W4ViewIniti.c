/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18009AD50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005CA90 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x180172FF8 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18040B7D8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18040E098 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

void __fastcall WindowWrapperBase::SetRegistration(__int64 a1, __int64 *a2, int a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  int v10; // eax
  char v11; // si
  int v12; // edx
  __int16 v13; // cx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // ebx
  _QWORD *v20; // rax
  int v21; // eax
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v24; // [rsp+50h] [rbp+8h] BYREF
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v24 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 216LL))(*(_QWORD *)(a1 + 264));
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a2[1];
  }
  v8 = *a2;
  *(_QWORD *)(a1 + 320) = *a2;
  v9 = *(std::_Ref_count_base **)(a1 + 328);
  *(_QWORD *)(a1 + 328) = v7;
  if ( v9 )
  {
    std::_Ref_count_base::_Decref(v9);
    v8 = *(_QWORD *)(a1 + 320);
  }
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(v8 + 16);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v10 = 0;
    v24 = 0;
    if ( a3 == 1 )
    {
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                        *(_QWORD *)(a1 + 264),
                        &v25);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v17 + 64LL))(
              *v17,
              *(_QWORD *)(a1 + 88),
              &v24);
      if ( v18 >= 0 )
      {
        v6 = 1;
        v10 = v24;
        if ( v24 )
        {
          v11 = 1;
          goto LABEL_8;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6E7,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v18,
          v22);
        v6 = 1;
        v10 = v24;
      }
    }
    v11 = 0;
LABEL_8:
    if ( (v6 & 1) != 0 )
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v25);
      v10 = v24;
    }
    if ( v11 )
    {
      v19 = *(_DWORD *)(a1 + 468);
      if ( v10 == *(_DWORD *)(a1 + 464)
        || (*(_DWORD *)(a1 + 464) = v10,
            WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16)),
            v19 == *(_DWORD *)(a1 + 468)) )
      {
        v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                          *(_QWORD *)(a1 + 264),
                          &v26);
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v20 + 56LL))(
                *v20,
                *(unsigned int *)(a1 + 336),
                *(unsigned int *)(a1 + 468));
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6FC,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v21,
            v22);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
      }
      if ( (unsigned int)(v24 - 4) <= 1 )
      {
        WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
        WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 340);
  v13 = 4;
  if ( (v12 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 464) - 4) <= 1 )
      v13 = 8;
    *(_WORD *)(a1 + 236) &= 0xFFF1u;
    *(_WORD *)(a1 + 236) |= v13 | 1;
  }
  if ( (v12 & 8) == 0 )
  {
    *(_WORD *)(a1 + 236) &= ~0x10u;
    *(_WORD *)(a1 + 236) |= 0x21u;
  }
  if ( WindowsIsStringEmpty(**(HSTRING **)(a1 + 320)) )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(a1 + 320) + 8LL)) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 320) + 8LL), 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 184),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 280));
    }
  }
  v16 = (std::_Ref_count_base *)a2[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
