/*
 * XREFs of ?OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ @ 0x1801084EC
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003E734 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1648 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowData::OnGraphicsDeviceRecreated(CWindowData *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  CAccentAcrylicBlurBehind *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 55);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 296);
  if ( !v2 )
    return 0LL;
  if ( (unsigned int)(*(_DWORD *)(v2 + 288) - 3) > 1 )
    return 0LL;
  v3 = *(CAccentAcrylicBlurBehind **)(v2 + 344);
  if ( !v3 )
    return 0LL;
  v4 = CAccentAcrylicBlurBehind::ValidateGraphicsDevice(v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x453,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71A,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)v5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AC,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
    (const char *)v5);
  return v5;
}
