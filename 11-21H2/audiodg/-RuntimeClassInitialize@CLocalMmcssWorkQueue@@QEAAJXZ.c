/*
 * XREFs of ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14006C72C
 * Callers:
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14006BE50 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x14006C634 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 */

__int64 __fastcall CLocalMmcssWorkQueue::RuntimeClassInitialize(DWORD *this)
{
  DWORD *v1; // rdi
  HRESULT WorkQueue; // eax
  unsigned int v4; // ebx
  int v5; // eax
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 4;
  WorkQueue = RtwqAllocateWorkQueue(RTWQ_STANDARD_WORKQUEUE, this + 4);
  v4 = WorkQueue;
  if ( WorkQueue >= 0 )
  {
    v5 = CLocalMmcssWorkQueue::RegisterWorkQueueWithMmcss((CLocalMmcssWorkQueue *)this);
    v4 = v5;
    if ( v5 >= 0 )
    {
      return 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDA,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v5);
      v6 = RtwqUnlockWorkQueue(*v1);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD6,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
          (const char *)(unsigned int)v6);
      *v1 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)WorkQueue);
  }
  return v4;
}
