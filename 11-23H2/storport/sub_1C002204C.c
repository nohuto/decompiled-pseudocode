/*
 * XREFs of sub_1C002204C @ 0x1C002204C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C002204C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // rax
  MEMORY_CACHING_TYPE v6; // r9d
  void *v7; // r10
  SIZE_T v8; // r11
  char v10; // [rsp+20h] [rbp-18h]

  v5 = sub_1C000E2EC(a1);
  if ( !v5 )
    return 3238002694LL;
  if ( *((_BYTE *)v5 + 768) && v5[197] == 3 )
  {
    v10 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, void *, char))(*(_QWORD *)(*((_QWORD *)v5 + 95) + 8LL) + 24LL))(
      *((_QWORD *)v5 + 95),
      (unsigned int)v8,
      a5,
      v7,
      v10);
  }
  else if ( (*(_DWORD *)(*((_QWORD *)v5 + 71) + 184LL) & 0x2000) != 0 && v8 <= 0x1000 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x45416152u);
  }
  else
  {
    MmFreeContiguousMemorySpecifyCache(v7, v8, v6);
  }
  return 0LL;
}
