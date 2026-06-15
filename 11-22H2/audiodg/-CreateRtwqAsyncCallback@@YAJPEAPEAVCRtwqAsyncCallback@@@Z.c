/*
 * XREFs of ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x140074A8C
 * Callers:
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x140074F70 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 *     ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x1400751A0 (-UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreateRtwqAsyncCallback(struct CRtwqAsyncCallback **a1)
{
  struct CRtwqAsyncCallback *v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct CRtwqAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *((_QWORD *)v2 + 2) = 1LL;
    *(_QWORD *)v2 = &CRtwqAsyncCallback::`vftable';
    *((_QWORD *)v2 + 1) = 0LL;
    *a1 = v2;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
