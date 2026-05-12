/*
 * XREFs of StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C000CE60
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorpFreeContiguousMemorySpecifyCacheEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 Adapter; // rax
  MEMORY_CACHING_TYPE v6; // r9d
  void *v7; // r10
  SIZE_T v8; // r11
  char v10; // [rsp+20h] [rbp-18h]

  Adapter = RaidpPortGetAdapter();
  if ( !Adapter )
    return 3238002694LL;
  if ( *(_BYTE *)(Adapter + 760) && *(_DWORD *)(Adapter + 780) == 3 )
  {
    v10 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, void *, char))(*(_QWORD *)(*(_QWORD *)(Adapter + 752) + 8LL) + 24LL))(
      *(_QWORD *)(Adapter + 752),
      (unsigned int)v8,
      a5,
      v7,
      v10);
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(Adapter + 568) + 184LL) & 0x2000) != 0 && v8 <= 0x1000 )
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
