/*
 * XREFs of wil::details::lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___::_lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___ @ 0x1C00824DC
 * Callers:
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___::_lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))a1;
    if ( v1 )
      return (**v1)(v1, 1LL);
  }
  return result;
}
