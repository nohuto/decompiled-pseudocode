/*
 * XREFs of ?InsertColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z @ 0x1800843A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     ??$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBU_D3DCOLORVALUE@@@Z @ 0x18006F034 (--$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@U.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::InsertColor(
        __int64 a1,
        HSTRING a2,
        unsigned int a3)
{
  Windows::UI::Composition::CompositionObject *v3; // rbp
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v7; // r8
  int inserted; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx
  int v12; // ecx
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  v3 = (Windows::UI::Composition::CompositionObject *)(a1 - 136);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    v11 = 312;
    v12 = -2147024809;
LABEL_9:
    DoStackCaptureDirect(v12, v11);
    goto LABEL_5;
  }
  v13 = *(_OWORD *)Windows::UI::Composition::AnimationHelper::WUColorToD2DColor((float *)&v13, a3);
  inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetColorValue,_D3DCOLORVALUE>(
               v3,
               a2,
               v7,
               0,
               (__int64)&v13);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v11 = 317;
    v12 = inserted;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
