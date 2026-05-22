/*
 * XREFs of ?TryGetMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z @ 0x180149610
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??$TryGetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1801483B8 (--$TryGetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::TryGetMatrix4x4(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        struct Windows::Foundation::Numerics::Matrix4x4 *a3,
        enum Windows::UI::Composition::CompositionGetValueStatus *a4)
{
  unsigned int v8; // edi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  unsigned int v13; // r8d
  _OWORD v15[4]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v15, 0, sizeof(v15));
  v8 = 0;
  v9 = v15[1];
  *(_OWORD *)a3 = v15[0];
  v10 = v15[2];
  *((_OWORD *)a3 + 1) = v9;
  v11 = v15[3];
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *(_DWORD *)a4 = 0;
  v12 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v12);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)a4 = Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
                        (Windows::UI::Composition::CompositionPropertySet::Api *)((char *)this - 136),
                        a2,
                        v13,
                        a3);
    }
    else
    {
      v8 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x264u);
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v12);
  return v8;
}
