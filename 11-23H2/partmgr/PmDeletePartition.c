/*
 * XREFs of PmDeletePartition @ 0x1C0004D84
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 * Callees:
 *     <none>
 */

void __fastcall PmDeletePartition(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  void *v6; // rcx

  v2 = (_QWORD **)(a1 + 312);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    ExFreePoolWithTag(v3, 0);
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 48));
  v6 = *(void **)(a1 + 80);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  ObfDereferenceObject(*(PVOID *)(a1 + 16));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
