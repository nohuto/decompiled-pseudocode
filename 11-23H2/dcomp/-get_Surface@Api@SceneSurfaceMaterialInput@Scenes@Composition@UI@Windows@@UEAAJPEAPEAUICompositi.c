/*
 * XREFs of ?get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@456@@Z @ 0x180145420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$InitApiData@AEAY0DI@$$CBGAEAY0M@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBGAEAY0M@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3358 (--$InitApiData@AEAY0DI@$$CBGAEAY0M@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBG.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api::get_Surface(
        volatile int **this,
        struct Windows::UI::Composition::ICompositionSurface **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v7; // rdi
  volatile int *v9; // [rsp+40h] [rbp+8h] BYREF
  const char *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( !wil::ProcessShutdownInProgress((wil *)this) && _InterlockedIncrement(&dword_180220950) == 1 )
  {
    v10 = 0LL;
    v9 = &dword_180220950;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[56],unsigned short const (&)[12],std::nullptr_t,long volatile *>(
      v4,
      L"get_Surface",
      &v10,
      &v9);
  }
  *a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)*(this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(this - 17) & 2) != 0 )
  {
    v7 = this[2];
    v9 = v7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    v9 = 0LL;
    *a2 = (struct Windows::UI::Composition::ICompositionSurface *)v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v5;
}
