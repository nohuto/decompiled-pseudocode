/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x14098EC78
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmPerfResizeHistory @ 0x14098EBBC (PpmPerfResizeHistory.c)
 */

__int64 PpmPerfResizeHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  v6 = 0;
  v9 = 0;
  v5[1] = (unsigned __int16 *)qword_140C0B8E8[0];
  v5[0] = (unsigned __int16 *)PpmCheckRegistered;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v9, v5);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v9);
    PpmPerfResizeHistory(Prcb + 33968);
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 296) )
    {
      v3 = 0;
      do
      {
        result = v3;
        v4 = *(_QWORD *)(i + 312) + 136LL * v3;
        if ( *(_DWORD *)(v4 + 16) == 1 )
          result = PpmPerfResizeHistory(*(_QWORD *)v4);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(i + 296) );
    }
  }
  return result;
}
