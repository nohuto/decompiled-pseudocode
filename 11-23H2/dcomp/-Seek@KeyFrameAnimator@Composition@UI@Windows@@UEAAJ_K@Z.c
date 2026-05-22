/*
 * XREFs of ?Seek@KeyFrameAnimator@Composition@UI@Windows@@UEAAJ_K@Z @ 0x1800836D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimator::Seek(
        Windows::UI::Composition::KeyFrameAnimator *this,
        __int64 a2)
{
  char v2; // al
  Windows::UI::Composition::KeyFrameAnimator *v4; // rdx
  __int64 v5; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = *((_BYTE *)this + 384);
  v4 = this;
  if ( (v2 & 2) != 0 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x23A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
      (const char *)0x80070057LL,
      (int)"Seek and Progress cannot comingle for the lifetime of the Animator.",
      v9);
  }
  else
  {
    *((_BYTE *)this + 384) = v2 | 1;
    if ( (unsigned int)(*((_DWORD *)this + 78) - 1) > 1 )
      return 0LL;
    v5 = *((_QWORD *)this + 40);
    if ( !v5 )
    {
      DirectComposition::CDevice::ResourceSetBufferProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)v4 + 3) + 456LL),
        *((_DWORD *)v4 + 32),
        23,
        &v11,
        8uLL);
      return 0LL;
    }
    if ( a2 < 0 )
      v4 = (Windows::UI::Composition::KeyFrameAnimator *)(a2 & 1 | ((unsigned __int64)a2 >> 1));
    v7 = (*(__int64 (__fastcall **)(__int64, Windows::UI::Composition::KeyFrameAnimator *))(*(_QWORD *)v5 + 88LL))(
           v5,
           v4);
    v8 = v7;
    if ( v7 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
      (const char *)(unsigned int)v7);
  }
  return v8;
}
