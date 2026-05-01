/*
 * XREFs of ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x18048B09C
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x18048B450 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_28273f6668f79f5db2d6a9fae521721a_@@@Z @ 0x18048AFFC (--$QueueTask@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // r9
  Microsoft::WRL::Details *v4; // rcx
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rax
  unsigned int v8; // edi
  std::_Ref_count_base *v9; // rcx
  volatile int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  v15 = a1;
  v4 = (Microsoft::WRL::Details *)(a1 + 44);
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, (volatile int *)a2);
  v11 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v12 = v6;
  v7 = *(std::_Ref_count_base **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v13 = v7;
  v14 = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, (volatile int *)a2);
  v8 = Windows::Internal::ComTaskPool::QueueTask<_lambda_28273f6668f79f5db2d6a9fae521721a_>(
         (__int64)v4,
         a3 != 0 ? 2 : 0,
         a3,
         (__int64)&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v15);
  v9 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v8;
}
