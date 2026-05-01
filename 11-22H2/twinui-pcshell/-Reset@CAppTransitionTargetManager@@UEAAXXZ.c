/*
 * XREFs of ?Reset@CAppTransitionTargetManager@@UEAAXXZ @ 0x18059B370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18059B2FC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

void __fastcall CAppTransitionTargetManager::Reset(CAppTransitionTargetManager *this)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h]

  CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::RemoveAll((__int64)this + 40);
  BYTE2(v2) = 1;
  HIDWORD(v2) = -1;
  *(_OWORD *)((char *)this + 72) = 0LL;
  LOWORD(v2) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 88) = v2;
}
