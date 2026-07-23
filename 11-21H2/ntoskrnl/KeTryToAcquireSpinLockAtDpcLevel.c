/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14022B430
 * Callers:
 *     sub_140419798 @ 0x140419798 (sub_140419798.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E8F8 @ 0x14056E8F8 (sub_14056E8F8.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx

  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    return sub_14056E8F8(SpinLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v3 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v6 = *(_DWORD *)(v3 + 24);
      *(_DWORD *)(v3 + 24) = v6 + 1;
      if ( v6 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    return 1;
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
  {
    v7 = *(_DWORD *)(v5 + 24) - 1;
    *(_DWORD *)(v5 + 24) = v7;
    if ( !v7 )
      sub_140418E4C(CurrentPrcb);
  }
  _mm_pause();
  return 0;
}
