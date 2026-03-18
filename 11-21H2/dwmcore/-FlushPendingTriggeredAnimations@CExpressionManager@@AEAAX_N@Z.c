/*
 * XREFs of ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1801FDC0C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18004A0F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x18022893C (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 */

void __fastcall CExpressionManager::FlushPendingTriggeredAnimations(CExpressionManager *this, char a2)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 110); i = (unsigned int)(i + 1) )
  {
    CBaseExpression::TryRegisterWithExpressionManager(*(CBaseExpression **)(*((_QWORD *)this + 52) + 8 * i));
    if ( a2 )
      CBaseExpression::ForceDependentAnimationsDirtied(*(CBaseExpression **)(*((_QWORD *)this + 52) + 8 * i));
  }
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 416, 8u);
}
