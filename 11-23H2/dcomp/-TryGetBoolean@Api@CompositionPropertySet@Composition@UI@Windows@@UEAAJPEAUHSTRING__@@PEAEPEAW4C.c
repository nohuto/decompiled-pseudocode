/*
 * XREFs of ?TryGetBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAEPEAW4CompositionGetValueStatus@345@@Z @ 0x180149340
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$TryGetProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@123@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x1801481B0 (--$TryGetProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::TryGetBoolean(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        bool *a3,
        enum Windows::UI::Composition::CompositionGetValueStatus *a4)
{
  Windows::UI::Composition::CompositionPropertySet *v4; // rbp
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  unsigned int v10; // r8d
  int v11; // eax
  bool v12; // zf
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (Windows::UI::Composition::CompositionPropertySet::Api *)((char *)this - 144);
  v5 = 0;
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v11 = Windows::UI::Composition::CompositionPropertySet::TryGetProperty<PropertySetBooleanValue,bool>(
              v4,
              a2,
              v10,
              &v14);
      v12 = v14 == 0;
      *(_DWORD *)a4 = v11;
      *a3 = !v12;
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x193u);
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
