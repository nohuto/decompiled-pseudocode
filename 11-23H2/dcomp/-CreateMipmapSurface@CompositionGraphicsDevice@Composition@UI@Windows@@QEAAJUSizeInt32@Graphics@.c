/*
 * XREFs of ?CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionMipmapSurface@234@@Z @ 0x180156F8C
 * Callers:
 *     ?CreateMipmapSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionMipmapSurface@345@@Z @ 0x180156EA0 (-CreateMipmapSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graph.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ @ 0x180061C34 (-IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ.c)
 *     ??$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@?$vector@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@V?$allocator@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAUIInvalidatableDeviceObject@Composition@UI@Windows@@QEAPEAU2345@$$QEAPEAU2345@@Z @ 0x180064578 (--$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@-$vector@PEAUIInv.c)
 *     ??$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionMipmapSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18015673C (--$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::CreateMipmapSurface(
        Windows::UI::Composition::CompositionGraphicsDevice *a1,
        __int64 a2,
        int a3,
        int a4,
        Microsoft::WRL2::NestableRuntimeClass *a5)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rax
  _BYTE *v12; // rdx
  Windows::UI::Composition::CompositionGraphicsDevice *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF
  int v18; // [rsp+70h] [rbp+30h] BYREF
  int v19; // [rsp+78h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  if ( Windows::UI::Composition::CompositionGraphicsDevice::IsValid(a1) )
  {
    v8 = *((_QWORD *)a1 + 3);
    a5 = 0LL;
    v15 = v8;
    v14 = a1;
    v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionMipmapSurface,Windows::UI::Composition::CompositionMipmapSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &>(
           (__int64 *)&a5,
           &v15,
           &v14,
           &v17,
           &v18,
           &v19);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v10 = a5;
      if ( a5 )
        v11 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)a5 + 144);
      else
        v11 = 0LL;
      v12 = (_BYTE *)*((_QWORD *)a1 + 34);
      a5 = v11;
      if ( v12 == *((_BYTE **)a1 + 35) )
      {
        std::vector<Windows::UI::Composition::IInvalidatableDeviceObject *>::_Emplace_reallocate<Windows::UI::Composition::IInvalidatableDeviceObject *>(
          (__int64)a1 + 264,
          v12,
          &a5);
      }
      else
      {
        *(_QWORD *)v12 = v11;
        *((_QWORD *)a1 + 34) += 8LL;
      }
      a5 = 0LL;
      *(_QWORD *)v5 = v10;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&a5);
  }
  else
  {
    v7 = -2005270523;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)0x887A0005LL);
  }
  return v7;
}
