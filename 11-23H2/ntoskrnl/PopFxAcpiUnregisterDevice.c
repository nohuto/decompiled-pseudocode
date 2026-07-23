/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x1405A14C0
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405A0F94 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140312780 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403D6CF0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x14058A0D0 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x14058BB40 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405A311C (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 272);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 272), (PVOID)0x72466F50, &Src, 1u, 0x20u);
  if ( *((char **)P + 25) != P + 200 )
    PopFxRemoveAcpiDevice(v5, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 206, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P, 2);
  return v6;
}
