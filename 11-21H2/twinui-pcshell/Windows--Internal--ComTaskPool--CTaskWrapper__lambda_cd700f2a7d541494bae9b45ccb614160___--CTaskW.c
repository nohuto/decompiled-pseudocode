/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160_____lambda_cd700f2a7d541494bae9b45ccb614160___ @ 0x18006D1C0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___ @ 0x18006D12C (Windows--Internal--ComTaskPool--QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160_____lambda_cd700f2a7d541494bae9b45ccb614160___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2[1];
  v5 = a2 + 2;
  a1[3] = v4;
  a1[4] = 0LL;
  if ( a1 + 4 != v5 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  a1[5] = v5[1];
  *a1 = off_18061EF88;
  return a1;
}
