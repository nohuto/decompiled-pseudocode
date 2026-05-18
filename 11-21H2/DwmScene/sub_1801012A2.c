/*
 * XREFs of sub_1801012A2 @ 0x1801012A2
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 */

__int64 __fastcall sub_1801012A2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return sub_180012AD0(a2 + 368);
  }
  return result;
}
