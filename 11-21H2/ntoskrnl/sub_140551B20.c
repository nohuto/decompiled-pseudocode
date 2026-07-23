/*
 * XREFs of sub_140551B20 @ 0x140551B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140551B20(__int64 a1)
{
  if ( !byte_140C54D4A || dword_140C54D50 )
    return 0;
  LOBYTE(a1) = 1;
  VidResetDisplay(a1);
  return 1;
}
