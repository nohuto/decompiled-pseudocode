/*
 * XREFs of sub_14084FC2C @ 0x14084FC2C
 * Callers:
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_14084FC2C(PEX_RUNDOWN_REF RunRef, __int64 a2, char a3)
{
  unsigned int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0

  if ( a3 )
  {
    RunRef[14].Count = 0LL;
    LODWORD(RunRef[15].Count) = 0;
  }
  else
  {
    memset(RunRef, 0, 0x80uLL);
  }
  InitializeSListHead((PSLIST_HEADER)&RunRef[2]);
  InitializeSListHead((PSLIST_HEADER)&RunRef[4]);
  InitializeSListHead((PSLIST_HEADER)&RunRef[6]);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&RunRef[8].Count = *(_OWORD *)a2;
  if ( v6 < 0x30 )
    v6 = 48;
  v8 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&RunRef[10].Count = v7;
  *(_OWORD *)&RunRef[12].Count = v8;
  LODWORD(RunRef[10].Count) = v6;
  if ( a3 )
    _InterlockedExchange64((volatile __int64 *)RunRef, 0LL);
  else
    ExInitializeRundownProtection(RunRef);
}
