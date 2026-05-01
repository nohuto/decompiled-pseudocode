/*
 * XREFs of _lambda_650986e8702066c2f94a1851be55bf26_::operator() @ 0x180127A60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_650986e8702066c2f94a1851be55bf26___::Run @ 0x180127990 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_650986e8702066c2f94a1851be55bf26___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B7CC4 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_650986e8702066c2f94a1851be55bf26_::operator()(_QWORD *a1)
{
  HRESULT v2; // eax
  wil::details::in1diag3 *v3; // rcx
  int v4; // eax
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  v2 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &v9);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_7;
  v8 = 1;
  v4 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, int *))(*(_QWORD *)v9 + 120LL))(v9, L"ActionCenter", &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3FE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  if ( !v8 )
  {
    v2 = CToastCenterExperienceManager::PostTargetedMessage(*a1, 5LL);
    v3 = retaddr;
    if ( v2 < 0 )
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        v3,
        (void *)0x3FE,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        ppv);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
}
