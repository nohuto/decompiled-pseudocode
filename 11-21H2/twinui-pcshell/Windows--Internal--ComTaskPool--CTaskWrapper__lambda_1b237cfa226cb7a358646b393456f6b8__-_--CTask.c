/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&___lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x180029470
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x1800293DC (Windows--Internal--ComTaskPool--QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__-_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8____::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8______lambda_1b237cfa226cb7a358646b393456f6b8____(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  a1[3] = a2[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 3);
  *a1 = off_18061C748;
  return a1;
}
