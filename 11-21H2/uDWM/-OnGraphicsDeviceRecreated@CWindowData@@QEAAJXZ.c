/*
 * XREFs of ?OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ @ 0x180104D90
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055888 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowData::OnGraphicsDeviceRecreated(CWindowData *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  CAccentAcrylicBlurBehind *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 55);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 280);
  if ( !v2 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 288) != 4 )
    return 0LL;
  v3 = *(CAccentAcrylicBlurBehind **)(v2 + 352);
  if ( !v3 )
    return 0LL;
  v4 = CAccentAcrylicBlurBehind::ValidateGraphicsDevice(v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4FD,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6CC,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)v5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x208A,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v5);
  return v5;
}
