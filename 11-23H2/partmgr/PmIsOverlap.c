/*
 * XREFs of PmIsOverlap @ 0x1C0004E2C
 * Callers:
 *     ?PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00017A0 (-PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 * Callees:
 *     <none>
 */

bool __fastcall PmIsOverlap(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  bool v6; // di
  _QWORD *v7; // rbx
  KIRQL v8; // dl
  _QWORD *i; // r9
  __int64 v10; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 112);
  v6 = 0;
  v7 = (_QWORD *)(a1 + 896);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v10 = i[4];
    if ( v10 > a2 )
    {
      v6 = a3 > v10 - a2;
      break;
    }
    if ( a2 - v10 < i[5] )
    {
      v6 = 1;
      break;
    }
  }
  KeReleaseSpinLock(v3, v8);
  return v6;
}
