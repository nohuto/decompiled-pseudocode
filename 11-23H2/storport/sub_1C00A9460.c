/*
 * XREFs of sub_1C00A9460 @ 0x1C00A9460
 * Callers:
 *     sub_1C003609C @ 0x1C003609C (sub_1C003609C.c)
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void *__fastcall sub_1C00A9460(__int64 a1)
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
