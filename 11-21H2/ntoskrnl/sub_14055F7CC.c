/*
 * XREFs of sub_14055F7CC @ 0x14055F7CC
 * Callers:
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14055F7CC(__int64 a1, _WORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(unsigned __int16 *)(a1 + 16);
    *a2 = result;
  }
  if ( a3 )
  {
    result = *(unsigned int *)(a1 + 20);
    *a3 = result;
  }
  return result;
}
