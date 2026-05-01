/*
 * XREFs of ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x18010A434
 * Callers:
 *     ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010A16C (--$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD904 (-JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
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

  v1 = (void **)((char *)this + 232);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  Instance = JointResizeAcc_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v6 = 210LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance,
      v7[0]);
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
    v6 = 211LL;
    goto LABEL_6;
  }
  return (unsigned int)Instance;
}
