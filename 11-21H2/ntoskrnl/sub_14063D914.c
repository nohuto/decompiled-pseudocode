/*
 * XREFs of sub_14063D914 @ 0x14063D914
 * Callers:
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1404619C0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

__int64 __fastcall sub_14063D914(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v2; // ebx
  char v3; // r9
  unsigned __int64 v4; // rax
  int v5; // r11d
  signed __int32 v6; // ett
  __int64 v8; // rax

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
  _m_prefetchw(a1);
  v6 = *a1 & 0x7FFFFFFF;
  if ( v6 != _InterlockedCompareExchange(a1, v6 + 1, v6) )
    return 0LL;
  ++*((_DWORD *)CurrentPrcb + 8752);
  if ( v3 )
  {
    v8 = __rdtsc();
    sub_140632C48((__int64)a1, v8, v8 - v2, 0, v5, 2);
  }
  return 1LL;
}
