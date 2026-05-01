/*
 * XREFs of ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x1806636B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry@@SAXAEA_KAEAURect@Foundation@Windows@@AEAI@Z @ 0x18065D4D4 (--$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry.c)
 */

__int64 __fastcall CShellSnapComponent::SnapWindowWithGuidedSnapAssist(
        __int64 a1,
        unsigned __int64 a2,
        float *a3,
        unsigned int a4,
        __int64 a5)
{
  int v6; // r14d
  int v9; // ebx
  __int64 v10; // rdx
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm1_4
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = a2;
  v17 = a2;
  v16 = a4;
  CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist<unsigned __int64 &,Windows::Foundation::Rect &,unsigned int &>(
    &v17,
    (struct Windows::Foundation::Rect *)a3,
    (int *)&v16);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 464) + 48LL))(
         *(_QWORD *)(a1 + 464),
         a4,
         a5);
  if ( v9 < 0 )
  {
    v10 = 832LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = a3[1];
  v13 = *a3 + a3[2];
  v18[0] = (int)*a3;
  v14 = (int)v12;
  v15 = v12 + a3[3];
  v18[1] = v14;
  v18[2] = (int)v13;
  v18[3] = (int)v15;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, v6, v18, 0LL);
  if ( v9 < 0 )
  {
    v10 = 835LL;
    goto LABEL_3;
  }
  return 0LL;
}
