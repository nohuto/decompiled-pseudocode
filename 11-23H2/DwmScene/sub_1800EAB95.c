/*
 * XREFs of sub_1800EAB95 @ 0x1800EAB95
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040030 @ 0x180040030 (sub_180040030.c)
 */

__int64 __fastcall sub_1800EAB95(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_180040030(*(_QWORD *)(a2 + 128));
  }
  return result;
}
