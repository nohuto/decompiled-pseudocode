/*
 * XREFs of RtlTestProtectedAccess @ 0x18008B7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  BOOLEAN result; // al
  int v3; // eax

  result = 1;
  if ( (Target.Level & 7) != 0 )
  {
    if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
      return 0;
    v3 = RtlProtectedAccess[3 * ((unsigned __int64)Source.Level >> 4)];
    if ( !_bittest(&v3, Target.Level >> 4) )
      return 0;
  }
  return result;
}
