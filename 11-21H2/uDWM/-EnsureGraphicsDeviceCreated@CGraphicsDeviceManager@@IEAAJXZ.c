/*
 * XREFs of ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18003A494
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003929C (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004BF1C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055888 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055940 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180056214 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(CGraphicsDeviceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
    return 0LL;
  v2 = CGraphicsDeviceManager::InitializeGraphicsDevice(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x74,
    (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
