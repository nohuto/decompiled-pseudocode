/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__&_::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__&___lambda_8642074a08b00918dbc99c393cacc902__&_ @ 0x1803CD16C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8642074a08b00918dbc99c393cacc902__&_ @ 0x1803CD3F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_8642074a08b00918dbc99c393cacc902__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902____::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902______lambda_8642074a08b00918dbc99c393cacc902____(
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
  *a1 = off_1807D0890;
  return a1;
}
