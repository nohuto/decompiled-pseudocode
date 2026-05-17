/*
 * XREFs of SbGetContextDetailsById @ 0x18002F30C
 * Callers:
 *     SbpDetermineDllContext @ 0x18002EAD4 (SbpDetermineDllContext.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002F0C4 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsById(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&SbSupportedOsList + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
