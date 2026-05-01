/*
 * XREFs of ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180406308
 * Callers:
 *     ?SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x180406250 (-SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ @ 0x1804064D0 (-v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_933f2e103ae61e9d0b02a5c7dd9d135e___ @ 0x180404DC8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_933f2e103ae61e9d0b02a5c7dd9d135e.c)
 */

void __fastcall UwpWindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 572)
    && (*(float *)(a1 + 708) != *a2
     || *(float *)(a1 + 712) != a2[1]
     || *(float *)(a1 + 716) != a2[2]
     || *(float *)(a1 + 720) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 288) )
    {
      *(_QWORD *)v7 = a1;
      *(_QWORD *)&v7[2] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_933f2e103ae61e9d0b02a5c7dd9d135e___(
             v5,
             CurrentThreadId,
             v7);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1A8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
    }
  }
  *(_OWORD *)(a1 + 692) = *(_OWORD *)a2;
}
