/*
 * XREFs of ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x14006C7E8
 * Callers:
 *     ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x14006C0B8 (--1CLocalMmcssWorkQueue@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x14006C31C (-CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z.c)
 *     ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x14006C8F4 (-Wait@CRtwqAsyncCallback@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLocalMmcssWorkQueue::UnRegisterWorkQueueWithMmcss(CLocalMmcssWorkQueue *this)
{
  int RtwqAsyncCallback; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 24) )
    return 0LL;
  doneCallback = 0LL;
  RtwqAsyncCallback = CreateRtwqAsyncCallback((struct CRtwqAsyncCallback **)&doneCallback);
  v4 = RtwqAsyncCallback;
  if ( RtwqAsyncCallback >= 0 )
  {
    RtwqAsyncCallback = RtwqBeginUnregisterWorkQueueWithMMCSS(*((_DWORD *)this + 4), doneCallback, 0LL);
    v4 = RtwqAsyncCallback;
    if ( RtwqAsyncCallback >= 0 )
    {
      RtwqAsyncCallback = CRtwqAsyncCallback::Wait((CRtwqAsyncCallback *)doneCallback, v6);
      v4 = RtwqAsyncCallback;
      if ( RtwqAsyncCallback >= 0 )
      {
        v4 = 0;
        goto LABEL_11;
      }
      v5 = 252LL;
    }
    else
    {
      v5 = 251LL;
    }
  }
  else
  {
    v5 = 249LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)(unsigned int)RtwqAsyncCallback);
LABEL_11:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&doneCallback);
  return v4;
}
