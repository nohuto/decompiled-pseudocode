/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003DCF0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x18003D700 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U-$I.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x18003D760 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D760.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18003D7C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D7C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18003D820 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D820.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18003D880 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D880.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18003D8E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003D8E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18003DA50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_18003DA50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v1 = *(_QWORD *)(a1 + 176);
  v3 = 0x7FFFFFFF;
  if ( v1 < 0 )
  {
LABEL_7:
    while ( 1 )
    {
      v7 = *(_DWORD *)(2 * v1 + 0x10);
      if ( v7 == 0x7FFFFFFF )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v7 + 1, v7) )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v4 = v1 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 176), v1 + 1, v1);
      v5 = v1 == v6;
      v1 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_7;
    }
  }
  return v3;
}
