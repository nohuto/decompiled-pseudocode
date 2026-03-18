/*
 * XREFs of RFONTOBJ_vConstructPRFONTWrap @ 0x1C000A800
 * Callers:
 *     <none>
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ_vConstructPRFONTWrap(RFONTOBJ *a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  if ( a2 )
  {
    RFONTOBJ::vMakeInactive(a1);
    *(_QWORD *)a1 = 0LL;
  }
}
