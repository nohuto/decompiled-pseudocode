/*
 * XREFs of ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x140074F20
 * Callers:
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ @ 0x14007502C (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x140074A3C (-CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z.c)
 *     ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x140075260 (-Wait@CRtwqAsyncCallback@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLocalMmcssWorkQueue::RegisterWorkQueueWithMmcss(CLocalMmcssWorkQueue *this)
{
  int RtwqAsyncCallback; // eax
  unsigned int v3; // ebx
  IRtwqAsyncCallback *v4; // rbx
  unsigned int v5; // edx
  HRESULT v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+48h] [rbp+10h] BYREF

  doneCallback = 0LL;
  RtwqAsyncCallback = CreateRtwqAsyncCallback((struct CRtwqAsyncCallback **)&doneCallback);
  v3 = RtwqAsyncCallback;
  if ( RtwqAsyncCallback >= 0 )
  {
    v4 = doneCallback;
    v6 = RtwqBeginRegisterWorkQueueWithMMCSS(*((_DWORD *)this + 4), L"Audio", 0, 0, doneCallback, 0LL);
    if ( v6 >= 0 )
    {
      v6 = CRtwqAsyncCallback::Wait((CRtwqAsyncCallback *)v4, v5);
      if ( v6 >= 0 )
      {
        *((_DWORD *)this + 5) = v4->GetParameters;
        *((_BYTE *)this + 24) = 1;
        v3 = 0;
        goto LABEL_9;
      }
      v7 = 238LL;
    }
    else
    {
      v7 = 237LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v6);
    v3 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)RtwqAsyncCallback);
  }
LABEL_9:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&doneCallback);
  return v3;
}
