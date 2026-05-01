/*
 * XREFs of ?await_resume@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXXZ @ 0x18015E290
 * Callers:
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXXZ @ 0x180043AE8 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAAXXZ @ 0x18015E254 (-await_resume@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAAXXZ @ 0x1801CEDF0 (-await_resume@-$notify_awaiter@V-$duration@HU-$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QE.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall `winrt::resume_after'::`2'::awaitable::await_resume(__int64 a1)
{
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  if ( (_DWORD)result == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  return result;
}
