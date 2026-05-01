/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c_____lambda_5af8d5de97e6639990840c940ce8594c___ @ 0x180025B70
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5af8d5de97e6639990840c940ce8594c___ @ 0x180025CD4 (Windows--Internal--ComTaskPool--QueueTask__lambda_5af8d5de97e6639990840c940ce8594c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c_____lambda_5af8d5de97e6639990840c940ce8594c___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  v4 = a2[2];
  a2[2] = 0LL;
  a1[4] = v4;
  a1[5] = a2[3];
  *a1 = off_1807A5040;
  return a1;
}
