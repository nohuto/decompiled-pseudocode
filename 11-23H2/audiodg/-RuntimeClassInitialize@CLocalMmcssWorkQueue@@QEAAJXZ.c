/*
 * XREFs of ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14007502C
 * Callers:
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14007429C (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___::_lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___ @ 0x14007470C (wil--details--lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___--_lambda_call__lambda_4fd0.c)
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x140074F20 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 */

__int64 __fastcall CLocalMmcssWorkQueue::RuntimeClassInitialize(DWORD *this)
{
  HRESULT WorkQueue; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  WorkQueue = RtwqAllocateWorkQueue(RTWQ_STANDARD_WORKQUEUE, this + 4);
  v3 = WorkQueue;
  if ( WorkQueue >= 0 )
  {
    *(_QWORD *)v7 = this;
    v8 = 1;
    v5 = CLocalMmcssWorkQueue::RegisterWorkQueueWithMmcss((CLocalMmcssWorkQueue *)this);
    v6 = v5;
    if ( v5 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDA,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v5);
      wil::details::lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___::_lambda_call__lambda_4fd0a241c5179e385a4d638496098fc0___(v7);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)WorkQueue);
    return v3;
  }
}
