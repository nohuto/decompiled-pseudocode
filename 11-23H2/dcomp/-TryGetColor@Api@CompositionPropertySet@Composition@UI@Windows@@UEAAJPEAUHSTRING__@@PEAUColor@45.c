/*
 * XREFs of ?TryGetColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUColor@45@PEAW4CompositionGetValueStatus@345@@Z @ 0x180149410
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$TryGetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180148248 (--$TryGetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@U.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::TryGetColor(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        struct Windows::UI::Color *a3,
        enum Windows::UI::Composition::CompositionGetValueStatus *a4)
{
  Windows::UI::Composition::CompositionPropertySet *v4; // rsi
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  unsigned int v10; // r8d
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h]

  v4 = (Windows::UI::Composition::CompositionPropertySet::Api *)((char *)this - 136);
  v5 = 0;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a4 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v11 = Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetColorValue,_D3DCOLORVALUE>(
              v4,
              a2,
              v10,
              &v13);
      *(_DWORD *)a4 = v11;
      if ( !v11 )
      {
        LOBYTE(v14) = (int)(float)((float)(*((float *)&v13 + 3) * 255.0) + 0.5);
        BYTE1(v14) = (int)(float)((float)(*(float *)&v13 * 255.0) + 0.5);
        BYTE2(v14) = (int)(float)((float)(*((float *)&v13 + 1) * 255.0) + 0.5);
        HIBYTE(v14) = (int)(float)((float)(*((float *)&v13 + 2) * 255.0) + 0.5);
        *(_DWORD *)a3 = v14;
      }
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x212u);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v8);
  return v5;
}
