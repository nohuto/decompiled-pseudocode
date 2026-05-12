/*
 * XREFs of PmRemoveIds @ 0x1C0003DC0
 * Callers:
 *     ?PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00047F4 (-PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     PmValidateIds @ 0x1C001CA28 (PmValidateIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmRemoveIds(__int64 a1)
{
  char *DeviceExtension; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD **v6; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // rcx

  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  KeWaitForSingleObject(DeviceExtension + 104, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  *(_DWORD *)(a1 + 512) &= ~0x4000u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v3);
  v4 = (_QWORD *)(a1 + 616);
  v5 = *(_QWORD **)(a1 + 616);
  if ( v5 != (_QWORD *)(a1 + 616) )
  {
    if ( (_QWORD *)v5[1] != v4 || (v10 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
LABEL_11:
      __fastfail(3u);
    *v4 = v10;
    *(_QWORD *)(v10 + 8) = v4;
    RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 192), v5);
  }
  v6 = (_QWORD **)(a1 + 632);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_11;
    v8 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_11;
    *v6 = v8;
    v8[1] = v6;
    RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 296), v7);
  }
  KeReleaseMutex((PRKMUTEX)(DeviceExtension + 104), 0);
  return 0LL;
}
