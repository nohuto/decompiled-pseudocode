/*
 * XREFs of RtlLocateLegacyContext @ 0x180086670
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x18012B764 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

PCONTEXT __cdecl RtlLocateLegacyContext(PCONTEXT_EX ContextEx, PULONG Length)
{
  LONG Offset; // r10d
  ULONG v3; // r9d

  Offset = ContextEx->Legacy.Offset;
  if ( ContextEx->All.Offset > Offset )
    return 0LL;
  v3 = ContextEx->Legacy.Length;
  if ( (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (int)(v3 + Offset) )
    return 0LL;
  if ( Length )
    *Length = v3;
  return (PCONTEXT)((char *)ContextEx + ContextEx->Legacy.Offset);
}
