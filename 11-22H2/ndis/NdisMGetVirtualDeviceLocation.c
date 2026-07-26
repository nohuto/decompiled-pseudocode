/*
 * XREFs of NdisMGetVirtualDeviceLocation @ 0x1C007A5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall NdisMGetVirtualDeviceLocation(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6))(__int64, _QWORD, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v11; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x75u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      a1);
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 4800);
  if ( result )
  {
    v11 = *(_QWORD *)(a1 + 4816);
    if ( v11 )
      result = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(v11, a2, a3, a4, a6);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))WPP_RECORDER_SF_q(
                                                                                 *((_QWORD *)WPP_GLOBAL_Control + 8),
                                                                                 4u,
                                                                                 0x1Au,
                                                                                 0x76u,
                                                                                 (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
                                                                                 a1);
  return result;
}
