/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140233370
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x140233310 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x140233350 (KeTryToAcquireGuardedMutex.c)
 *     sub_140609960 @ 0x140609960 (sub_140609960.c)
 *     sub_140615BB0 @ 0x140615BB0 (sub_140615BB0.c)
 *     sub_14074C258 @ 0x14074C258 (sub_14074C258.c)
 *     sub_140B4B5E0 @ 0x140B4B5E0 (sub_140B4B5E0.c)
 * Callees:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  v2 = sub_140347C10(FastMutex, 0LL, 1LL);
  v3 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v3 )
      sub_140353BB0((ULONG_PTR)FastMutex);
    _mm_pause();
    return 0;
  }
  return result;
}
