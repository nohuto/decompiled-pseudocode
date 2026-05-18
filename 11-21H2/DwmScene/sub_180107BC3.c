/*
 * XREFs of sub_180107BC3 @ 0x180107BC3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006C73C @ 0x18006C73C (sub_18006C73C.c)
 */

__int64 __fastcall sub_180107BC3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return sub_18006C73C(*(_QWORD *)(a2 + 384));
  }
  return result;
}
