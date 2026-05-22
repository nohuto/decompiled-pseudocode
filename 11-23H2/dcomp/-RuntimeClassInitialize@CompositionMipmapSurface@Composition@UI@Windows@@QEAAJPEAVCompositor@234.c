/*
 * XREFs of ?RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x180193FEC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionMipmapSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18015673C (--$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??4?$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x18008603C (--4-$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVC.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E91C (--$_Resize@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocato.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionMipmapSurface::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        Microsoft::WRL2::NestableRuntimeClass *a3,
        Microsoft::WRL2::NestableRuntimeClass *a4,
        int a5,
        int a6)
{
  unsigned __int64 v7; // rax
  const char *v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // esi
  int v19; // eax
  unsigned int *v20; // r14
  Microsoft::WRL2::NestableRuntimeClass **v21; // r15
  __int64 v22; // rcx
  int v23; // edx
  DirectComposition::CDevice *v24; // rcx
  _QWORD *v25; // r12
  unsigned int v26; // esi
  __int64 v27; // rbp
  Microsoft::WRL2::NestableRuntimeClass *v28; // rdi
  __int64 v29; // rbx
  const char *v30; // [rsp+28h] [rbp-50h]
  _DWORD v31[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v33; // [rsp+98h] [rbp+20h] BYREF

  v33 = a4;
  v7 = (unsigned __int64)a4 >> 32;
  if ( SHIDWORD(a4) <= 0 )
  {
    v11 = "Height can't be zero or negative.";
    v12 = 53LL;
LABEL_28:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
      (const char *)0x80070057LL,
      (int)v11,
      v30);
    return 2147942487LL;
  }
  if ( (int)a4 <= 0 )
  {
    v11 = "Width can't be zero or negative.";
    v12 = 55LL;
    goto LABEL_28;
  }
  if ( SHIDWORD(a4) < (int)a4 )
    LODWORD(v7) = (_DWORD)a4;
  v13 = 0;
  while ( (unsigned int)v7 > 1 )
  {
    LODWORD(v7) = (unsigned int)v7 >> 1;
    ++v13;
  }
  v14 = 15;
  v15 = (unsigned int)a4;
  if ( (unsigned int)(v13 + 1) < 0xF )
    v14 = v13 + 1;
  if ( (int)a4 < SHIDWORD(v33) )
    v15 = HIDWORD(v33);
  if ( v15 < 1 << (v14 - 1) )
  {
    v11 = "Too many mip levels.";
    v12 = 61LL;
    goto LABEL_28;
  }
  if ( a6 != 1 )
  {
    v11 = "AlphaMode must be Premultiplied.";
    v12 = 64LL;
    goto LABEL_28;
  }
  v16 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
          (Windows::UI::Composition::ProxyObject *)a1,
          a2,
          37,
          0);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v19 = a5;
    v20 = (unsigned int *)(a1 + 184);
    *(_DWORD *)(a1 + 184) = v14;
    *(_QWORD *)(a1 + 176) = a4;
    *(_DWORD *)(a1 + 188) = v19;
    *(_DWORD *)(a1 + 192) = 1;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionGraphicsDevice>::operator=(
      (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 200),
      a3);
    v21 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 24);
    v22 = *(_QWORD *)(a1 + 24);
    v23 = *(_DWORD *)(a1 + 128);
    v31[0] = *(_DWORD *)(a1 + 180);
    v24 = *(DirectComposition::CDevice **)(v22 + 456);
    v31[1] = *(_DWORD *)(a1 + 176);
    v31[2] = *(_DWORD *)(a1 + 184);
    v31[3] = *(_DWORD *)(a1 + 188);
    v31[4] = *(_DWORD *)(a1 + 192);
    DirectComposition::CDevice::ResourceSetBufferProperty(v24, v23, 2, v31, 0x14uLL);
    v25 = (_QWORD *)(a1 + 208);
    std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Resize<std::_Value_init_tag>(
      a1 + 208,
      *(unsigned int *)(a1 + 184));
    v26 = 0;
    if ( *(_DWORD *)(a1 + 184) )
    {
      v27 = (a1 + 136) & -(__int64)(a1 != 0);
      do
      {
        v28 = *v21;
        v29 = *v25 + 56LL * v26;
        if ( *(Microsoft::WRL2::NestableRuntimeClass **)(v29 + 8) != *v21 )
        {
          if ( v28 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*v21);
          v33 = *(Microsoft::WRL2::NestableRuntimeClass **)(v29 + 8);
          *(_QWORD *)(v29 + 8) = v28;
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v33);
        }
        ++v26;
        *(_QWORD *)(v29 + 16) = v27;
      }
      while ( v26 < *v20 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
      (const char *)(unsigned int)v16);
    return v17;
  }
}
