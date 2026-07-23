/*
 * XREFs of PpmCheckSnapAllUtility @ 0x1402568E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSnapUtility @ 0x140255BD0 (PpmPerfSnapUtility.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     PpmIdleSnapConcurrency @ 0x140346824 (PpmIdleSnapConcurrency.c)
 */

char PpmCheckSnapAllUtility()
{
  unsigned __int16 v0; // di
  __int64 v1; // rbx
  __int64 Prcb; // rax
  __int64 k; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // edi
  __int64 v8; // rcx
  unsigned __int8 j; // si
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+32h] [rbp-26h]
  __int16 v13; // [rsp+36h] [rbp-22h]
  unsigned int i; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v12 = 0;
  v13 = 0;
  for ( i = 0; v0 < (unsigned int)PpmParkNumNodes; ++v0 )
  {
    v1 = PpmParkNodes + 192LL * v0;
    if ( *(_BYTE *)(v1 + 10) )
    {
      PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(v1 + 48));
      if ( *(_BYTE *)(v1 + 121) )
      {
        for ( j = 0; j < *(_BYTE *)(v1 + 11); ++j )
          PpmIdleSnapConcurrency(*(PKSPIN_LOCK *)(*(_QWORD *)(v1 + 184) + 104LL * j + 32));
      }
    }
  }
  v10[1] = qword_140C0BE78;
  v10[0] = &PpmCheckRegistered;
  v11 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, v10) )
  {
    Prcb = KeGetPrcb(i);
    PpmPerfSnapUtility(Prcb + 33968);
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_DWORD *)(k + 296) )
    {
      v5 = 0LL;
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(_QWORD *)(k + 312) + 144 * v5;
        if ( *(_DWORD *)(v8 + 16) == 1 )
        {
          PpmPerfSnapUtility(*(_QWORD *)v8);
          v6 = v7;
        }
        v5 = (unsigned int)(v6 + 1);
        v6 = v5;
        v7 = v5;
      }
      while ( (unsigned int)v5 < *(_DWORD *)(k + 296) );
    }
  }
  return 1;
}
