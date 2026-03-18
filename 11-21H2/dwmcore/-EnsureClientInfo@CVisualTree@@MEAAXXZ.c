/*
 * XREFs of ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800CB530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800CB560 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 */

void __fastcall CVisualTree::EnsureClientInfo(CVisualTree *this)
{
  if ( *((_BYTE *)this + 4712) )
  {
    CVisualTree::UpdateClientBounds(this);
    *((_BYTE *)this + 4712) = 0;
  }
}
