/*
 * XREFs of ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803B18E0
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1803B1CE0 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Z @ 0x1803B1840 (--$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rax
  unsigned int v9; // edi
  std::_Ref_count_base *v10; // rcx
  volatile int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v3 = a3;
  v5 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), (volatile int *)a2);
  else
    v6 = 44LL;
  v12 = *(_DWORD *)a2;
  v7 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v13 = v7;
  v8 = *(std::_Ref_count_base **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v14 = v8;
  v15 = v5;
  if ( v5 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)v6, (volatile int *)a2);
  v9 = Windows::Internal::ComTaskPool::QueueTask<_lambda_28273f6668f79f5db2d6a9fae521721a_>(
         v6,
         v3 != 0 ? 2 : 0,
         v3,
         (__int64)&v12);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v15);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v16);
  v10 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return v9;
}
