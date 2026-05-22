/*
 * XREFs of ?InsertQuaternion@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@5@@Z @ 0x180148E80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DQuaternion@@@Z @ 0x180147C80 (--$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Compositi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::InsertQuaternion(
        __int64 a1,
        HSTRING a2,
        __int128 *a3)
{
  Windows::UI::Composition::CompositionObject *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // ecx
  int inserted; // eax

  v3 = (Windows::UI::Composition::CompositionObject *)(a1 - 136);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetQuaternionValue,D2DQuaternion>(
                   v3,
                   a2,
                   v7,
                   v8,
                   a3);
      v9 = inserted;
      if ( inserted >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 338;
      v11 = inserted;
    }
    else
    {
      v9 = -2147024809;
      v10 = 336;
      v11 = -2147024809;
    }
    DoStackCaptureDirect(v11, v10);
    goto LABEL_9;
  }
  v9 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
