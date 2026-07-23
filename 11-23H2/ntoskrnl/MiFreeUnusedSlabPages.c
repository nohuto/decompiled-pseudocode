/*
 * XREFs of MiFreeUnusedSlabPages @ 0x14021ED0C
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 * Callees:
 *     MiCheckMdlSlabFragmentation @ 0x14021EE44 (MiCheckMdlSlabFragmentation.c)
 *     MiEnumerateSlabAllocators @ 0x14021EF7C (MiEnumerateSlabAllocators.c)
 *     MiSlabUpdateRecentFailure @ 0x14021F214 (MiSlabUpdateRecentFailure.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     KeGenericCallDpcEx @ 0x1403C68D0 (KeGenericCallDpcEx.c)
 *     MiLogSlabEntriesDemote @ 0x1403D6D40 (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiFreeUnusedSlabPages(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v6; // rcx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD v8[12]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x58uLL);
  MiEnumerateSlabAllocators(a1, MiFreeSlabEntries, 0LL, 0xFFFFFFFFLL);
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = 25408LL * i;
    v4 = v3 + *(_QWORD *)(a1 + 16) + 24976LL;
    if ( (unsigned int)MiCheckMdlSlabFragmentation(v4, 0LL) )
    {
      memset(v8, 0, 0x58uLL);
      v8[10] = -1LL;
      v8[0] = a1;
      v8[9] = v4;
      KeGenericCallDpcEx(MiDemoteSlabEntriesDpc, v8);
      LOBYTE(v6) = 1;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v6);
      if ( !UnbiasedInterruptTime )
        UnbiasedInterruptTime = 1LL;
      *(_QWORD *)(v3 + *(_QWORD *)(a1 + 16) + 25248) = UnbiasedInterruptTime;
      MiLogSlabEntriesDemote(v8);
    }
  }
  return MiSlabUpdateRecentFailure(a1 + 16264);
}
