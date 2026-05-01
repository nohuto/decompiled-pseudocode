/*
 * XREFs of ?GetWindowTitle@GamingAudio@@YAHPEAUHWND__@@PEAPEAG@Z @ 0x18033FACC
 * Callers:
 *     ?EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z @ 0x18033EF50 (-EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GamingAudio::GetWindowTitle(GamingAudio *this, wchar_t **a2, unsigned __int16 **a3)
{
  int WindowText; // eax
  __int64 v5; // rbx
  wchar_t *v6; // rax
  _BOOL8 result; // rax
  WCHAR pString[264]; // [rsp+20h] [rbp-228h] BYREF

  *a2 = 0LL;
  WindowText = InternalGetWindowText((HWND)this, pString, 260);
  result = 0;
  if ( WindowText > 1 )
  {
    v5 = WindowText + 1;
    v6 = (wchar_t *)CoTaskMemAlloc(2 * v5);
    *a2 = v6;
    if ( v6 )
    {
      if ( (int)StringCchCopyW(v6, v5, pString) >= 0 )
        return 1;
    }
  }
  return result;
}
