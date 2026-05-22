/*
 * XREFs of ?put_ResampleMode@Api@ScaleVisual@Private@Composition@UI@Windows@@UEAAJW4CompositionResampleMode@3456@@Z @ 0x180182700
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::ScaleVisual::Api::put_ResampleMode(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 288);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 280) & 2) != 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 288) + 456LL),
      *(_DWORD *)(a1 - 184),
      42,
      v4);
    *(_DWORD *)(a1 + 16) = v4;
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
