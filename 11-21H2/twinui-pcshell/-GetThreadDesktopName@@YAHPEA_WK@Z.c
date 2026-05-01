/*
 * XREFs of ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18014B8B8
 * Callers:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18014B64C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall GetThreadDesktopName(wchar_t *a1)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  unsigned int v4; // r11d
  __int64 v6; // rcx
  signed __int64 v7; // rdx
  wchar_t v8; // ax
  wchar_t *v9; // rax
  DWORD nLengthNeeded[4]; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pvInfo[264]; // [rsp+40h] [rbp-228h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, nLengthNeeded) )
  {
    StringCchCopyW(a1, 260LL, pvInfo);
    return 1;
  }
  else
  {
    v6 = 260LL;
    v7 = (char *)&LocaleName - (char *)a1;
    do
    {
      if ( v6 == -2147483386 )
        break;
      v8 = *(wchar_t *)((char *)a1 + v7);
      if ( !v8 )
        break;
      *a1++ = v8;
      --v6;
    }
    while ( v6 );
    v9 = a1 - 1;
    v4 = 0;
    if ( v6 )
      v9 = a1;
    *v9 = 0;
  }
  return v4;
}
