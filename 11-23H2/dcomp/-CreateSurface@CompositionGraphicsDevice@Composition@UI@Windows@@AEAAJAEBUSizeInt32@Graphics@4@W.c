/*
 * XREFs of ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_N3PEAPEAVCompositionDrawingSurface@234@@Z @ 0x18006157C
 * Callers:
 *     ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_NPEAPEAVCompositionDrawingSurface@234@@Z @ 0x1800617A4 (-CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEBUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@AEA_NAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEBUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@AEA_N6@Z @ 0x1800613E8 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ @ 0x180061C34 (-IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ.c)
 *     ??$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@?$vector@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@V?$allocator@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAUIInvalidatableDeviceObject@Composition@UI@Windows@@QEAPEAU2345@$$QEAPEAU2345@@Z @ 0x180064578 (--$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@-$vector@PEAUIInv.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::CreateSurface(
        Windows::UI::Composition::CompositionGraphicsDevice *a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  _QWORD *v7; // rsi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _BYTE v17[8]; // [rsp+40h] [rbp-20h] BYREF
  Windows::UI::Composition::CompositionGraphicsDevice *v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+98h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v7 = a7;
  v17[0] = 0;
  *a7 = 0LL;
  if ( Windows::UI::Composition::CompositionGraphicsDevice::IsValid(a1) )
  {
    v10 = *((_QWORD *)a1 + 3);
    a7 = 0LL;
    v19 = v10;
    v18 = a1;
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 const &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &,bool &,bool &>(
            &a7,
            &v19,
            &v18,
            a2,
            &v21,
            &v22,
            v17,
            &a6);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C0,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
        (const char *)(unsigned int)v11);
    }
    else
    {
      v13 = a7;
      if ( a7 )
        v14 = a7 + 19;
      else
        v14 = 0LL;
      v15 = (_QWORD *)*((_QWORD *)a1 + 34);
      a7 = v14;
      if ( v15 == *((_QWORD **)a1 + 35) )
      {
        std::vector<Windows::UI::Composition::IInvalidatableDeviceObject *>::_Emplace_reallocate<Windows::UI::Composition::IInvalidatableDeviceObject *>(
          (char *)a1 + 264,
          v15,
          &a7);
      }
      else
      {
        *v15 = v14;
        *((_QWORD *)a1 + 34) += 8LL;
      }
      a7 = 0LL;
      *v7 = v13;
      v12 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&a7);
  }
  else
  {
    v12 = -2005270523;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)0x887A0005LL);
  }
  return v12;
}
