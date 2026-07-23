/*
 * XREFs of IoGetSymlinkSupportInformation @ 0x140937580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSymlinkSupportInformation(_BYTE *a1, unsigned int a2)
{
  char v2; // r8
  __int64 result; // rax

  v2 = dword_140D00A8C;
  if ( a2 < 4 )
    return 3221225485LL;
  *a1 = dword_140D00A8C & 1;
  a1[1] = (v2 & 2) != 0;
  a1[2] = (v2 & 4) != 0;
  result = 0LL;
  a1[3] = (v2 & 8) != 0;
  return result;
}
