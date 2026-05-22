/*
 * XREFs of ?RuntimeClassInitialize@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHWND__@@W4_HwndTargetType@@@Z @ 0x1800850F0
 * Callers:
 *     ??$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowTarget@2345@AEAPEAVCompositor@345@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Details@WRL2@Microsoft@@YAJPEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Z @ 0x180085020 (--$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIHwndTarget@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@PEAUIHwndTarget@DirectComposition@@@Z @ 0x180085454 (--4-$ComPtr@UIHwndTarget@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@PEAUIHwndTarget@DirectCo.c)
 *     ?RuntimeClassInitialize@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAVCompositor@345@@Z @ 0x1800854B4 (-RuntimeClassInitialize@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAVCompositor@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>::RuntimeClassInitialize(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this,
        struct Windows::UI::Composition::Compositor *a2,
        __int64 a3,
        int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[0] = 0LL;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 57) + 48LL))(
             *((_QWORD *)a2 + 57),
             a3,
             1LL,
             v11);
      v8 = v7;
      if ( v7 >= 0 )
        goto LABEL_3;
      v10 = 72LL;
    }
    else
    {
      if ( a4 != 2 )
      {
        v8 = -2147024809;
        RoOriginateErrorW(2147942487LL, 0LL, L"Unsupported target type.");
        goto LABEL_5;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(*((_QWORD *)a2 + 57) + 16LL) + 568LL))(
             *((_QWORD *)a2 + 57) + 16LL,
             a3,
             v11);
      v8 = v7;
      if ( v7 >= 0 )
        goto LABEL_3;
      v10 = 78LL;
    }
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtdesktopwindowtargetg.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)a2 + 57) + 48LL))(
         *((_QWORD *)a2 + 57),
         a3,
         0LL,
         v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 65LL;
    goto LABEL_14;
  }
LABEL_3:
  v7 = Windows::UI::Composition::Desktop::DesktopWindowTarget::RuntimeClassInitialize(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 90LL;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<DirectComposition::IHwndTarget>::operator=((char *)this + 216, v11[0]);
  v8 = 0;
  *((_BYTE *)this + 208) = a4 == 1;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v11);
  return v8;
}
