/*
 * XREFs of ?InsertMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@5@@Z @ 0x180082F10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54 (--$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::InsertMatrix4x4(
        __int64 a1,
        HSTRING a2,
        __int64 a3)
{
  Windows::UI::Composition::CompositionObject *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v7; // r8
  int inserted; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx
  int v12; // ecx

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
    v11 = 378;
    v12 = -2147024809;
LABEL_9:
    DoStackCaptureDirect(v12, v11);
    goto LABEL_5;
  }
  inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetMatrix4x4Value,D2DMatrix>(
               v3,
               a2,
               v7,
               0,
               a3);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v11 = 380;
    v12 = inserted;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
