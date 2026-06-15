/*
 * XREFs of ?Invoke@CMasterVolumeNotification@@UEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180083E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMasterVolumeNotification::Invoke(__int64 a1, __int64 a2)
{
  return GenerateMediaEvent(*(_QWORD *)(a1 + 8), a2);
}
