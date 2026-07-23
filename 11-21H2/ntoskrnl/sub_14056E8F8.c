/*
 * XREFs of sub_14056E8F8 @ 0x14056E8F8
 * Callers:
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14022B430 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

char __fastcall sub_14056E8F8(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r14d
  int v3; // r15d
  char v5; // si
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  char v10; // di
  int v11; // eax
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = 0;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    v2 = *((_DWORD *)CurrentPrcb + 8272);
    v3 = v6;
  }
  else
  {
    v5 = 0;
  }
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v8 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v8 + 1;
      if ( v8 == -1 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v9 = *((_QWORD *)CurrentPrcb + 4375);
    v10 = 0;
    if ( v9 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v9 + 24) - 1;
        *(_DWORD *)(v9 + 24) = v11;
        if ( !v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    _mm_pause();
  }
  else
  {
    ++*((_DWORD *)CurrentPrcb + 8752);
    v10 = 1;
    if ( v5 )
    {
      v12 = __rdtsc();
      sub_140632C48((_DWORD)a1, v12, v12 - v3, 0, v2, 0);
    }
  }
  return v10;
}
