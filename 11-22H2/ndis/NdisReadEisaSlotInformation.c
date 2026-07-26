/*
 * XREFs of NdisReadEisaSlotInformation @ 0x1C00C6810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 */

_UNKNOWN **__fastcall NdisReadEisaSlotInformation(_DWORD *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  char v3; // bl
  int v5; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            7u,
                            0xCu,
                            (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
                            a2);
  *a1 = -1073741637;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v5 = -1073741637;
    return (_UNKNOWN **)WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4u,
                          7u,
                          0xDu,
                          (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
                          v3,
                          v5);
  }
  return result;
}
