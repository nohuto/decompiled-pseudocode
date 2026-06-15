/*
 * XREFs of ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x140075260
 * Callers:
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x140074F20 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 *     ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x140075150 (-UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WaitForSignal@?$slim_event_t@$0A@@wil@@AEAA_NK@Z @ 0x140075304 (-WaitForSignal@-$slim_event_t@$0A@@wil@@AEAA_NK@Z.c)
 */

__int64 __fastcall CRtwqAsyncCallback::Wait(CRtwqAsyncCallback *this)
{
  volatile __int32 *v1; // rbx
  unsigned __int64 v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+40h] [rbp+18h] BYREF

  v1 = (volatile __int32 *)((char *)this + 12);
  QueryUnbiasedInterruptTime(&UnbiasedTime);
  v2 = 0LL;
  while ( !_InterlockedExchange(v1, 0) )
  {
    if ( v2 >= 0x3E8 || !(unsigned __int8)wil::slim_event_t<0>::WaitForSignal(v1, (unsigned int)(1000 - v2)) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCD,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    QueryUnbiasedInterruptTime(&v5);
    v2 = (v5 - UnbiasedTime) / 0x2710;
  }
  return 0LL;
}
