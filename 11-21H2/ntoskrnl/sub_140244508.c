/*
 * XREFs of sub_140244508 @ 0x140244508
 * Callers:
 *     sub_1402443D8 @ 0x1402443D8 (sub_1402443D8.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 * Callees:
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

char __fastcall sub_140244508(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **v3; // rax
  volatile signed __int32 *v7; // rsi
  char v8; // di
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( a3 || (*(_DWORD *)(a2 + 116) & 0x200000) == 0 )
  {
    v7 = (volatile signed __int32 *)(a2 + 736);
    sub_1402F3290(a2 + 736);
    v8 = *(_BYTE *)(a2 + 794);
    LOBYTE(v3) = v8 | (a3 != 0 ? 4 : 2);
    *(_BYTE *)(a2 + 794) = (_BYTE)v3;
    if ( (v8 & 2) == 0 && (v8 & 4) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
      LOBYTE(v3) = sub_1402EE4D4(a2, a1);
      if ( !(_BYTE)v3 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
        *(_BYTE *)(a2 + 794) ^= (*(_BYTE *)(a2 + 794) ^ v8) & 6;
      }
    }
    _InterlockedAnd(v7, 0xFFFFFF7F);
  }
  return (char)v3;
}
