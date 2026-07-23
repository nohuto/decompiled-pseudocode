/*
 * XREFs of sub_140281930 @ 0x140281930
 * Callers:
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     sub_1406F8074 @ 0x1406F8074 (sub_1406F8074.c)
 *     sub_1406F80E4 @ 0x1406F80E4 (sub_1406F80E4.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1406F84B0 @ 0x1406F84B0 (sub_1406F84B0.c)
 *     sub_1406F8640 @ 0x1406F8640 (sub_1406F8640.c)
 *     DbgkLkmdRegisterCallback @ 0x1408324C0 (DbgkLkmdRegisterCallback.c)
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 *     DbgkLkmdUnregisterCallback @ 0x14092B080 (DbgkLkmdUnregisterCallback.c)
 *     sub_14092B124 @ 0x14092B124 (sub_14092B124.c)
 *     PoUnregisterCoalescingCallback @ 0x14098EFE0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B2A60 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2B50 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 */

signed __int64 __fastcall sub_140281930(signed __int64 *a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ (unsigned __int64)*a1) >= 0xF )
    return sub_1402AD030(a2);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ (unsigned __int64)result) >= 0xF )
      return sub_1402AD030(a2);
  }
  return result;
}
