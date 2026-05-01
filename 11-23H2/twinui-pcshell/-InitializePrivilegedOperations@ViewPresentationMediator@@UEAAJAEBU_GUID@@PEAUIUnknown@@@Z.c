/*
 * XREFs of ?InitializePrivilegedOperations@ViewPresentationMediator@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801AB5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@@Z @ 0x1800F9690 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@_ea_1800F9690.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewPresentationMediator::InitializePrivilegedOperations(
        ViewPresentationMediator *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  char *v8; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( v4 )
  {
    v5 = InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,>(
           a2,
           a3,
           (__int64 *)this + 10);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v8 = (char *)this + 72;
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      v8);
    return 0;
  }
  return v6;
}
