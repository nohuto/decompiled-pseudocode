/*
 * XREFs of ?GetWindowTitle@GamingAudio@@YAHPEAUHWND__@@PEAPEAG@Z @ 0x18040D71C
 * Callers:
 *     ?EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z @ 0x18040CB90 (-EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall GamingAudio::GetWindowTitle(GamingAudio *this, wchar_t **a2, unsigned __int16 **a3)
{
  unsigned int v4; // ebx
  int WindowText; // eax
  __int64 v6; // rdi
  wchar_t *v7; // rax
  WCHAR pString[264]; // [rsp+20h] [rbp-228h] BYREF

  v4 = 0;
  *a2 = 0LL;
  WindowText = InternalGetWindowText((HWND)this, pString, 260);
  if ( WindowText <= 1 )
    return 0LL;
  v6 = WindowText + 1;
  v7 = (wchar_t *)CoTaskMemAlloc(2 * v6);
  *a2 = v7;
  if ( !v7 )
    return 0LL;
  LOBYTE(v4) = (int)StringCchCopyW(v7, v6, pString) >= 0;
  return v4;
}
