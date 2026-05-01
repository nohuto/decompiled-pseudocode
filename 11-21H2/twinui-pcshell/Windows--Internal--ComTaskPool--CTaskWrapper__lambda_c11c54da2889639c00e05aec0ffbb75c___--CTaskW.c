/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c_____lambda_c11c54da2889639c00e05aec0ffbb75c___ @ 0x180197054
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___ @ 0x1801970B4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c_____lambda_c11c54da2889639c00e05aec0ffbb75c___(
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
  *(_QWORD *)a1 = off_180642918;
  return a1;
}
