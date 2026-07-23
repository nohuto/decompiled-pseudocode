/*
 * XREFs of sub_1403DC824 @ 0x1403DC824
 * Callers:
 *     sub_1402D1304 @ 0x1402D1304 (sub_1402D1304.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403DC988 @ 0x1403DC988 (sub_1403DC988.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_1403DC824()
{
  char *PoolWithTag; // rax
  char *v1; // rbx
  char *v2; // rsi
  int v3; // eax
  int v4; // edi
  NTSTATUS v5; // eax
  __int128 v6; // [rsp+A0h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x50uLL, 0x52576343u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    v2 = PoolWithTag + 56;
    RtlInitUnicodeString(
      (PUNICODE_STRING)(PoolWithTag + 56),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management");
    *((_QWORD *)v1 + 5) = sub_1403A5C60;
    *((_QWORD *)v1 + 2) = sub_1403A73E0;
    *((_QWORD *)v1 + 3) = v1;
    *(_QWORD *)v1 = 0LL;
    v3 = sub_1403DC988(v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      DbgPrintEx(
        0x7Fu,
        0,
        "CcSetupWatchForRegistryChanges: Failed to open Key, status=0x%08x \"%wZ\"\n",
        (unsigned int)v3,
        v2);
    }
    else
    {
      v5 = ZwNotifyChangeKey(
             *((HANDLE *)v1 + 4),
             0LL,
             (PIO_APC_ROUTINE)v1,
             (PVOID)1,
             &IoStatusBlock,
             5u,
             1u,
             0LL,
             0,
             1u);
      v4 = v5;
      if ( v5 == 259 )
      {
        DbgPrintEx(0x7Fu, 2u, "CcSetupWatchForRegistryChanges: Queued for \"%wZ\"\n", v2);
LABEL_5:
        dword_140C54C5C = 1;
        goto LABEL_10;
      }
      if ( v5 >= 0 )
        goto LABEL_5;
      DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Failed, status=0x%08x for \"%wZ\"\n", (unsigned int)v5, v2);
    }
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_10:
  if ( v1 )
  {
    if ( v4 < 0 )
    {
      v6 = *(_OWORD *)(v1 + 56);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcSetupWatchForRegistryChanges: Queuing worker thread, status=0x%08x for \"%wZ\"\n",
        (unsigned int)v4,
        &v6);
      v1[72] = 1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v1, DelayedWorkQueue);
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Error-unexpected memory allocation!\n");
  }
}
