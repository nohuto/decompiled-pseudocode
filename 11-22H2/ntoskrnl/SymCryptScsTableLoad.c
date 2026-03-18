/*
 * XREFs of SymCryptScsTableLoad @ 0x14040E644
 * Callers:
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x14040E66C (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x14040E800 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
