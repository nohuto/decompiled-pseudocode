/*
 * XREFs of SymCryptScsTableLoad @ 0x14040ECA4
 * Callers:
 *     SymCryptModExpWindowed @ 0x140409380 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x14040ECCC (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x14040EE60 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
