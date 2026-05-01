/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5_____lambda_a61a72d02543b99baa10fb55a6e7a2f5___ @ 0x180024C94
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___ @ 0x180024CF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5_____lambda_a61a72d02543b99baa10fb55a6e7a2f5___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
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
  *a1 = off_1807A4CB0;
  return a1;
}
