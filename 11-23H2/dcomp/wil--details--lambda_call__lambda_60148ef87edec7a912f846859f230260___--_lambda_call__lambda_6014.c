/*
 * XREFs of wil::details::lambda_call__lambda_60148ef87edec7a912f846859f230260___::_lambda_call__lambda_60148ef87edec7a912f846859f230260___ @ 0x1800ED76C
 * Callers:
 *     ?CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMode@@IIPEAPEAVCSynchronousSuperWetInk@2@@Z @ 0x1800F0D7C (-CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMo.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_60148ef87edec7a912f846859f230260___::_lambda_call__lambda_60148ef87edec7a912f846859f230260___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return DirectComposition::CTransformGroupProxy::Release(**(DirectComposition::CTransformGroupProxy ***)a1);
  }
  return result;
}
