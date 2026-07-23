/*
 * XREFs of MiCreateVadEventBitmap @ 0x1407CD0D4
 * Callers:
 *     MiCreateWriteWatchView @ 0x1407CCDD4 (MiCreateWriteWatchView.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCE34 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x140289DD0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *Pool; // rbx
  int v10; // edi
  __int64 v11; // r9

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 9LL);
  Pool = (char *)MiAllocatePool(64, v8, 0x77776D4Du);
  if ( !Pool )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)Pool + 16) = a4;
    *((_QWORD *)Pool + 2) = Pool + 72;
    *((_QWORD *)Pool + 1) = a3;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 1LL, v11);
    return 0LL;
  }
}
