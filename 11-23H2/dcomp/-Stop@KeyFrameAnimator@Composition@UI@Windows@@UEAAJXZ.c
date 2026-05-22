/*
 * XREFs of ?Stop@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x180077020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimator::Stop(Windows::UI::Composition::KeyFrameAnimator *this)
{
  int v2; // esi
  DirectComposition::CDevice *v3; // rbx
  _DWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD); // rcx
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 78) - 1) > 1 )
    return 0LL;
  v2 = *((_DWORD *)this + 32);
  if ( v2 )
  {
    v3 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v3, 0x18u, &v13, 0);
    v4 = v13;
    *(_DWORD *)v13 = 8;
    v4[1] = v2;
    v4[2] = 20;
    *((_QWORD *)v4 + 2) = 0LL;
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v3 + 10);
    if ( v5 )
      (**v5)(v5);
  }
  v6 = *((_QWORD *)this + 40);
  if ( !v6 )
  {
LABEL_6:
    *((_DWORD *)this + 78) = 0;
    return 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x295,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 72LL))(*((_QWORD *)this + 40));
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x297,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
