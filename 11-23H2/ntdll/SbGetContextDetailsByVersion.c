/*
 * XREFs of SbGetContextDetailsByVersion @ 0x18007D5B0
 * Callers:
 *     SbpDetermineDllContext @ 0x18002E904 (SbpDetermineDllContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsByVersion(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v6; // r10d
  unsigned __int16 *v7; // rcx

  v3 = -1LL;
  v4 = 0LL;
  v6 = 1;
  if ( !a3 )
    return 0;
  v7 = (unsigned __int16 *)&unk_180133396;
  while ( a1 > *(v7 - 1) )
  {
LABEL_6:
    v3 = v4;
LABEL_7:
    ++v4;
    v7 += 16;
    if ( v4 >= 5 )
      goto LABEL_11;
  }
  if ( a1 == *(v7 - 1) )
  {
    if ( a2 < *v7 )
      goto LABEL_11;
    goto LABEL_6;
  }
  if ( a1 >= *(v7 - 1) && (a1 != *(v7 - 1) || a2 >= *v7) )
    goto LABEL_7;
LABEL_11:
  if ( v3 == -1 )
    *a3 = &SbSupportedOsList;
  else
    *a3 = (char *)&SbSupportedOsList + 32 * v3;
  return v6;
}
