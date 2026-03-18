/*
 * XREFs of PpmParkDistributeAllUtility @ 0x140293C40
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140293CD0 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  bool v0; // di
  unsigned int i; // ebx
  int v3; // [rsp+20h] [rbp-28h]

  v0 = BYTE3(PpmCurrentProfile[534 * dword_140C232CC + 20]) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    LOBYTE(v3) = v0;
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 336LL * i + 8),
      *(_QWORD *)(PpmParkNodes + 336LL * i + 32),
      *(unsigned __int16 *)(PpmParkNodes + 336LL * i + 4),
      *(_BYTE *)(PpmParkNodes + 336LL * i + 142),
      v3,
      0,
      0LL);
  }
  return 1;
}
