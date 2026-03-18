/*
 * XREFs of ?BufferingDisabled@CInteraction@@UEBAHXZ @ 0x180106E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::BufferingDisabled(CInteraction *this)
{
  return (*((unsigned __int8 *)this + 128) >> 6) & 1;
}
