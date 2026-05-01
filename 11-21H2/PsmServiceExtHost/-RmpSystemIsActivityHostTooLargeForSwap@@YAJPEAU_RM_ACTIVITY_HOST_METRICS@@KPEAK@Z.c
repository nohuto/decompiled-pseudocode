/*
 * XREFs of ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180038B20
 * Callers:
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038AB0 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800871F0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemIsActivityHostTooLargeForSwap(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  result = MemUtilIsWorkingSetTooLargeForSwap(*((_QWORD *)a1 + 3), a2, a3);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)dword_1800DC1E0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      {
        v10 = 0;
        v8 = &v6;
        v6 = v5;
        v9 = 4;
        tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1800C5EBA, 0LL, 0LL, 3u, &v7);
      }
    }
    return 3221225473LL;
  }
  return result;
}
