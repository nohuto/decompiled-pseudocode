/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C009E864
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C009E810 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  InputExtensibilityCallout *v1; // rdi
  void *v2; // rcx

  v1 = gpInputExtensibilityCallout;
  RIMLockExclusive((__int64)gpInputExtensibilityCallout + 8);
  v2 = (void *)*((_QWORD *)v1 + 3);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)v1 + 3) = 0LL;
  }
  *((_QWORD *)v1 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 8, 0LL);
  KeLeaveCriticalRegion();
}
