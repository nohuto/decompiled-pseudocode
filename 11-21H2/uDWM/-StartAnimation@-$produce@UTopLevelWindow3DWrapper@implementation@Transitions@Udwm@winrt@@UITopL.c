/*
 * XREFs of ?StartAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHHURect@Foundation@Windows@3@@Z @ 0x180007BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800454CC (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StartAnimation(
        __int64 a1,
        int a2,
        float *a3)
{
  __int64 v3; // rdi
  float *v4; // r9
  int v5; // r11d
  float v6; // xmm1_4
  int v7; // ebx
  int v8; // r10d
  int v9; // r8d
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // r10d
  int v13; // eax
  float v14; // xmm2_4
  int v15; // r8d
  int v16; // eax
  int started; // eax
  int v18; // ebx
  int v20; // edx
  int v21; // edx
  int v22; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1 + 24;
  if ( !a1 )
    v3 = 32LL;
  v4 = *(float **)v3;
  v5 = (int)*a3;
  v6 = a3[1];
  v7 = (int)v6;
  v8 = (int)(float)(*a3 + a3[2]);
  v9 = (int)(float)(v6 + a3[3]);
  v10 = 2;
  v11 = a2 - 2;
  if ( v11 )
  {
    v20 = v11 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xBD,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
            (const char *)0x8000FFFFLL,
            v22);
        v10 = 13;
      }
      else
      {
        v10 = 12;
      }
    }
    else
    {
      v10 = 4;
    }
  }
  v12 = v8 - v5;
  v13 = 0;
  if ( v12 >= 0 )
    v13 = v12;
  v14 = (float)v13;
  v15 = v9 - v7;
  v16 = 0;
  if ( v15 >= 0 )
    v16 = v15;
  v4[155] = (float)v5;
  v4[156] = (float)v7;
  v4[157] = v14;
  v4[158] = (float)v16;
  started = CTopLevelWindow3D::StartAnimation(v4, v10);
  v18 = started;
  if ( started < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x250,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)started);
  else
    v18 = 0;
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.toplevelwindow3dwrapper.cpp",
      (const char *)(unsigned int)v18,
      v22);
  CTopLevelWindow::SetSuppressBorderUpdates(*(CTopLevelWindow **)(*(_QWORD *)(*(_QWORD *)v3 + 336LL) + 440LL), 0);
  return 0LL;
}
