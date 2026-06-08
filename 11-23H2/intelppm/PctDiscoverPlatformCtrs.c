/*
 * XREFs of PctDiscoverPlatformCtrs @ 0x1C0025F30
 * Callers:
 *     <none>
 * Callees:
 *     PctPlatformCounterState @ 0x1C0001EE0 (PctPlatformCounterState.c)
 *     PctProbePlatformCtr @ 0x1C0026064 (PctProbePlatformCtr.c)
 *     ConfigureIntelEmu @ 0x1C0026140 (ConfigureIntelEmu.c)
 */

unsigned __int64 __fastcall PctDiscoverPlatformCtrs(__int64 a1)
{
  __int64 v2; // rbx
  void *Pool2; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _BYTE *v7; // r14
  char v8; // al
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v2 = 0LL;
  if ( !PctPlatformCounterState(a1, 0) )
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
      }
      else
      {
        v5 = 0;
        v6 = &unk_1C0010008;
        do
        {
          v7 = (_BYTE *)PctPlatformCounterState(a1, v5);
          if ( *v6 )
          {
            v8 = PctProbePlatformCtr(a1, v6 + 1, &v11);
            *v7 = v8;
            if ( v8 )
              v2 |= *v6;
          }
          ++v5;
          v6 += 6;
        }
        while ( v5 < 5 );
        if ( (v2 & 0x800000000000LL) != 0 )
        {
          v9 = PctPlatformCounterState(a1, 0);
          v10 = PctProbePlatformCtr(a1, &unk_1C0010010, &v11);
          *(_BYTE *)v9 = v10;
          if ( v10 )
          {
            *(_QWORD *)(v9 + 8) = KeQueryInterruptTimePrecise(&v12);
            *(_QWORD *)(v9 + 24) = v11;
            ConfigureIntelEmu(a1, 0LL, v11);
            *(_BYTE *)v9 = 1;
          }
          else
          {
            return v2 & 0xFFFF7FFFFFFFFFFFuLL;
          }
        }
      }
    }
  }
  return v2;
}
