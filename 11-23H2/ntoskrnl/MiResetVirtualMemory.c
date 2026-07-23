/*
 * XREFs of MiResetVirtualMemory @ 0x1403674C4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MiAllowProtectionChange @ 0x140304278 (MiAllowProtectionChange.c)
 *     MiCheckSecuredVad @ 0x14071A2B4 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiResetVirtualMemory(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        int a5,
        char a6)
{
  int v6; // r10d
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
  if ( (v6 & 0x200000) != 0 )
  {
    if ( (v6 & 8) != 0 && (v6 & 0x200) == 0 && (int)MiCheckSecuredVad(a4, a2, (int)a3 - (int)a2 + 1, 4, a6) < 0 )
      return 3221225550LL;
  }
  else
  {
    if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
      return 3221226051LL;
    if ( (v6 & 0x200) == 0 )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange((__int64)KeGetCurrentThread()->ApcState.Process, a1, a4, 4, a2, a3),
        (int)result >= 0) )
  {
    result = MiWalkVaRange(a2, a3, a4, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
