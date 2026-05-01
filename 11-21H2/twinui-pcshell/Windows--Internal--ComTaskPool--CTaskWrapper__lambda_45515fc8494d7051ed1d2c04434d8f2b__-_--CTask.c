/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b__&_::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b__&___lambda_45515fc8494d7051ed1d2c04434d8f2b__&_ @ 0x180311A18
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_45515fc8494d7051ed1d2c04434d8f2b__&_ @ 0x180311BAC (Windows--Internal--ComTaskPool--QueueTask__lambda_45515fc8494d7051ed1d2c04434d8f2b__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b____::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b______lambda_45515fc8494d7051ed1d2c04434d8f2b____(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  v4 = *a2;
  a1[2] = *a2;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 208);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 208), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), (volatile int *)v4);
  }
LABEL_8:
  *a1 = off_180649350;
  return a1;
}
