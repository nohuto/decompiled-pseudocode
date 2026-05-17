/*
 * XREFs of RtlSubtreePredecessor @ 0x1800630A0
 * Callers:
 *     RtlDeleteNoSplay @ 0x180062A40 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x180063000 (RtlDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSubtreePredecessor(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rcx

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    for ( i = *(_QWORD *)(result + 16); i; i = *(_QWORD *)(i + 16) )
      result = i;
  }
  return result;
}
