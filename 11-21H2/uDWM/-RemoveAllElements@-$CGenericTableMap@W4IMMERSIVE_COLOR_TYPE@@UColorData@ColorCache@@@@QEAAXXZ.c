/*
 * XREFs of ?RemoveAllElements@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@QEAAXXZ @ 0x18005FB44
 * Callers:
 *     _dynamic_atexit_destructor_for__ColorCache::_cachedColors__ @ 0x180066520 (_dynamic_atexit_destructor_for__ColorCache--_cachedColors__.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::RemoveAllElements(
        PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID result; // rax
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  for ( i = Table; ; Table = i )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(Table, &RestartKey);
    if ( !result )
      break;
    RtlDeleteElementGenericTable(i, result);
  }
  return result;
}
