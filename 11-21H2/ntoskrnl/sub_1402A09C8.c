/*
 * XREFs of sub_1402A09C8 @ 0x1402A09C8
 * Callers:
 *     sub_1402930CC @ 0x1402930CC (sub_1402930CC.c)
 *     sub_1402A08EC @ 0x1402A08EC (sub_1402A08EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A09C8(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *a1 < *a2 )
    *a1 = *a2;
  result = (unsigned int)a2[1];
  if ( a1[1] > (unsigned int)result )
    a1[1] = result;
  return result;
}
