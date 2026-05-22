/*
 * XREFs of ?InsertScalar@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@M@Z @ 0x1800752E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBM@Z @ 0x18004C620 (--$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::InsertScalar(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v4; // rsi
  __int64 v6; // r8
  int inserted; // eax
  unsigned int v8; // edi
  unsigned int v10; // edx
  int v11; // ecx
  float v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  v4 = (__int64 *)((char *)this - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v4[4] & 2) != 0 )
  {
    if ( a2 )
    {
      v12 = a3;
      inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetScalarValue,float>(
                   v4,
                   a2,
                   v6,
                   0,
                   &v12);
      v8 = inserted;
      if ( inserted >= 0 )
      {
        v8 = 0;
LABEL_5:
        Microsoft::WRL2::ContextSession::EndApiEntry(v3);
        return v8;
      }
      v10 = 230;
      v11 = inserted;
    }
    else
    {
      v8 = -2147024809;
      v10 = 228;
      v11 = -2147024809;
    }
    DoStackCaptureDirect(v11, v10);
    goto LABEL_5;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 2147483667LL;
}
