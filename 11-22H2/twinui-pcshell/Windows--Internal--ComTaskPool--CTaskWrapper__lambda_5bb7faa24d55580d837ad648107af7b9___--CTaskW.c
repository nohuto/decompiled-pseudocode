/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9___::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9_____lambda_5bb7faa24d55580d837ad648107af7b9___ @ 0x1803D1218
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5bb7faa24d55580d837ad648107af7b9___ @ 0x1803D1D0C (Windows--Internal--ComTaskPool--QueueTask__lambda_5bb7faa24d55580d837ad648107af7b9___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9___::CTaskWrapper__lambda_5bb7faa24d55580d837ad648107af7b9_____lambda_5bb7faa24d55580d837ad648107af7b9___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(a1 + 33) = *(_BYTE *)(a2 + 17);
  *(_QWORD *)a1 = off_1807D0C90;
  return a1;
}
