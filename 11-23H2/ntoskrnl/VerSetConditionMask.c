/*
 * XREFs of VerSetConditionMask @ 0x1403949C0
 * Callers:
 *     AslpFileGetVersionBlock @ 0x1407595FC (AslpFileGetVersionBlock.c)
 *     WdipSemLoadScenarioTable @ 0x140830D04 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall VerSetConditionMask(ULONGLONG ConditionMask, ULONG TypeMask, UCHAR Condition)
{
  unsigned __int8 v3; // r8
  char v4; // al

  v3 = Condition & 7;
  if ( !TypeMask )
    return 0LL;
  v4 = 0;
  do
  {
    ++v4;
    TypeMask >>= 1;
  }
  while ( TypeMask );
  return ConditionMask | ((unsigned __int64)v3 << (3 * (v4 - 1))) | 0x8000000000000000uLL;
}
