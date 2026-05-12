/*
 * XREFs of ?PmUuidCreate@@YAXPEAU_GUID@@@Z @ 0x1C0027400
 * Callers:
 *     ?PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z @ 0x1C0026C38 (-PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z.c)
 *     ?PmUpdateIdsGpt@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C00271CC (-PmUpdateIdsGpt@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     ?PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C002734C (-PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmUuidCreate(struct _GUID *a1)
{
  ULONG64 v2; // rax
  unsigned __int64 QpcTimeStamp; // [rsp+38h] [rbp+10h] BYREF

  if ( ExUuidCreate(a1) < 0 )
  {
    QpcTimeStamp = 0LL;
    v2 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    QpcTimeStamp = 0LL;
    *(_QWORD *)&a1->Data1 = v2;
    *(_QWORD *)a1->Data4 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
}
