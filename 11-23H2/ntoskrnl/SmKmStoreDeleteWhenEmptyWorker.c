/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x140343510
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     SmKmStoreDelete @ 0x1407B75C8 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v5 = SmKmStoreRefFromStoreIndex(v1, v2, v3, v4);
  SmKmStoreDelete(v6, *(unsigned int *)(*(_QWORD *)v5 + 6016LL), 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v1 + 256))(v1, 0LL, 9LL);
}
