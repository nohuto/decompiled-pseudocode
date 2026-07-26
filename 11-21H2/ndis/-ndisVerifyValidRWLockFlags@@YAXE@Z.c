/*
 * XREFs of ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1C00A60F8
 * Callers:
 *     ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A5CA0 (-ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A5D10 (-ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A5F50 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A5FD0 (-ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisVerifyValidRWLockFlags(unsigned __int8 a1)
{
  ULONG_PTR v1; // rbx
  KIRQL CurrentIrql; // al

  v1 = a1;
  if ( (a1 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    ndisBugCheckEx(0x2EuLL, 0LL, CurrentIrql, 0LL);
  }
  if ( (v1 & 0xFE) != 0 )
    ndisBugCheckEx(0x2DuLL, 0LL, v1, 0LL);
}
