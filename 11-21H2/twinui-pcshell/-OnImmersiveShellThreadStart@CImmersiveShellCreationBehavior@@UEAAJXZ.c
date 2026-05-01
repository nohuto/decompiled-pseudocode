/*
 * XREFs of ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1800E0F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$$A6AJPEAJPEAPEAUIUnknown@@@Z@CThreadRefHost@@QEAA@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x1800E0FD0 (--$-0$$A6AJPEAJPEAPEAUIUnknown@@@Z@CThreadRefHost@@QEAA@A6AJPEAJPEAPEAUIUnknown@@@Z@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800E1180 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsOleInitializePresent @ 0x18018C1B8 (IsOleInitializePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStart(CImmersiveShellCreationBehavior *this)
{
  HRESULT v2; // edi
  CThreadRefHost *v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v2 < 0 )
  {
    v6 = 667LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( *((_BYTE *)this + 16) || !(unsigned __int8)IsOleInitializePresent() )
    goto LABEL_6;
  v2 = OleInitialize(0LL);
  if ( v2 < 0 )
  {
    v6 = 674LL;
    goto LABEL_15;
  }
  *((_BYTE *)this + 16) = 1;
LABEL_6:
  if ( *((_QWORD *)this + 3) )
    return 0LL;
  v3 = (CThreadRefHost *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v3 = CThreadRefHost::CThreadRefHost(v3, (int (*)(int *, struct IUnknown **))SHCreateDUIThreadRef);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v3;
  if ( v4 )
  {
    (**v4)(v4, 1LL);
    v3 = (CThreadRefHost *)*((_QWORD *)this + 3);
  }
  if ( v3 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AE,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
