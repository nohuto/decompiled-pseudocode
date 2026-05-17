/*
 * XREFs of RtlMapGenericMask @ 0x180077010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMapGenericMask(int *a1, _DWORD *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 < 0 )
    v2 |= *a2;
  if ( (v2 & 0x40000000) != 0 )
    v2 |= a2[1];
  if ( (v2 & 0x20000000) != 0 )
    v2 |= a2[2];
  if ( (v2 & 0x10000000) != 0 )
    v2 |= a2[3];
  result = v2 & 0xFFFFFFF;
  *a1 = result;
  return result;
}
