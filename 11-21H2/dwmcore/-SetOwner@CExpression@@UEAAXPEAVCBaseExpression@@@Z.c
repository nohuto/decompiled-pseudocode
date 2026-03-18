/*
 * XREFs of ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x180214DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18006FC4C (-UnregisterSources@CExpression@@IEAAXXZ.c)
 */

void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  if ( *((_QWORD *)this + 56) )
    CExpression::UnregisterSources(this);
  *((_QWORD *)this + 56) = a2;
}
