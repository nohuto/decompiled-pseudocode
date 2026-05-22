/*
 * XREFs of ?CreateCubeMap@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJIIEPEAPEAUICompositionCubeMap@Private@345@@Z @ 0x180125760
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAIAEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCubeMap@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAI2AEA_N@Z @ 0x180120240 (--$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::XUCPrivate::CreateCubeMap(
        Windows::UI::Composition::CompositorCommon::XUCPrivate *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct Windows::UI::Composition::Private::ICompositionCubeMap **a5)
{
  struct Windows::UI::Composition::Private::ICompositionCubeMap **v5; // r14
  struct Windows::UI::Composition::Compositor *v6; // rsi
  int v10; // ebx
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rdi
  unsigned int v14; // [rsp+30h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+38h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::Compositor *v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (Windows::UI::Composition::CompositorCommon::XUCPrivate *)((char *)this - 216);
  *a5 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 216));
  if ( (*((_BYTE *)v6 + 32) & 2) != 0 )
  {
    v19 = a3;
    v14 = a2;
    v17 = v6;
    LOBYTE(a5) = a4 != 0;
    v16 = 0LL;
    v15 = 0LL;
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::CompositionCubeMap,Windows::UI::Composition::Private::CompositionCubeMap,Windows::UI::Composition::Compositor *,unsigned int &,unsigned int &,bool &>(
            &v15,
            &v17,
            &v14,
            &v19,
            (char *)&a5);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = v15;
      v15 = 0LL;
      v10 = 0;
      v16 = v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA83,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v11);
      v12 = 0LL;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
    if ( v10 < 0 )
    {
      DoStackCaptureDirect(v10, 0x1A44u);
    }
    else
    {
      v16 = 0LL;
      *v5 = (struct Windows::UI::Composition::Private::ICompositionCubeMap *)(((unsigned __int64)v12 + 144) & -(__int64)(v12 != 0LL));
      v10 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v6);
  return (unsigned int)v10;
}
