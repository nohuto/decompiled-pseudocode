/*
 * XREFs of NdisCompletePnPEvent @ 0x1C007A8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall NdisCompletePnPEvent(int a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx
  LONG result; // eax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xCu,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      a2);
  v6 = *(struct _KEVENT **)(a3 + 24);
  *(_DWORD *)(a3 + 32) = a1;
  result = KeSetEvent(v6, 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0xDu,
             0xDu,
             (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
             a2);
  return result;
}
