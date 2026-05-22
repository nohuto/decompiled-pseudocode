/*
 * XREFs of ?CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionVirtualDrawingSurface@234@@Z @ 0x18003A518
 * Callers:
 *     ?CreateVirtualDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionVirtualDrawingSurface@345@@Z @ 0x18003A460 (-CreateVirtualDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVirtualDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18003A5E8 (--$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompos.c)
 *     ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ @ 0x180061C34 (-IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ.c)
 *     ??$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@?$vector@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@V?$allocator@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAUIInvalidatableDeviceObject@Composition@UI@Windows@@QEAPEAU2345@$$QEAPEAU2345@@Z @ 0x180064578 (--$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@-$vector@PEAUIInv.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::CreateVirtualDrawingSurface(
        Windows::UI::Composition::CompositionGraphicsDevice *a1,
        __int64 a2,
        int a3,
        int a4,
        _QWORD *a5)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  Windows::UI::Composition::CompositionGraphicsDevice *v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF
  int v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+88h] [rbp+48h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v5 = a5;
  v6 = 0LL;
  *a5 = 0LL;
  if ( !Windows::UI::Composition::CompositionGraphicsDevice::IsValid(a1) )
  {
    v9 = -2005270523;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)0x887A0005LL);
    return v9;
  }
  v14 = *((_QWORD *)a1 + 3);
  a5 = 0LL;
  v13 = a1;
  v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &>(
         (unsigned int)&a5,
         (unsigned int)&v14,
         (unsigned int)&v13,
         (unsigned int)&v16,
         (__int64)&v17,
         (__int64)&v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a5);
    return v9;
  }
  v10 = a5;
  if ( a5 )
    v6 = a5 + 19;
  v11 = (_QWORD *)*((_QWORD *)a1 + 34);
  a5 = v6;
  if ( v11 == *((_QWORD **)a1 + 35) )
  {
    std::vector<Windows::UI::Composition::IInvalidatableDeviceObject *>::_Emplace_reallocate<Windows::UI::Composition::IInvalidatableDeviceObject *>(
      (char *)a1 + 264,
      v11,
      &a5);
  }
  else
  {
    *v11 = v6;
    *((_QWORD *)a1 + 34) += 8LL;
  }
  *v5 = v10;
  return 0LL;
}
