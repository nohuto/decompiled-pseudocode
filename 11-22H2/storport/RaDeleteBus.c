/*
 * XREFs of RaDeleteBus @ 0x1C00A8290
 * Callers:
 *     RaidAdapterHack @ 0x1C0035B8C (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1C003AB5C (RaidDeleteAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

void *__fastcall RaDeleteBus(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset_0((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
