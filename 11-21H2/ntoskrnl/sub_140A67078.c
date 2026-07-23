/*
 * XREFs of sub_140A67078 @ 0x140A67078
 * Callers:
 *     sub_140A67248 @ 0x140A67248 (sub_140A67248.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_140A67078(__int64 a1)
{
  __int64 result; // rax
  PVOID *i; // rbx

  result = sub_140593218(a1, (__int64)&PsLoadedModuleList, 16LL);
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = sub_140593218(a1, (__int64)i, 160LL);
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, (__int64)i[12], *((unsigned __int16 *)i + 44));
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, (__int64)i[10], *((unsigned __int16 *)i + 36));
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, (__int64)i[5], 32LL);
      if ( (int)result < 0 )
        break;
      result = sub_140593218(a1, (__int64)i[6], *((unsigned int *)i + 16));
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
