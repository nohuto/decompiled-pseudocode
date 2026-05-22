/*
 * XREFs of ?ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@W4CompositionDebugOverdrawContentKinds@3456@@Z @ 0x18018AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EnableHeatMap@Visual@Composition@UI@Windows@@QEAAXW4Enum@MilHeatMapMode@@AEBU_D3DCOLORVALUE@@W4CompositionDebugOverdrawContentKinds@Diagnostics@234@@Z @ 0x18010B248 (-EnableHeatMap@Visual@Composition@UI@Windows@@QEAAXW4Enum@MilHeatMapMode@@AEBU_D3DCOLORVALUE@@W4.c)
 *     ?ValidateAndHide@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAUIVisual@345@AEAV?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18018B168 (-ValidateAndHide@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAUIVisual@3.c)
 */

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::Api::ShowOverdraw(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v7; // esi
  int v8; // eax
  const void *v9; // r8
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 40;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 40 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    v13 = 0LL;
    v8 = Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::ValidateAndHide(v3, a2, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x8Cu);
      v11 = v13;
      if ( !v13 )
        goto LABEL_8;
    }
    else
    {
      v9 = (const void *)(v3 + 56);
      v10 = v13;
      Windows::UI::Composition::Visual::EnableHeatMap((__int64)v13, 1, v9, a3);
      v7 = 0;
      if ( !v10 )
        goto LABEL_8;
      v11 = v10;
    }
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    goto LABEL_8;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
