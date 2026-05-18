/*
 * XREFs of sub_1801044FD @ 0x1801044FD
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AD0 @ 0x180012AD0 (sub_180012AD0.c)
 */

__int64 __fastcall sub_1801044FD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return sub_180012AD0(a2 + 144);
  }
  return result;
}
