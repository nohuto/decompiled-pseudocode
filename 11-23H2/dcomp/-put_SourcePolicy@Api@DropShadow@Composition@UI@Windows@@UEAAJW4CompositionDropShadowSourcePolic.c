/*
 * XREFs of ?put_SourcePolicy@Api@DropShadow@Composition@UI@Windows@@UEAAJW4CompositionDropShadowSourcePolicy@345@@Z @ 0x1800726B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::DropShadow::Api::put_SourcePolicy(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    if ( (_DWORD)v4 != *(_DWORD *)(a1 + 60) )
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 136) + 456LL),
        *(_DWORD *)(a1 - 32),
        5,
        v4);
      *(_DWORD *)(a1 + 60) = v4;
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
