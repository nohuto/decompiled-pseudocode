/*
 * XREFs of IvtGetScalableModePasidTables @ 0x14052CCB4
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x14052B480 (IvtAllocateScalableModePasidTables.c)
 *     IvtGetDomainId @ 0x14052CA0C (IvtGetDomainId.c)
 *     IvtUpdateScalableModeContextEntry @ 0x14052DC64 (IvtUpdateScalableModeContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x14052DF0C (IvtUpdateScalableModeTranslationStructures.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IvtGetScalableModePasidTables(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 **v3; // rcx
  __int64 *i; // rax

  v2 = 0LL;
  v3 = (__int64 **)(a1 + 56);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 10) == a2 )
      return i;
  }
  return (__int64 *)v2;
}
