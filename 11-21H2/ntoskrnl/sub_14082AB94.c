/*
 * XREFs of sub_14082AB94 @ 0x14082AB94
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_14025116C @ 0x14025116C (sub_14025116C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 */

void __fastcall sub_14082AB94(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( a2 && (v3 = *(_QWORD *)(a2 + 240)) != 0 && *(_QWORD *)(v3 + 3680) && *(_QWORD *)(v3 + 3688) )
    v4 = v3 + 3672;
  else
    v4 = 0LL;
  if ( a1 )
  {
    if ( a1 < 3 )
    {
      while ( (unsigned __int8)byte_140C15F70 <= a1 )
        sub_140B0433C((unsigned __int8)byte_140C15F70, a1, v4);
    }
    else if ( a1 == 3 )
    {
      v5 = qword_140D05008;
      v6 = 0LL;
      ++byte_140C15F70;
      if ( *(_DWORD *)(qword_140D05008 + 16) )
      {
        do
        {
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v5 + 448) + 8 * v6),
                 1u) )
          {
            if ( (unsigned int)v6 < *(_DWORD *)(qword_140D05008 + 16) )
            {
              v7 = *(_QWORD *)(qword_140D05008 + 456);
              v8 = *(_QWORD *)(v7 + 8 * v6);
              if ( (v8 & 1) == 0 && (*(_DWORD *)(v8 + 12) & 0x400) == 0 && sub_14025116C(*(_DWORD **)(v7 + 8 * v6)) )
              {
                if ( KeGetEffectiveIrql() > 2u )
                {
                  if ( !_interlockedbittestandset((volatile signed __int32 *)(v8 + 824), 8u) )
                    KeInsertQueueDpc((PRKDPC)(v8 + 568), 0LL, 0LL);
                }
                else
                {
                  KeSetEvent((PRKEVENT)(v8 + 480), 0, 0);
                }
              }
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140D05008 + 448) + 8 * v6),
              1u);
          }
          v5 = qword_140D05008;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *(_DWORD *)(qword_140D05008 + 16) );
      }
    }
  }
  else if ( v4 && *(_QWORD *)(v4 + 8) != v4 + 8 )
  {
    sub_140B0433C((unsigned __int8)byte_140C15F70, 0LL, v4);
  }
}
