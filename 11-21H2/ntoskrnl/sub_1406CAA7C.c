/*
 * XREFs of sub_1406CAA7C @ 0x1406CAA7C
 * Callers:
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 *     sub_1406CA780 @ 0x1406CA780 (sub_1406CA780.c)
 * Callees:
 *     sub_14035EC68 @ 0x14035EC68 (sub_14035EC68.c)
 */

__int64 __fastcall sub_1406CAA7C(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 1124) & 8;
  if ( !v4 || !a2 )
    sub_14035EC68(a1, a2);
  result = *(_DWORD *)(a1 + 1124) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return sub_14035EC68(a1, 0LL);
  }
  return result;
}
