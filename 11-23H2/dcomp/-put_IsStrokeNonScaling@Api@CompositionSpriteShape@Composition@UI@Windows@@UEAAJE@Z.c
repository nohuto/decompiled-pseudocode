/*
 * XREFs of ?put_IsStrokeNonScaling@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJE@Z @ 0x1801721C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::put_IsStrokeNonScaling(
        Windows::UI::Composition::CompositionSpriteShape::Api *this,
        unsigned __int8 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // edx

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 160) & 2) != 0 )
  {
    if ( *((_BYTE *)this + 76) != (_BYTE)v4 )
    {
      v6 = *((_QWORD *)this - 21);
      v7 = *((_DWORD *)this - 16);
      *((_BYTE *)this + 76) = v4;
      DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v6 + 456), v7, 4, v4);
    }
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
