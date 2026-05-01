/*
 * XREFs of sub_1800091C8 @ 0x1800091C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1800091C8(__int64 a1, int a2)
{
  char v2; // of
  int v3; // esi

  if ( !v2 )
    JUMPOUT(0x180009234LL);
  return ((__int64 (__fastcall *)(__int64, _QWORD))RmActivityImportanceInitialize)(a1, (unsigned int)(v3 + a2));
}
