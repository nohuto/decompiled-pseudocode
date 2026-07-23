/*
 * XREFs of PpmCheckRecordAllUtility @ 0x140256A00
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     PpmPerfRecordUtility @ 0x1402574C0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x14033C930 (PpmParkRecordNodeStatistics.c)
 */

char PpmCheckRecordAllUtility()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 Prcb; // rax
  __int64 v4; // rdx
  __int64 i; // rbx
  __int64 v7; // rax
  int v8; // edi
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+32h] [rbp-16h]
  __int16 v12; // [rsp+36h] [rbp-12h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v12 = 0;
  v10 = 0;
  v13 = 0;
  v9[1] = qword_140C0BE78;
  v9[0] = &PpmCheckRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v9) )
  {
    Prcb = KeGetPrcb(v13);
    PpmPerfRecordUtility(Prcb + 33968, v4);
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 296) )
    {
      v7 = 0LL;
      v0 = 0LL;
      v8 = 0;
      do
      {
        v1 = *(_QWORD *)(i + 312) + 144 * v7;
        if ( *(_DWORD *)(v1 + 16) == 1 )
        {
          PpmPerfRecordUtility(*(_QWORD *)v1, v0);
          LODWORD(v0) = v8;
        }
        v7 = (unsigned int)(v0 + 1);
        v0 = (unsigned int)v7;
        v8 = v7;
      }
      while ( (unsigned int)v7 < *(_DWORD *)(i + 296) );
    }
  }
  PpmParkRecordNodeStatistics(v1, v0, v2);
  return 1;
}
