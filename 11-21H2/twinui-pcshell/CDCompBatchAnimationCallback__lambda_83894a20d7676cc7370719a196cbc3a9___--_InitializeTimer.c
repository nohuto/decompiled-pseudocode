/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer @ 0x18051D858
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnBeginBatchUpdate @ 0x18051AB50 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--OnBeginBatchUpdate.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer(
        __int64 *a1)
{
  int Error; // ebx
  HWND v3; // rdi
  signed int LastError; // eax
  __int64 v5; // rax

  Error = 0;
  if ( !a1[4] )
  {
    v3 = (HWND)SHCreateWorkerWindowW(
                 CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc,
                 -3LL,
                 0LL);
    if ( v3 || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      if ( SetTimer(v3, 0x64uLL, 0x3E8u, 0LL) )
        goto LABEL_10;
      LastError = GetLastError();
      Error = LastError;
      if ( LastError > 0 )
        Error = (unsigned __int16)LastError | 0x80070000;
      if ( Error >= 0 )
      {
LABEL_10:
        v5 = *a1;
        a1[4] = (__int64)v3;
        (*(void (__fastcall **)(__int64 *))(v5 + 8))(a1);
      }
      else if ( v3 )
      {
        DestroyWindow(v3);
      }
    }
  }
  return (unsigned int)Error;
}
