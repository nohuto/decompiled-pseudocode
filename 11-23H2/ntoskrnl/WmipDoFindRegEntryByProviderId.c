/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x14022AB90
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x14022AB04 (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x1403A8660 (IoWMIWriteEvent.c)
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
