/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563_____lambda_7cbe6e2ff7edb54ea653482a2b025563___ @ 0x1803D1278
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7cbe6e2ff7edb54ea653482a2b025563___ @ 0x1803D1DA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7cbe6e2ff7edb54ea653482a2b025563___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563_____lambda_7cbe6e2ff7edb54ea653482a2b025563___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(a1 + 33) = *(_BYTE *)(a2 + 17);
  *(_QWORD *)a1 = off_1807D0C40;
  return a1;
}
