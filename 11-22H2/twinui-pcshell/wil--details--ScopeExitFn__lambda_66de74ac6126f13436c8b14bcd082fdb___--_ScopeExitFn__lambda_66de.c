/*
 * XREFs of wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___ @ 0x1803CD48C
 * Callers:
 *     _CWin32ApplicationView::GetCloakableWindows_::_1_::dtor$1 @ 0x1803CE389 (_CWin32ApplicationView--GetCloakableWindows_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAXXZ @ 0x180102700 (-RemoveAll@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::RemoveAll(*(_QWORD *)a1 + 232LL);
  }
}
