/*
 * XREFs of ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D3204
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180113E9C (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAllUpViewService@@UIEdgeUiTouchInvocation@@UIAllUpViewInvoker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D3368 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAllUpViewService@@UIE.c)
 *     ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1800D47B8 (--$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA70 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAllUpViewService_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  BOOL IsEqualGUID; // eax
  char *v7; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v12; // [rsp+30h] [rbp+8h] BYREF
  char *v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = a1;
  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CAllUpViewService,CAllUpViewService,IMultitaskingViewTaskScheduler * &>(
         &v13,
         &v12);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v10 = 113LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)v9);
    goto LABEL_6;
  }
  *a3 = 0LL;
  IsEqualGUID = InlineIsEqualGUID(
                  &GUID_f36737f7_ff9b_4661_a1c9_82f572069857,
                  &GUID_00000000_0000_0000_c000_000000000046);
  v7 = v13;
  if ( IsEqualGUID )
  {
    *a3 = v13;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAllUpViewService,IEdgeUiTouchInvocation,IAllUpViewInvoker>::CanCastTo(
                  v13 + 24,
                  &GUID_f36737f7_ff9b_4661_a1c9_82f572069857,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 114LL;
    goto LABEL_10;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
