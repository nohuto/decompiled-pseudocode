/*
 * XREFs of ?PostPresent@CPresentationSurface@@UEAAX_N@Z @ 0x1801B0050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPresentationSurface::PostPresent(CPresentationSurface *this, char a2)
{
  if ( a2 )
    *((_BYTE *)this + 80) &= ~1u;
}
