/*
 * XREFs of STREAMCONNECTION_rundown @ 0x1800F50D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

__int64 __fastcall STREAMCONNECTION_rundown(_QWORD *a1)
{
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, a1);
  }
  return ReleaseStreamConnection(a1);
}
