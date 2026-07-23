/*
 * XREFs of MiCrashdumpRemovePte @ 0x14062FE90
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 == 3 )
  {
    LeafVa = MiGetLeafVa(a2);
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 8 )
      return 1LL;
  }
  else if ( !a3 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v7 & 1) != 0 )
    {
      v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v6 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(a1 + 168) + 8LL))(
          **(_QWORD **)(a1 + 168),
          v6,
          1LL);
    }
  }
  return 0LL;
}
