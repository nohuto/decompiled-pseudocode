/*
 * XREFs of ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800528EC
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023F14 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180052990 (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLegacyNonClientBackground::Create(struct CWindowData *a1, struct CLegacyNonClientBackground **a2)
{
  CLegacyNonClientBackground *v4; // rax
  struct CLegacyNonClientBackground *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CLegacyNonClientBackground *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v4 = (CLegacyNonClientBackground *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                       WPF::g_pProcessHeap,
                                       360LL);
  v11 = v4;
  if ( v4 )
    v5 = CLegacyNonClientBackground::CLegacyNonClientBackground(v4, a1);
  else
    v5 = 0LL;
  v11 = v5;
  v6 = (*(__int64 (__fastcall **)(struct CLegacyNonClientBackground *))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v6,
      v9);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
    return v7;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
