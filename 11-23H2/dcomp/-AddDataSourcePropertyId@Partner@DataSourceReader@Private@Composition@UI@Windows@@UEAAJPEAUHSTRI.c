/*
 * XREFs of ?AddDataSourcePropertyId@Partner@DataSourceReader@Private@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@3456@@Z @ 0x1801848C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z @ 0x18018473C (-AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DataSourceReader::Partner::AddDataSourcePropertyId(
        __int64 a1,
        HSTRING a2,
        int a3,
        int a4)
{
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v9; // edi
  int v10; // eax

  v4 = a1 - 136;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v10 = Windows::UI::Composition::Private::DataSourceReader::AddDataSourcePropertyId(v4, a2, a3, a4);
    v9 = v10;
    if ( v10 < 0 )
      DoStackCaptureDirect(v10, 0xA2u);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v9;
}
