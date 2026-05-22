/*
 * XREFs of ?TryGetQuaternion@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUQuaternion@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z @ 0x180149700
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$TryGetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DQuaternion@@@Z @ 0x1801484A0 (--$TryGetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Compositi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::TryGetQuaternion(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        struct Windows::Foundation::Numerics::Quaternion *a3,
        enum Windows::UI::Composition::CompositionGetValueStatus *a4)
{
  Windows::UI::Composition::CompositionPropertySet *v4; // rbp
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  unsigned int v10; // r8d

  v4 = (Windows::UI::Composition::CompositionPropertySet::Api *)((char *)this - 136);
  *(_OWORD *)a3 = 0LL;
  v5 = 0;
  *(_DWORD *)a4 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)a4 = Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetQuaternionValue,D2DQuaternion>(
                        v4,
                        a2,
                        v10,
                        a3);
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x232u);
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
