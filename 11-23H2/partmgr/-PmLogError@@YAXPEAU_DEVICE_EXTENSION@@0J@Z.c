/*
 * XREFs of ?PmLogError@@YAXPEAU_DEVICE_EXTENSION@@0J@Z @ 0x1C0027074
 * Callers:
 *     ?PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z @ 0x1C0026C38 (-PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0007B40 (RtlStringCbPrintfW.c)
 */

void __fastcall PmLogError(PVOID *a1, struct _DEVICE_EXTENSION *a2, int a3)
{
  wchar_t *ErrorLogEntry; // rax
  wchar_t *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  wchar_t *v10; // rcx
  char *Pool2; // rax
  void *v12; // rbx
  int v13; // ecx
  struct _DEVICE_OBJECT *v14; // rcx

  ErrorLogEntry = (wchar_t *)IoAllocateErrorLogEntry(a1[1], 0xB0u);
  v7 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    *((_DWORD *)ErrorLogEntry + 1) = 3145730;
    *((_DWORD *)ErrorLogEntry + 3) = a3;
    ErrorLogEntry[1] = 0;
    RtlStringCbPrintfW(ErrorLogEntry + 24, 0x80uLL, L"%d", *((unsigned int *)a1 + 42));
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8 + 24] );
    v9 = -1LL;
    v10 = &v7[v8 + 25];
    do
      ++v9;
    while ( v10[v9] );
    RtlStringCbPrintfW(v10, (unsigned int)(2 * (63 - v9)), L"%d", *((unsigned int *)a2 + 42));
    IoWriteErrorLogEntry(v7);
    if ( a3 == -2147221446 )
    {
      Pool2 = (char *)ExAllocatePool2(66LL, 40LL, 1112108368LL);
      v12 = Pool2;
      if ( Pool2 )
      {
        v13 = *((_DWORD *)a2 + 42);
        *((_DWORD *)Pool2 + 8) = -1;
        *(_DWORD *)Pool2 = 2621441;
        *(GUID *)(Pool2 + 4) = GUID_IO_DISK_CLONE_ARRIVAL;
        *((_DWORD *)Pool2 + 9) = v13;
        v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 3);
        *((_QWORD *)Pool2 + 3) = 0LL;
        IoReportTargetDeviceChangeAsynchronous(v14, Pool2, 0LL, 0LL);
        ExFreePoolWithTag(v12, 0);
      }
    }
  }
}
