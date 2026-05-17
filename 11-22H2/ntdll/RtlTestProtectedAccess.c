/*
 * XREFs of RtlTestProtectedAccess @ 0x180086AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v3; // eax

  if ( (a2 & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
    return 0;
  v3 = RtlProtectedAccess[3 * ((unsigned __int64)a1 >> 4)];
  return _bittest(&v3, a2 >> 4);
}
