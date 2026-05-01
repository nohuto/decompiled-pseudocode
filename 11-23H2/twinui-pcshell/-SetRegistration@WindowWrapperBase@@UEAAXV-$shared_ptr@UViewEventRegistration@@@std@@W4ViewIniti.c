/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804ECAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180049E2C (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18006CAAC (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x1802D9002 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804EF724 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

void __fastcall WindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  HSTRING **v7; // r14
  _QWORD *v8; // rax
  int v9; // eax
  char v10; // si
  int v11; // ebx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // edx
  __int16 v15; // cx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v20; // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v20 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 216LL))(*(_QWORD *)(a1 + 264));
  v7 = (HSTRING **)(a1 + 320);
  std::shared_ptr<SnapInteraction::InteractionRecord>::operator=((_QWORD *)(a1 + 320), a2);
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(*(_QWORD *)(a1 + 320) + 16LL);
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_17;
  v20 = 0;
  if ( a3 == 1 )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                     *(_QWORD *)(a1 + 264),
                     &v21);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v8 + 64LL))(*v8, *(_QWORD *)(a1 + 88), &v20);
    if ( v9 >= 0 )
    {
      v6 = 1;
      if ( v20 )
      {
        v10 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9);
      v6 = 1;
    }
  }
  v10 = 0;
LABEL_6:
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 468);
    if ( v20 != *(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(a1 + 464) = v20;
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
    }
    if ( v11 == *(_DWORD *)(a1 + 468) )
    {
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                        *(_QWORD *)(a1 + 264),
                        &v21);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 56LL))(
              *v12,
              *(unsigned int *)(a1 + 336),
              *(unsigned int *)(a1 + 468));
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x705,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    }
    if ( (unsigned int)(v20 - 4) <= 1 )
    {
      WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
      WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
    }
  }
LABEL_17:
  v14 = *(_DWORD *)(a1 + 340);
  v15 = 4;
  if ( (v14 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 464) - 4) <= 1 )
      v15 = 8;
    *(_WORD *)(a1 + 236) = v15 | *(_WORD *)(a1 + 236) & 0xFFF1 | 1;
  }
  if ( (v14 & 8) == 0 )
    *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 236) & 0xFFCE | 0x21;
  if ( WindowsIsStringEmpty(**v7) )
  {
    if ( !WindowsIsStringEmpty((*v7)[1]) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer((*v7)[1], 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 184),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 280));
    }
  }
  v18 = (std::_Ref_count_base *)a2[1];
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
}
