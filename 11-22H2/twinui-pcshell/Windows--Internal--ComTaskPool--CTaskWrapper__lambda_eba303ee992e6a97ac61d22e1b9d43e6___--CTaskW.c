/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6_____lambda_eba303ee992e6a97ac61d22e1b9d43e6___ @ 0x1801E0E88
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___ @ 0x1801E0EE8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6_____lambda_eba303ee992e6a97ac61d22e1b9d43e6___(
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
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)a1 = off_1807C4AC0;
  return a1;
}
