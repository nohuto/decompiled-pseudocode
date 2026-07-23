/*
 * XREFs of sub_14055DC8C @ 0x14055DC8C
 * Callers:
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14055DC8C(__int64 a1)
{
  __int64 result; // rax
  PVOID *i; // rbx

  result = sub_140593218(a1, &PsLoadedModuleList, 16LL);
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = sub_140593218(a1, i, 160LL);
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, i[12], *((unsigned __int16 *)i + 44));
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, i[10], *((unsigned __int16 *)i + 36));
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, i[5], 32LL);
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, i[6], *((unsigned int *)i + 16));
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
