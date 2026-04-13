/*
 * XREFs of ?StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180076E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180072CAC (Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--A.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_0d276c7ea3d710d19b822c1822ed0068___ @ 0x1800730B0 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_0d276c7ea3d710d19b822c182.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::StageAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  int v2; // ebx
  _QWORD *v3; // rax
  int v4; // r8d
  int v5; // eax
  unsigned int v6; // ebx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (int)a2;
  *a2 = 0LL;
  v10 = (char *)this - 48;
  v8[0] = 3;
  v8[1] = 130;
  v8[2] = 0;
  v3 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_0d276c7ea3d710d19b822c1822ed0068___(&v10);
  v5 = Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
         (int)v8,
         v2,
         v4,
         (__int64)v3);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
