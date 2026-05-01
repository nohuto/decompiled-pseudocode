/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18048A350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCreator@ComponentCreator@@QEAAAEAV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@W4ImmersiveComponentOptions@@@Z @ 0x18017E788 (-GetCreator@ComponentCreator@@QEAAAEAV-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_po.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?at@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K@Z @ 0x18048ADEC (-at@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo.c)
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::CreateComponent(
        ImmersiveShellComponentsConfiguration *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  _QWORD *Creator; // rax
  __int64 v9; // r11
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::at((char *)this + 24, a2);
  Creator = (_QWORD *)ComponentCreator::GetCreator((__int64)this + 96, *(_DWORD *)(*(_QWORD *)(v7 + 16) + 8LL));
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(*(_QWORD *)*Creator + 24LL))(
          *Creator,
          v9,
          a3,
          a4);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x400,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
