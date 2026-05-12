/*
 * XREFs of PmRedirectRequest @ 0x1C000F320
 * Callers:
 *     ?PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00017A0 (-PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 */

void __fastcall PmRedirectRequest(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  KIRQL v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v4 = (_QWORD *)(a1 + 656);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_DWORD *)(a1 + 512) |= 0x20u;
    PmWakeupNotificationWorkItem(a1);
  }
  v6 = a2 + 21;
  *(_BYTE *)(a2[23] + 3LL) |= 1u;
  v7 = *(_QWORD **)(a1 + 664);
  if ( (_QWORD *)*v7 != v4 )
    __fastfail(3u);
  a2[22] = v7;
  *v6 = v4;
  *v7 = v6;
  *(_QWORD *)(a1 + 664) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v5);
}
