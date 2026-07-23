/*
 * XREFs of sub_14071EE7C @ 0x14071EE7C
 * Callers:
 *     sub_14065D320 @ 0x14065D320 (sub_14065D320.c)
 *     sub_14065DC44 @ 0x14065DC44 (sub_14065DC44.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 * Callees:
 *     sub_1407C0C50 @ 0x1407C0C50 (sub_1407C0C50.c)
 */

__int64 __fastcall sub_14071EE7C(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      sub_1407C0C50(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      result = 65527LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}
