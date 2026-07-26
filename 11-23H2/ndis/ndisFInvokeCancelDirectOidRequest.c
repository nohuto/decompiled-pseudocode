/*
 * XREFs of ndisFInvokeCancelDirectOidRequest @ 0x1C00B4FD4
 * Callers:
 *     ndisDoCancelDirectOidRequest @ 0x1C00B4CF0 (ndisDoCancelDirectOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeCancelDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      a1);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 312))(*(_QWORD *)(a1 + 24), a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0xBu,
             0xDu,
             (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
             a1);
  return result;
}
