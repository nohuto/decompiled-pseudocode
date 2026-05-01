/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2_____lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___ @ 0x18006D590
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___ @ 0x18006D354 (Windows--Internal--ComTaskPool--QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2_____lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___(
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
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_18061F000;
  return a1;
}
