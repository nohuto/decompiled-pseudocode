/*
 * XREFs of _lambda_a72360de32f5be54d81fefae94be82a6_::operator() @ 0x1801968C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a72360de32f5be54d81fefae94be82a6___::Run @ 0x180196FA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a72360de32f5be54d81fefae94be82a6___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCB6C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a72360de32f5be54d81fefae94be82a6_::operator()(struct IUnknown **a1)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_6;
  v7 = 1;
  v4 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, int *))(*(_QWORD *)ppv + 120LL))(ppv, L"ActionCenter", &v7);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3E8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v7 )
  {
    v2 = CToastCenterExperienceManager::PostTargetedMessage(*a1, 5u);
    v3 = retaddr;
    if ( v2 < 0 )
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v3,
        (void *)0x3E8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
}
