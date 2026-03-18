/*
 * XREFs of MiProcessVmAccessedInfo @ 0x14046BFBE
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1403343B0 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x140348650 (MiResetAccessBitsTail.c)
 *     MiTrimWorkingSetTail @ 0x14034FD10 (MiTrimWorkingSetTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14046C210 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14046C440 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

char __fastcall MiProcessVmAccessedInfo(
        __int64 a1,
        _DWORD *a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64),
        __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rcx

  v4 = (unsigned int)*a2;
  v5 = a2 + 2;
  v10 = (unsigned __int64)&a2[2 * v4 + 2];
  while ( (unsigned __int64)v5 < v10 )
  {
    v11 = *v5 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v4) = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(v4) = (MiGetWsleContents(v12, v11) & 0xF) - 8;
      if ( (unsigned __int8)v4 > 2u && ((v11 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
      {
        LODWORD(v4) = a3(a1, v5, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v11, a4);
        if ( (_DWORD)v4 )
          break;
      }
    }
    ++v5;
  }
  *a2 = 0;
  return v4;
}
