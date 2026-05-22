/*
 * XREFs of ?TryGetVector3@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUVector3@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z @ 0x18000ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$TryGetProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector3@@@Z @ 0x18000B248 (--$TryGetProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::TryGetVector3(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        enum Windows::UI::Composition::CompositionGetValueStatus *a4)
{
  char *v4; // r14
  unsigned int v5; // edi
  Microsoft::WRL2::ContextSession *v9; // rbx
  __int64 v10; // r8

  v4 = (char *)this - 136;
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  *((_DWORD *)a3 + 2) = 0;
  *(_DWORD *)a4 = 0;
  v9 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  if ( (v4[32] & 2) != 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)a4 = Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetVector3Value,D2DVector3>(
                        v4,
                        a2,
                        v10,
                        a3,
                        0LL);
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x1E0u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  return v5;
}
