/*
 * XREFs of wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___ @ 0x1800E73B4
 * Callers:
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E78D8 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _CTopLevelWindow3D::StartMinimizeAnimationForDisplayChange_::_1_::dtor$0 @ 0x1800E7986 (_CTopLevelWindow3D--StartMinimizeAnimationForDisplayChange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 617) = 0;
  }
  return result;
}
