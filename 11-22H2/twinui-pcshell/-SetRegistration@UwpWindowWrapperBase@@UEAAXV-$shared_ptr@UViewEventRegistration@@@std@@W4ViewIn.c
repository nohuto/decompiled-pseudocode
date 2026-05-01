/*
 * XREFs of ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800A0C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180049E2C (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18006CAAC (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A06F0 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  HSTRING **v7; // r14
  char v8; // si
  int v9; // edx
  __int16 v10; // cx
  std::_Ref_count_base *v11; // rcx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // ebx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v21 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 224LL))(*(_QWORD *)(a1 + 264));
  v7 = (HSTRING **)(a1 + 320);
  std::shared_ptr<SnapInteraction::InteractionRecord>::operator=((_QWORD *)(a1 + 320), a2);
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(*(_QWORD *)(a1 + 320) + 16LL);
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_7;
  v21 = 0;
  if ( a3 == 1 )
  {
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 152LL))(
                      *(_QWORD *)(a1 + 264),
                      &v22);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v14 + 72LL))(*v14, *(_QWORD *)(a1 + 96), &v21);
    if ( v15 >= 0 )
    {
      v6 = 1;
      if ( v21 )
      {
        v8 = 1;
        goto LABEL_4;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x78D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v15,
        v19);
      v6 = 1;
    }
  }
  v8 = 0;
LABEL_4:
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  if ( v8 )
  {
    v16 = *(_DWORD *)(a1 + 468);
    if ( v21 != *(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(a1 + 464) = v21;
      UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16));
    }
    if ( v16 == *(_DWORD *)(a1 + 468) )
    {
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 152LL))(
                        *(_QWORD *)(a1 + 264),
                        &v22);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v17 + 64LL))(
              *v17,
              *(unsigned int *)(a1 + 336),
              *(unsigned int *)(a1 + 468));
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A2,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v18,
          v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    }
    if ( (unsigned int)(v21 - 4) <= 1 )
    {
      UwpWindowReadyState::VisibilityChanged((_BYTE *)(a1 + 344), 0, 1);
      UwpWindowReadyState::VisibilityChanged((_BYTE *)(a1 + 344), 1, 1);
    }
  }
LABEL_7:
  v9 = *(_DWORD *)(a1 + 340);
  v10 = 4;
  if ( (v9 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 464) - 4) <= 1 )
      v10 = 8;
    *(_WORD *)(a1 + 236) = v10 | *(_WORD *)(a1 + 236) & 0xFFF1 | 1;
  }
  if ( (v9 & 8) == 0 )
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
  v11 = (std::_Ref_count_base *)a2[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
