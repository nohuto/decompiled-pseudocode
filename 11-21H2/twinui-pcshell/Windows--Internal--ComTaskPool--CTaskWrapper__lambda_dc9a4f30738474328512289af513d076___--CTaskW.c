/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____lambda_dc9a4f30738474328512289af513d076___ @ 0x1801E9F4C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_dc9a4f30738474328512289af513d076___ @ 0x1801EA0C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_dc9a4f30738474328512289af513d076___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA3E0 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--_lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____lambda_dc9a4f30738474328512289af513d076___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_(a1 + 2, a2);
  v4 = (_QWORD *)(a2 + 24);
  a1[5] = 0LL;
  if ( a1 + 5 != v4 )
  {
    a1[5] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1807ABD20;
  return a1;
}
