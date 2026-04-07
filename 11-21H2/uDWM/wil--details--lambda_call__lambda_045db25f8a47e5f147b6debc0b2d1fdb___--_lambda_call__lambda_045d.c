/*
 * XREFs of wil::details::lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___::_lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___ @ 0x1800998F0
 * Callers:
 *     _CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor$0 @ 0x18009B066 (_CAcrylicSheet--StartAnimationShowOrHide_--_1_--dtor$0.c)
 * Callees:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___::_lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CAcrylicSheet::StopAnimations(*(CAcrylicSheet **)a1);
  }
  return result;
}
