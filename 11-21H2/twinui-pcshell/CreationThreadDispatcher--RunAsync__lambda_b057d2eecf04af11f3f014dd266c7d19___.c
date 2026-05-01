/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA178
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180611820 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEBAXXZ @ 0x180158CBC (-InternalAddRef@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_dc9a4f30738474328512289af513d076___ @ 0x1801EA0C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_dc9a4f30738474328512289af513d076___.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA3E0 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--_lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA540 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--__lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 *     _lambda_dc9a4f30738474328512289af513d076_::__lambda_dc9a4f30738474328512289af513d076_ @ 0x1801EA574 (_lambda_dc9a4f30738474328512289af513d076_--__lambda_dc9a4f30738474328512289af513d076_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rbx
  volatile int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v8[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  v10 = a1;
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalAddRef(&v10, a2);
  lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_(v8, a2);
  v9 = v2;
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalAddRef(&v9, v4);
  LODWORD(v2) = Windows::Internal::ComTaskPool::QueueTask__lambda_dc9a4f30738474328512289af513d076___(
                  v5,
                  0,
                  v6,
                  (__int64)v8);
  lambda_dc9a4f30738474328512289af513d076_::__lambda_dc9a4f30738474328512289af513d076_(v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_(a2);
  return (unsigned int)v2;
}
