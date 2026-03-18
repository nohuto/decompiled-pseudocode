/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x1402E0130
 * Callers:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     WmipFindRegEntryByProviderId @ 0x1402E00A4 (WmipFindRegEntryByProviderId.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WmipDoFindRegEntryByProviderId(int a1)
{
  _DWORD *result; // rax

  result = WmipInUseRegEntryHead;
  if ( WmipInUseRegEntryHead == (_UNKNOWN *)&WmipInUseRegEntryHead )
    return 0LL;
  while ( result[14] != a1 || (int)result[12] < 0 )
  {
    result = *(_DWORD **)result;
    if ( result == (_DWORD *)&WmipInUseRegEntryHead )
      return 0LL;
  }
  return result;
}
