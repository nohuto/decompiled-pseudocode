/*
 * XREFs of sub_1402EB110 @ 0x1402EB110
 * Callers:
 *     sub_1402EB0E0 @ 0x1402EB0E0 (sub_1402EB0E0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x14056E4F0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x14056E600 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A1CC @ 0x14045A1CC (sub_14045A1CC.c)
 */

__int64 __fastcall sub_1402EB110(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    return (unsigned int)sub_14045A1CC();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = 0;
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(v6 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    _m_prefetchw(a2);
    if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
    {
      v8 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v8 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v10 = *(_DWORD *)(v8 + 24) - 1;
          *(_DWORD *)(v8 + 24) = v10;
          if ( !v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      _mm_pause();
    }
    else
    {
      return 1;
    }
  }
  return v5;
}
