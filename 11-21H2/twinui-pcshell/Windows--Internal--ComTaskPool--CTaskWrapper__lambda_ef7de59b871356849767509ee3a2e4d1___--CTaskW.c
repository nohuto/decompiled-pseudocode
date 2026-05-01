/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1_____lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x1804C47D4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___ @ 0x1804C4A0C (Windows--Internal--ComTaskPool--QueueTask__lambda_ef7de59b871356849767509ee3a2e4d1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1___::CTaskWrapper__lambda_ef7de59b871356849767509ee3a2e4d1_____lambda_ef7de59b871356849767509ee3a2e4d1___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18065EDD8;
  return a1;
}
