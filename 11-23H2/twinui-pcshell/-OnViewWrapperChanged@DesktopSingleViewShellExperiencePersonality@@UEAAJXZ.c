/*
 * XREFs of ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x1801B0B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v1; // rax
  char *v2; // rdi
  __int64 *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v5)(_QWORD, GUID *, char *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 1);
  v2 = (char *)this + 16;
  v3 = (__int64 *)((char *)this + 16);
  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))(v1 + 24);
  if ( !v4 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3);
    return 0LL;
  }
  v5 = **v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3);
  v6 = v5(v4, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, v2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
