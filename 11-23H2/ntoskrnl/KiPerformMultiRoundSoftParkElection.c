/*
 * XREFs of KiPerformMultiRoundSoftParkElection @ 0x1404111A4
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiPerformHeteroSoftParkElection @ 0x14057E5F8 (KiPerformHeteroSoftParkElection.c)
 */

__int64 __fastcall KiPerformMultiRoundSoftParkElection(__int64 a1, __int64 a2)
{
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  __int64 i; // rbx
  __int64 v9; // r8
  bool v10; // zf
  int v11; // edx
  unsigned __int8 *v12; // r9
  unsigned int v13; // ecx
  unsigned __int8 v14; // r10

  if ( !KeSoftParkedQueueThreshold )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 712) / (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
  for ( i = ~v5 & *(_QWORD *)(a1 + 96); i; i &= ~(1LL << v11) )
  {
    if ( !v7 )
      break;
    if ( !KeHeteroSystem || a2 == -784 )
    {
      v9 = i & *(_QWORD *)(a2 + 1680);
      v10 = v9 == 0;
    }
    else
    {
      v9 = KiPerformHeteroSoftParkElection(a1, (int)a2 + 784, i, *(_QWORD *)(a2 + 1680), v5);
      v10 = v9 == 0;
    }
    if ( v10 )
      break;
    v11 = -1;
    v12 = (unsigned __int8 *)(a1 + 320);
    v13 = 0;
    v14 = -1;
    do
    {
      if ( _bittest64(&v9, v13) && (v11 == -1 || *v12 < v14) )
      {
        v11 = v13;
        v14 = *v12;
      }
      ++v13;
      ++v12;
    }
    while ( v13 < 0x40 );
    if ( v11 == -1 )
      break;
    --v7;
    v6 |= 1LL << v11;
    v5 |= 1LL << v11;
  }
  return v6;
}
