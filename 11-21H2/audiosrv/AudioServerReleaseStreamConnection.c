/*
 * XREFs of AudioServerReleaseStreamConnection @ 0x1800F39E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x1800EF7EC (-ReleaseStreamConnection@@YAJPEAX@Z.c)
 */

__int64 __fastcall AudioServerReleaseStreamConnection(_QWORD **a1)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, a1);
  }
  result = 2147942487LL;
  if ( a1 )
  {
    result = ReleaseStreamConnection(*a1);
    *a1 = 0LL;
  }
  return result;
}
