/*
 * XREFs of ?GetMainMonitor@KioskPositioner@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805A8254
 * Callers:
 *     ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805A867C (-HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall KioskPositioner::GetMainMonitor(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(__int64 **)(a1 + 208);
  v4 = *v3;
  *a2 = 0LL;
  v7 = (int)a2;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *))(v4 + 72))(
         v3,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5,
      v7);
  return a2;
}
