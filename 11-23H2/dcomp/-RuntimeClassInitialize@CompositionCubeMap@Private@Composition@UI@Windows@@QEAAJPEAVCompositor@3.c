/*
 * XREFs of ?RuntimeClassInitialize@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@II_N@Z @ 0x18017EECC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAIAEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCubeMap@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAI2AEA_N@Z @ 0x180120240 (--$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E91C (--$_Resize@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocato.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionCubeMap::RuntimeClassInitialize(
        Windows::UI::Composition::Private::CompositionCubeMap *this,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5)
{
  int v8; // eax
  unsigned int v9; // ebp
  const char *v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  Microsoft::WRL2::NestableRuntimeClass **v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 v18; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v19; // rbx
  const char *v20; // [rsp+28h] [rbp-20h]
  Microsoft::WRL2::NestableRuntimeClass *v21; // [rsp+30h] [rbp-18h] BYREF
  BOOL v22; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 33, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  *((_BYTE *)this + 192) = a5;
  *((_DWORD *)this + 46) = a3;
  *((_DWORD *)this + 47) = a4;
  if ( !a3 )
  {
    v11 = "Size can't be zero.";
    v12 = 64LL;
LABEL_18:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
      (const char *)0x80070057LL,
      (int)v11,
      v20);
    return 2147942487LL;
  }
  if ( !a4 )
  {
    v11 = "MipLevels can't be zero.";
    v12 = 69LL;
    goto LABEL_18;
  }
  if ( a4 > 0x1F || a3 < 1 << a4 )
  {
    v11 = "Too many mipmap levels for cube map size.";
    v12 = 74LL;
    goto LABEL_18;
  }
  v21 = (Microsoft::WRL2::NestableRuntimeClass *)__PAIR64__(a4, a3);
  v13 = *((_DWORD *)this + 32);
  v14 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 24);
  v15 = *((_QWORD *)this + 3);
  v22 = a5;
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(v15 + 456),
    v13,
    2,
    &v21,
    0xCuLL);
  std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Resize<std::_Value_init_tag>((__int64)this + 160, 6 * a4);
  v16 = *((_QWORD *)this + 20);
  v17 = *((_QWORD *)this + 21);
  if ( v16 != v17 )
  {
    v18 = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
    do
    {
      v19 = *v14;
      if ( *(Microsoft::WRL2::NestableRuntimeClass **)(v16 + 8) != *v14 )
      {
        if ( v19 )
          Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*v14);
        v21 = *(Microsoft::WRL2::NestableRuntimeClass **)(v16 + 8);
        *(_QWORD *)(v16 + 8) = v19;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
      }
      *(_QWORD *)(v16 + 16) = v18;
      v16 += 56LL;
    }
    while ( v16 != v17 );
  }
  return 0LL;
}
