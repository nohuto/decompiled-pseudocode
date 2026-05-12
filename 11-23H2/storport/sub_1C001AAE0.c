/*
 * XREFs of sub_1C001AAE0 @ 0x1C001AAE0
 * Callers:
 *     sub_1C00454F4 @ 0x1C00454F4 (sub_1C00454F4.c)
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 *     sub_1C00A4268 @ 0x1C00A4268 (sub_1C00A4268.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C001AAE0(__int64 a1)
{
  void *v2; // rcx
  __int16 v3; // bx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( ZwNotifyChangeKey(v2, 0LL, (PIO_APC_ROUTINE)(a1 + 128), (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u) >= 0 )
      ++*(_WORD *)(a1 + 184);
    (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  }
  v3 = --*(_WORD *)(a1 + 184);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  if ( !v3 )
    KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
}
