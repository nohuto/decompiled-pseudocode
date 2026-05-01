/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee_____lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804BBE9C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804BBF10 (Windows--Internal--ComTaskPool--QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee_____lambda_f4067639e63611d5d8388fe1412d05ee___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8

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
  a1[4] = a2[2];
  a2[2] = 0LL;
  *a1 = off_18065D9F8;
  return a1;
}
