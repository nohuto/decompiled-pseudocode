/*
 * XREFs of ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x14006C634
 * Callers:
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14006C72C (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x14006C31C (-CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z.c)
 *     ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x14006C8F4 (-Wait@CRtwqAsyncCallback@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLocalMmcssWorkQueue::RegisterWorkQueueWithMmcss(CLocalMmcssWorkQueue *this)
{
  int RtwqAsyncCallback; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  IRtwqAsyncCallback *v5; // rbx
  unsigned int v6; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+48h] [rbp+10h] BYREF

  doneCallback = 0LL;
  RtwqAsyncCallback = CreateRtwqAsyncCallback((struct CRtwqAsyncCallback **)&doneCallback);
  v3 = RtwqAsyncCallback;
  if ( RtwqAsyncCallback >= 0 )
  {
    v5 = doneCallback;
    RtwqAsyncCallback = RtwqBeginRegisterWorkQueueWithMMCSS(*((_DWORD *)this + 4), L"Audio", 0, 0, doneCallback, 0LL);
    v3 = RtwqAsyncCallback;
    if ( RtwqAsyncCallback >= 0 )
    {
      RtwqAsyncCallback = CRtwqAsyncCallback::Wait((CRtwqAsyncCallback *)v5, v6);
      v3 = RtwqAsyncCallback;
      if ( RtwqAsyncCallback >= 0 )
      {
        *((_DWORD *)this + 5) = v5->GetParameters;
        *((_BYTE *)this + 24) = 1;
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 238LL;
    }
    else
    {
      v4 = 237LL;
    }
  }
  else
  {
    v4 = 235LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)(unsigned int)RtwqAsyncCallback);
LABEL_9:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&doneCallback);
  return v3;
}
