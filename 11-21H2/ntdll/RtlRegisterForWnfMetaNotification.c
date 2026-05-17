/*
 * XREFs of RtlRegisterForWnfMetaNotification @ 0x180059840
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800596D0 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 */

__int64 __fastcall RtlRegisterForWnfMetaNotification(_QWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  *a1 = 0LL;
  if ( !a3 || (a3 & 0x11) != 0 )
    return 3221225485LL;
  else
    return RtlpSubscribeWnfStateChangeNotificationInternal((_DWORD)a1, a2, -1, a4, a5, 0LL, 0, 1, a3);
}
