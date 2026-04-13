/*
 * XREFs of ?StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180081740
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@U?$AsyncCausalityOptions@$1?StageOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18007C900 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@U-$AsyncCausalityOptions@$1-Stage.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::StageAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  char *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v3 = (char *)this - 48;
  v10[0] = 3;
  v10[1] = 130;
  v10[2] = 0;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    v4[1] = v3;
    *v4 = off_1800FF838;
    *((_DWORD *)v4 + 4) = 0;
    `eh vector constructor iterator'(
      v4 + 3,
      8uLL,
      1,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v6 + 4) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
         (__int64)v10,
         a2,
         v5,
         (void (__fastcall ***)(_QWORD, __int64))v6);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
