/*
 * XREFs of sub_140210CCC @ 0x140210CCC
 * Callers:
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140210CCC(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = *(volatile signed __int32 **)(a1 + 968);
    if ( a2 )
      _InterlockedOr(v2, 0x40000u);
    else
      _InterlockedAnd(v2, 0xFFFBFFFF);
  }
}
