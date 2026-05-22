/*
 * XREFs of ?RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIUnknown@@@Z @ 0x180064968
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIUnknown@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionGraphicsDevice@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIUnknown@@@Z @ 0x18006569C (--$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800655A8 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Attach@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x180065830 (-Attach@-$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@Di.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionGraphicsDevice *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct IUnknown *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  bool v16; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+20h] BYREF

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  v7 = *((_QWORD *)this + 3);
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v7 + 456) + 8LL) + 56LL))(
         *(_QWORD *)(v7 + 456) + 8LL,
         a3,
         &v18);
  v9 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v8);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v18);
    return v6;
  }
  v10 = v18;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<DirectComposition::CSurfaceFactory>::Attach((char *)this + 208, v10);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((char *)this + 216, a3);
  v12 = *((_QWORD *)this + 3);
  v13 = *(_BYTE *)(v12 + 452);
  if ( (v13 & 1) == 0 )
  {
    v16 = *(_DWORD *)(v12 + 448) == 0;
    *(_BYTE *)(v12 + 452) = v13 | 1;
    if ( v16 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v12,
        v11);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
