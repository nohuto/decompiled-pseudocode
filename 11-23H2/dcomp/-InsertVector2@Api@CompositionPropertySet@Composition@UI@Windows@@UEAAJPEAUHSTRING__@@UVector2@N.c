/*
 * XREFs of ?InsertVector2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector2@Numerics@Foundation@5@@Z @ 0x180012440
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector2@@@Z @ 0x18000FA50 (--$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::InsertVector2(
        __int64 a1,
        HSTRING a2,
        __int64 a3)
{
  Windows::UI::Composition::CompositionObject *v3; // rsi
  Microsoft::WRL2::ContextSession *v4; // rbx
  __int64 v6; // r8
  int inserted; // eax
  unsigned int v8; // edi
  unsigned int v10; // edx
  int v11; // ecx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (Windows::UI::Composition::CompositionObject *)(a1 - 136);
  v12[0] = a3;
  v4 = *(Microsoft::WRL2::ContextSession **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v8 = -2147024809;
    v10 = 249;
    v11 = -2147024809;
LABEL_9:
    DoStackCaptureDirect(v11, v10);
    goto LABEL_5;
  }
  inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetVector2Value,D2DVector2>(
               v3,
               a2,
               v6,
               0,
               (__int64)v12);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 251;
    v11 = inserted;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v8;
}
