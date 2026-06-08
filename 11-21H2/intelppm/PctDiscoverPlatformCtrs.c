/*
 * XREFs of PctDiscoverPlatformCtrs @ 0x1C0024D20
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C00024D8 (ReadGenAddrMaybeHiddenEx.c)
 *     ConfigureIntelEmu @ 0x1C00248C0 (ConfigureIntelEmu.c)
 *     PctPlatformCounterState @ 0x1C0024EC0 (PctPlatformCounterState.c)
 */

__int64 __fastcall PctDiscoverPlatformCtrs(__int64 a1)
{
  __int64 v2; // rdi
  void *Pool2; // rax
  __int64 v5; // rbx
  _BYTE *v6; // r12
  __int64 v7; // r14
  __int64 GenAddrMaybeHidden; // rbx
  __int128 v9; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 (__fastcall *v10)(__int64, __int64, char); // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = 0LL;
  if ( !PctPlatformCounterState(a1, 0LL) )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 200LL, 1919119952LL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(*(_QWORD *)(a1 + 1080) + 312LL),
             (signed __int64)Pool2,
             0LL) )
      {
        ExFreePoolWithTag(Pool2, (ULONG)0);
        return 0LL;
      }
      else
      {
        v5 = 0LL;
        v2 = 0LL;
        while ( (unsigned int)v5 < 5 )
        {
          v6 = (_BYTE *)PctPlatformCounterState(a1, (unsigned int)v5);
          if ( *(&PctPlatformCounterCfg + 5 * v5 + 1) )
          {
            v9 = *(_OWORD *)&(&PctPlatformCounterCfg)[5 * v5 + 1];
            v10 = (unsigned __int64 (__fastcall *)(__int64, __int64, char))(&PctPlatformCounterCfg)[5 * v5 + 2];
            ReadGenAddrMaybeHiddenEx(a1, (__int64)&v9);
            v2 |= (unsigned __int64)*(&PctPlatformCounterCfg + 5 * v5 + 1);
            *v6 = 1;
          }
          v5 = (unsigned int)(v5 + 1);
        }
        if ( (v2 & 0x800000000000LL) != 0 )
        {
          v7 = PctPlatformCounterState(a1, 0LL);
          v9 = xmmword_1C000F010;
          v10 = ConfigureIntelEmu;
          GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(a1, (__int64)&v9);
          *(_QWORD *)(v7 + 8) = KeQueryInterruptTimePrecise(&v11);
          *(_QWORD *)(v7 + 24) = GenAddrMaybeHidden;
          ConfigureIntelEmu(a1, 0LL, GenAddrMaybeHidden);
          *(_BYTE *)v7 = 1;
        }
      }
    }
  }
  return v2;
}
