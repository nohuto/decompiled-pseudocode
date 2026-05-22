/*
 * XREFs of ?CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@MPEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180119810
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAM@Z @ 0x180118CA8 (--$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEA.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay__Windows::UI::Composition::Internal::HolographicCompositionDisplay___Windows::Internal::ComTaskPoolHandler__lambda_4328ccf16b233a81f6b03adc706b18ed___ @ 0x180118E6C (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_180118E6C.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics::CreateAsyncWithRefreshRate(
        __int64 a1,
        struct IUnknown *a2,
        const struct _GUID *a3,
        float a4,
        __int64 *a5)
{
  int v6; // edi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // edx
  int v11; // ecx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+20h] [rbp-30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+40h] [rbp-10h] BYREF

  v13 = 0LL;
  *(float *)&v14 = a4;
  if ( a2 )
  {
    v6 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
           &v13);
    if ( v6 )
      goto LABEL_6;
    v7 = v13;
    Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v13);
    if ( (*((_BYTE *)v7 + 32) & 2) == 0 )
    {
      v6 = -2147483629;
      RoOriginateErrorW(
        2147483667LL,
        0LL,
        L"The given object has already been closed / disposed and may no longer be used.");
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v7);
      goto LABEL_6;
    }
    v17 = v7;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v7);
    v13 = 0LL;
    v15 = (__int64)v7;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v13);
    v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::HolographicCompositionDisplay,Windows::UI::Composition::Internal::HolographicCompositionDisplay,Windows::UI::Composition::Compositor *,_GUID &,float &>(
           &v13,
           (struct Windows::UI::Composition::Compositor **)&v15,
           a3,
           (float *)&v14);
    v6 = v8;
    if ( v8 < 0 )
    {
      v10 = 318;
      v11 = v8;
    }
    else
    {
      v14 = v13;
      if ( v13 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v13);
      v16 = 0;
      v15 = 0x8000000003LL;
      v6 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay__Windows::UI::Composition::Internal::HolographicCompositionDisplay___Windows::Internal::ComTaskPoolHandler__lambda_4328ccf16b233a81f6b03adc706b18ed___(
             (__int64)&v15,
             a5,
             v9,
             &v14);
      Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v14);
      if ( v6 >= 0 )
      {
        v6 = 0;
LABEL_15:
        Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v13);
        Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(&v17);
        Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v7);
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
        return (unsigned int)v6;
      }
      v10 = 341;
      v11 = v6;
    }
    DoStackCaptureDirect(v11, v10);
    goto LABEL_15;
  }
  v6 = -2147024809;
  RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return (unsigned int)v6;
}
