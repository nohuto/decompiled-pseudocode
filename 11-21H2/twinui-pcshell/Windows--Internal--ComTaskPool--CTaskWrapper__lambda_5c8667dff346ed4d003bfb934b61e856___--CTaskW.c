/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856_____lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1804E4770
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1804E4880 (Windows--Internal--ComTaskPool--QueueTask__lambda_5c8667dff346ed4d003bfb934b61e856___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856_____lambda_5c8667dff346ed4d003bfb934b61e856___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != v5 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  *a1 = off_180662058;
  return a1;
}
