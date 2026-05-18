/*
 * XREFs of sub_1800E7E4F @ 0x1800E7E4F
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031C88 @ 0x180031C88 (sub_180031C88.c)
 */

__int64 __fastcall sub_1800E7E4F(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180031C88(*(_QWORD *)(a2 + 40));
  }
  return result;
}
