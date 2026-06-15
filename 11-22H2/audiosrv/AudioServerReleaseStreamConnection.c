/*
 * XREFs of AudioServerReleaseStreamConnection @ 0x180124AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x18011EE7C (-ReleaseStreamConnection@@YAJPEAX@Z.c)
 */

__int64 __fastcall AudioServerReleaseStreamConnection(_QWORD **a1)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, a1);
  }
  result = 2147942487LL;
  if ( a1 )
  {
    result = ReleaseStreamConnection(*a1);
    *a1 = 0LL;
  }
  return result;
}
