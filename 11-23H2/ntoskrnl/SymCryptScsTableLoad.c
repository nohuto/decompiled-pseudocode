/*
 * XREFs of SymCryptScsTableLoad @ 0x14040EE84
 * Callers:
 *     SymCryptModExpWindowed @ 0x140409560 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x14040EEAC (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x14040F040 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
