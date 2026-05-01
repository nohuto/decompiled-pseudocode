/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0_____lambda_fd0439dc359abe078b4c08f0b3a8cea0___ @ 0x1805B1FCC
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x1805B2464 (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0_____lambda_fd0439dc359abe078b4c08f0b3a8cea0___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  LOBYTE(v4) = *(_BYTE *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1807EA8E8;
  return a1;
}
