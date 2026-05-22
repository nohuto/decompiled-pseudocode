/*
 * XREFs of ?GetMaxMaskIndex@VectorSubchannelMaskInfo@@QEBAIXZ @ 0x18003EBB4
 * Callers:
 *     ?ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEBVSubchannelMaskInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003EAE8 (-ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VectorSubchannelMaskInfo::GetMaxMaskIndex(VectorSubchannelMaskInfo *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  unsigned int i; // r10d
  unsigned int v4; // edx

  v1 = *((unsigned __int8 *)this + 4);
  v2 = 0;
  for ( i = 0; i < v1; v2 = v4 )
  {
    v4 = (*((unsigned __int8 *)this + 8) >> (2 * (v1 - i) - 2)) & 3;
    if ( v4 <= v2 )
      v4 = v2;
    ++i;
  }
  return v2;
}
