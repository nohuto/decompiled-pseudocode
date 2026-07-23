/*
 * XREFs of sub_140461C46 @ 0x140461C46
 * Callers:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 * Callees:
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

__int64 __fastcall sub_140461C46(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v2; // r11d
  char v3; // r9
  unsigned __int64 v4; // rax
  int v5; // r10d
  unsigned __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v3 = 1;
    v4 = __rdtsc();
    v5 = *((_DWORD *)CurrentPrcb + 8272);
    v2 = v4;
  }
  else
  {
    v3 = 0;
    v5 = 0;
  }
  if ( _InterlockedCompareExchange(a1, 0x80000000, 0) )
    return 0LL;
  ++*((_DWORD *)CurrentPrcb + 8752);
  if ( v3 )
  {
    v7 = __rdtsc();
    sub_140632C48((_DWORD)a1, v7, v7 - v2, 0, v5, 3);
  }
  return 1LL;
}
