/*
 * XREFs of ?XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BFD4
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BDD0 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18004C038 (--$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$ComPtr@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlTaskViewHost_CreateInstance(
        const struct XamlViewHostInitializeArgs *a1,
        const struct _GUID *a2,
        void **a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const struct _GUID *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  *a3 = 0LL;
  try
  {
    v4 = (_QWORD *)wil::MakeAndInitializeOrThrow<TaskViewHost,XamlViewHostInitializeArgs const &>();
    v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, void **))*v4)(*v4, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, a3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2BB,
                           (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v6);
  }
  return result;
}
