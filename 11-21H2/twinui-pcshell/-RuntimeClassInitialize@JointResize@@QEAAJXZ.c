/*
 * XREFs of ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x1800AEF0C
 * Callers:
 *     ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ACC38 (--$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB18 (-JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall JointResize::RuntimeClassInitialize(JointResize *this)
{
  void **v1; // rbx
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v6; // rdx
  int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (void **)((char *)this + 248);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
  Instance = JointResizeAcc_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v6 = 178LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  *(GUID *)v7 = GUID_242a95a9_8d6c_4974_a5da_d9b6c9e619b8;
  v8 = 0LL;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (JointResize *)((char *)this + 24),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)v7,
               1u);
  if ( Instance < 0 )
  {
    v6 = 179LL;
    goto LABEL_6;
  }
  return (unsigned int)Instance;
}
