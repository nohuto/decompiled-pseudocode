/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1_____lambda_573cde38f26cc631e17f9a09e8537aa1___ @ 0x180159330
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___ @ 0x1801595FC (Windows--Internal--ComTaskPool--QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18005DA90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1_____lambda_573cde38f26cc631e17f9a09e8537aa1___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  v4 = *a2;
  *a2 = 0LL;
  a1[2] = v4;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = a2[1];
  a1[4] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a1 = &off_18017D820;
  return a1;
}
