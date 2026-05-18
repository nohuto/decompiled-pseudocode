/*
 * XREFs of sub_180106F54 @ 0x180106F54
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044DD0 @ 0x180044DD0 (sub_180044DD0.c)
 */

__int64 __fastcall sub_180106F54(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_180044DD0(*(_QWORD *)(a2 + 128));
  }
  return result;
}
