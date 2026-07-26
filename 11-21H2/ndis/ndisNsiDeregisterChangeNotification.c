/*
 * XREFs of ndisNsiDeregisterChangeNotification @ 0x1C01337A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall ndisNsiDeregisterChangeNotification(__int64 a1)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0x16u,
                            (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
                            a1);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0x17u,
                            (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
                            a1);
  }
  return result;
}
