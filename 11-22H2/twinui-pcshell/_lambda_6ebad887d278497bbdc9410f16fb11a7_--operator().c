/*
 * XREFs of _lambda_6ebad887d278497bbdc9410f16fb11a7_::operator() @ 0x1801279C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ebad887d278497bbdc9410f16fb11a7___::Run @ 0x1801279B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6ebad887d278497bbdc9410f16fb11a7___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6ebad887d278497bbdc9410f16fb11a7_::operator()(int *a1)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+4Ch] [rbp+14h]

  v8 = *a1;
  v9 = a1[1];
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  v1 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &v7);
  v2 = v1;
  if ( v1 < 0 )
  {
    v4 = 706LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1,
      ppv);
    goto LABEL_3;
  }
  v1 = (*(__int64 (__fastcall **)(LPVOID, int *))(*(_QWORD *)v7 + 128LL))(v7, &v8);
  v2 = v1;
  if ( v1 < 0 )
  {
    v4 = 708LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  return v2;
}
