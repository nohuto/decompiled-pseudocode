/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__&_::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__&___lambda_a1f8daa8914a455a54260b3e38b00a83__&_ @ 0x180542468
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a1f8daa8914a455a54260b3e38b00a83__&_ @ 0x18054277C (Windows--Internal--ComTaskPool--QueueTask__lambda_a1f8daa8914a455a54260b3e38b00a83__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83____::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83______lambda_a1f8daa8914a455a54260b3e38b00a83____(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2[1];
  a1[3] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = off_180665B48;
  return a1;
}
