/*
 * XREFs of sub_140764C94 @ 0x140764C94
 * Callers:
 *     sub_14025A690 @ 0x14025A690 (sub_14025A690.c)
 *     sub_140764BE0 @ 0x140764BE0 (sub_140764BE0.c)
 * Callees:
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 */

__int64 __fastcall sub_140764C94(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 778 )
    result = sub_14076FB70(a1, 8LL);
  if ( a2 )
    return sub_140764CE4(a1, sub_140810960, 0LL);
  return result;
}
