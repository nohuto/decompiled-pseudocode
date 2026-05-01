/*
 * XREFs of ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804179A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005CA90 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180099E78 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x180172FF8 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415D54 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

void __fastcall UwpWindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  HSTRING **v7; // rsi
  int v8; // eax
  _QWORD *v9; // rax
  int v10; // eax
  char v11; // bp
  int v12; // ebx
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // edx
  __int16 v16; // cx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v21 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 224LL))(*(_QWORD *)(a1 + 256));
  v7 = (HSTRING **)(a1 + 312);
  std::shared_ptr<ViewEventRegistration>::operator=((_QWORD *)(a1 + 312), a2);
  *(_DWORD *)(a1 + 332) = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 16LL);
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_16;
  v8 = 0;
  v21 = 0;
  if ( a3 == 1 )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 256) + 152LL))(
                     *(_QWORD *)(a1 + 256),
                     &v22);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v9 + 72LL))(*v9, *(_QWORD *)(a1 + 88), &v21);
    if ( v10 >= 0 )
    {
      v6 = 1;
      v8 = v21;
      if ( v21 )
      {
        v11 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x773,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v10);
      v6 = 1;
      v8 = v21;
    }
  }
  v11 = 0;
LABEL_6:
  if ( (v6 & 1) != 0 )
  {
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
    v8 = v21;
  }
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 460);
    if ( v8 == *(_DWORD *)(a1 + 456)
      || (*(_DWORD *)(a1 + 456) = v8,
          UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16)),
          v12 == *(_DWORD *)(a1 + 460)) )
    {
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 256) + 152LL))(
                        *(_QWORD *)(a1 + 256),
                        &v22);
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v13 + 64LL))(
              *v13,
              *(unsigned int *)(a1 + 328),
              *(unsigned int *)(a1 + 460));
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x788,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
    }
    if ( (unsigned int)(v21 - 4) <= 1 )
    {
      UwpWindowReadyState::VisibilityChanged(a1 + 336, 0LL, 1LL);
      UwpWindowReadyState::VisibilityChanged(a1 + 336, 1LL, 1LL);
    }
  }
LABEL_16:
  v15 = *(_DWORD *)(a1 + 332);
  v16 = 4;
  if ( (v15 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 456) - 4) <= 1 )
      v16 = 8;
    *(_WORD *)(a1 + 228) = v16 | *(_WORD *)(a1 + 228) & 0xFFF1 | 1;
  }
  if ( (v15 & 8) == 0 )
    *(_WORD *)(a1 + 228) = *(_WORD *)(a1 + 228) & 0xFFCE | 0x21;
  if ( WindowsIsStringEmpty(**v7) )
  {
    if ( !WindowsIsStringEmpty((*v7)[1]) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer((*v7)[1], 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 176),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 272));
    }
  }
  v19 = (std::_Ref_count_base *)a2[1];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
}
