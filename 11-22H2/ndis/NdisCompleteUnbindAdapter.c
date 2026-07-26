/*
 * XREFs of NdisCompleteUnbindAdapter @ 0x1C00C5DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall NdisCompleteUnbindAdapter(__int64 a1, int a2)
{
  LONG result; // eax

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xCu,
      (struct _GUID *)&WPP_50c81d7a54e933505abf2e2dd0037343_Traceguids,
      a1);
  *(_DWORD *)(a1 + 88) = a2;
  result = KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             6u,
             0xDu,
             (struct _GUID *)&WPP_50c81d7a54e933505abf2e2dd0037343_Traceguids,
             a1);
  return result;
}
