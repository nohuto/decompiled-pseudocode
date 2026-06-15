/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$64 @ 0x18006DBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 */

__int64 __fastcall CVADServer::Initialize_::_1_::catch_64(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 252);
  *(_DWORD *)(a2 + 136) = v2;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, v2);
  }
  return 0LL;
}
