/*
 * XREFs of sub_1405242E0 @ 0x1405242E0
 * Callers:
 *     sub_140A621FC @ 0x140A621FC (sub_140A621FC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall __noreturn sub_1405242E0(volatile signed __int32 *a1)
{
  ULONG_PTR v1; // r10
  unsigned __int8 CurrentIrql; // cl
  __int64 v4; // r9
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = qword_140C54A88;
  v6 = 0LL;
  LODWORD(v7) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  if ( *(_QWORD *)(v1 + 80) )
  {
    v7 = 0LL;
    v5 = *(_QWORD *)(v1 + 16);
    v6 = 0LL;
    LODWORD(v6) = 4;
    sub_14042A5E0(v5, &v6);
  }
  _InterlockedDecrement(&dword_140C0BB30);
  _InterlockedIncrement(a1);
  __halt();
}
