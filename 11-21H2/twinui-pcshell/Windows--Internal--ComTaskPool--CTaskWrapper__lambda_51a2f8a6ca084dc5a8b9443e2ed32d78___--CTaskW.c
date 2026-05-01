/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_____lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___ @ 0x1804B3B0C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___ @ 0x1804B3CA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_____lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___(
        __int64 a1,
        _OWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  v4 = a2 + 1;
  *(_OWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_OWORD *)(a1 + 32) != a2 + 1 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)a2 + 3;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_OWORD *)(a1 + 40) != (_OWORD *)((char *)a2 + 24) )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_18065CAE8;
  return a1;
}
