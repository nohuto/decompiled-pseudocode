/*
 * XREFs of ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180140BC4
 * Callers:
 *     ?SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x180140AF0 (-SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180140B70 (-v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_08eb6a5eb03665cd771eb46fad9d375c___ @ 0x180140C70 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_08eb6a5eb03665cd771eb46fad9d375c.c)
 */

void __fastcall WindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  float *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 580)
    && (*(float *)(a1 + 724) != *a2
     || *(float *)(a1 + 728) != a2[1]
     || *(float *)(a1 + 732) != a2[2]
     || *(float *)(a1 + 736) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 296) )
    {
      *(_QWORD *)v7 = a1;
      v8 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_08eb6a5eb03665cd771eb46fad9d375c___(
             v5,
             CurrentThreadId,
             v7);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x190,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
    }
  }
  *(_OWORD *)(a1 + 708) = *(_OWORD *)a2;
}
