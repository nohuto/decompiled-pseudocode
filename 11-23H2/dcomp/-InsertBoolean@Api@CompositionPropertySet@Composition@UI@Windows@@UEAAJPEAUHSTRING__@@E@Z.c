/*
 * XREFs of ?InsertBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@E@Z @ 0x180094920
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEB_N@Z @ 0x180092B28 (--$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::InsertBoolean(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        char a3)
{
  Windows::UI::Composition::CompositionObject *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int inserted; // eax
  unsigned int v10; // edi
  unsigned int v12; // edx
  int v13; // ecx
  bool v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (Windows::UI::Composition::CompositionPropertySet::Api *)((char *)this - 144);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v10 = -2147024809;
    v12 = 207;
    v13 = -2147024809;
LABEL_9:
    DoStackCaptureDirect(v13, v12);
    goto LABEL_5;
  }
  v14 = a3 != 0;
  inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetBooleanValue,bool>(
               v3,
               a2,
               v7,
               v8,
               (__int64)&v14);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v12 = 209;
    v13 = inserted;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v10;
}
