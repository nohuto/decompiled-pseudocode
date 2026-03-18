/*
 * XREFs of ?ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ @ 0x1800EDB64
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800EDA14 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023D5E8 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CBaseExpression::ResolveTargetNoRef(CBaseExpression *this)
{
  __int64 v1; // rdx
  struct CResource *result; // rax

  v1 = *((_QWORD *)this + 23);
  result = 0LL;
  if ( v1 )
    return *(struct CResource **)(v1 + 16);
  return result;
}
