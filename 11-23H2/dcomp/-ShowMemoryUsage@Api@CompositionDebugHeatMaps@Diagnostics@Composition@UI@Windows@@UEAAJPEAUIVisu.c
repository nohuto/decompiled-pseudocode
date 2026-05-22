/*
 * XREFs of ?ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18018AF00
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

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::Api::ShowMemoryUsage(
        Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::Api *this,
        struct Windows::UI::Composition::IVisual *a2)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // esi
  int v6; // eax
  const void *v7; // r8
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 40;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v11 = 0LL;
    v6 = Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::ValidateAndHide(v2, a2, &v11);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x73u);
      v9 = v11;
      if ( !v11 )
        goto LABEL_8;
    }
    else
    {
      v7 = v2 + 56;
      v8 = v11;
      Windows::UI::Composition::Visual::EnableHeatMap((__int64)v11, 2, v7, 0);
      v5 = 0;
      if ( !v8 )
        goto LABEL_8;
      v9 = v8;
    }
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    goto LABEL_8;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
