/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x180046BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x180046C70 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 56);
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 110) )
  {
    while ( 1 )
    {
      v4 = CExpression::RegisterSourceForAnimation(
             this,
             v1,
             (const struct ExpressionReferenceInfo *)(*((_QWORD *)this + 54) + 24 * v3));
      v6 = v4;
      if ( v4 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 110) )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x16Eu, 0LL);
  }
  else
  {
    return 0;
  }
  return v6;
}
