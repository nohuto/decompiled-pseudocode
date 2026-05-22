/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1801C64E4
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1801C6844 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x1800715D4 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x1800716FC (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800717D4 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010553C (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x18010E514 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18010F3A0 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801BEFE8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1801C5E88 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1801C5F48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x1801C8BB4 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall DWMInputRouter::GetTargetFromInputSite(
        DWMInputRouter *a1,
        __int64 *a2,
        DWMInputRouter **a3,
        int a4,
        __int64 a5,
        _DWORD *a6,
        DWMInputRouter *a7)
{
  LegacyInputSinkData *v10; // r14
  void (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rdi
  unsigned __int8 (__fastcall *v12)(_QWORD, _QWORD); // rbx
  void *WeakInputSinkHandle; // rax
  void (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v16; // eax
  char *CompositionInputQueue; // rbx
  DWMInputRouter *v18; // rbx
  __int64 v19; // rax
  struct _LUID *Luid; // rax
  __int64 *v21; // rax
  DWMInputRouter *v23; // [rsp+30h] [rbp-91h] BYREF
  DWMInputRouter *v24; // [rsp+38h] [rbp-89h] BYREF
  int v25; // [rsp+40h] [rbp-81h]
  DWORD dwProcessId; // [rsp+44h] [rbp-7Dh] BYREF
  DWMInputRouter **v27; // [rsp+48h] [rbp-79h]
  __int128 v28; // [rsp+50h] [rbp-71h] BYREF
  __int128 v29; // [rsp+60h] [rbp-61h]
  __int64 v30; // [rsp+70h] [rbp-51h]
  __int64 *v31; // [rsp+80h] [rbp-41h]
  char v32[40]; // [rsp+88h] [rbp-39h] BYREF

  v24 = a1;
  v31 = a2;
  v23 = a7;
  *a2 = 0LL;
  v25 = 1;
  if ( !*((_BYTE *)*a3 + 480) )
    goto LABEL_20;
  v10 = (DWMInputRouter *)((char *)*a3 + 48);
  v11 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))a7;
  if ( *(_QWORD *)a7
    && (v12 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))(*v11)[5],
        WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(v10),
        v12(v11, WeakInputSinkHandle)) )
  {
    v14 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))v23;
    v15 = ***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))v23;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
    v15(v14, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a2);
  }
  else
  {
    v16 = ToCompositionInputType(a4);
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(v10, v16);
    if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 3) <= 1 )
    {
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
      v23 = *a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v23);
      v28 = *((_OWORD *)CompositionInputQueue + 1);
      v29 = *((_OWORD *)CompositionInputQueue + 2);
      v30 = *((_QWORD *)CompositionInputQueue + 6);
      DWMInputRouter::CreateAndRegisterTarget(v24, (__int64)&v28, (__int64 *)&v23, a2);
    }
    else if ( IsEdition(8778LL) && *(_DWORD *)CompositionInputQueue == 2 && (a4 & 0x4000) != 0 )
    {
      GetWindowThreadProcessId(*(HWND *)(a5 + 80), &dwProcessId);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
      v18 = v24;
      DWMInputRouter::CreateAndRegisterTarget(v24, dwProcessId, 0, 0, *(_QWORD *)(a5 + 80), (struct IInputTarget **)a2);
      v23 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
                  (__int64 *)&v23) >= 0 )
      {
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
        v27 = &v24;
        v24 = *a3;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v24);
        v19 = (*(__int64 (__fastcall **)(DWMInputRouter *, char *))(*(_QWORD *)v23 + 72LL))(v23, v32);
        v28 = *(_OWORD *)v19;
        v29 = *(_OWORD *)(v19 + 16);
        v30 = *(_QWORD *)(v19 + 32);
        DWMInputRouter::CreateAndRegisterTarget(v18, (__int64)&v28, (__int64 *)&v24, a2);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v23);
    }
  }
  if ( !*a2 )
    goto LABEL_20;
  if ( *(_BYTE *)(a5 + 88) )
  {
    Luid = (struct _LUID *)LegacyInputSinkData::GetLuid(v10);
    if ( operator==(Luid, a6) )
    {
      v23 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
                  (__int64 *)&v23) >= 0 )
        (*(void (__fastcall **)(DWMInputRouter *, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, *(unsigned int *)(a5 + 92));
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v23);
    }
  }
  if ( !*a2 )
  {
LABEL_20:
    v21 = (__int64 *)InputSiteTarget::Create(&v23, a3);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(a2, v21);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v23);
  }
  return a2;
}
