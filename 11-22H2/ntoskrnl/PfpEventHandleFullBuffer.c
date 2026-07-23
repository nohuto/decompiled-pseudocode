/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1402F4D90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x1402F4DDC (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !stru_140D0C210.Header.SignalState )
  {
    result = LOWORD(stru_140C65420.Alignment);
    if ( LOWORD(stru_140C65420.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&stru_140D0C210, 0, 0);
  }
  return result;
}
