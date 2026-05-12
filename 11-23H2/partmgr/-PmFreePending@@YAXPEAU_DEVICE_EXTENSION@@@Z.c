/*
 * XREFs of ?PmFreePending@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00035D0
 * Callers:
 *     ?PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0002ED0 (-PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmFreePending(KSPIN_LOCK *a1)
{
  KSPIN_LOCK *v1; // rbp
  _QWORD **v2; // rsi
  KIRQL v3; // al
  _QWORD *v4; // rdi
  KIRQL i; // r14
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v1 = a1 + 14;
  v2 = (_QWORD **)(a1 + 112);
  v3 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  v4 = *v2;
  for ( i = v3; v4 != v2; v4 = (_QWORD *)*v4 )
  {
    v6 = (_QWORD **)(v4 + 23);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(v7, 0);
    }
  }
  KeReleaseSpinLock(v1, i);
}
