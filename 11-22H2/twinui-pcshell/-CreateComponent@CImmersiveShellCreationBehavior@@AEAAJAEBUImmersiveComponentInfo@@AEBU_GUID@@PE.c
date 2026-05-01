/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@AEAAJAEBUImmersiveComponentInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18017E73C
 * Callers:
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18017E670 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCreator@ComponentCreator@@QEAAAEAV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@W4ImmersiveComponentOptions@@@Z @ 0x18017E788 (-GetCreator@ComponentCreator@@QEAAAEAV-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_po.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        const struct ImmersiveComponentInfo *a2,
        const struct _GUID *a3,
        void **a4)
{
  _QWORD *Creator; // rax
  _QWORD *v5; // r11
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Creator = (_QWORD *)ComponentCreator::GetCreator((char *)this + 72, *((unsigned int *)a2 + 2), a3, a4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*Creator + 24LL))(*Creator, *v5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36A,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
