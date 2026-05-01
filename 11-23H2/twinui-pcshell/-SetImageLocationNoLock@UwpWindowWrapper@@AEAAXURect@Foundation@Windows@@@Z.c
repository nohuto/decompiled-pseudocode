/*
 * XREFs of ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18018DE8C
 * Callers:
 *     ?SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x1800621C0 (-SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ @ 0x18018DE00 (-v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ.c)
 *     ?v_SplashScreenSet@UwpWindowWrapper@@EEAAXXZ @ 0x18018DE60 (-v_SplashScreenSet@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_39c05a2d08f91a104f18850ee37f7c9d___ @ 0x18005C6B8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_39c05a2d08f91a104f18850ee37f7c9d.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UwpWindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 580)
    && (*(float *)(a1 + 732) != *a2
     || *(float *)(a1 + 736) != a2[1]
     || *(float *)(a1 + 740) != a2[2]
     || *(float *)(a1 + 744) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 296) )
    {
      *(_QWORD *)v7 = a1;
      *(_QWORD *)&v7[2] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_39c05a2d08f91a104f18850ee37f7c9d___(
             v5,
             CurrentThreadId,
             v7);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1BD,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
    }
  }
  *(_OWORD *)(a1 + 716) = *(_OWORD *)a2;
}
