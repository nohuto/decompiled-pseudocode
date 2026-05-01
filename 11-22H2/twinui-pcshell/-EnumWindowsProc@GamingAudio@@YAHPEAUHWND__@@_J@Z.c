/*
 * XREFs of ?EnumWindowsProc@GamingAudio@@YAHPEAUHWND__@@_J@Z @ 0x18040CB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowTitle@GamingAudio@@YAHPEAUHWND__@@PEAPEAG@Z @ 0x18040D71C (-GetWindowTitle@GamingAudio@@YAHPEAUHWND__@@PEAPEAG@Z.c)
 */

__int64 __fastcall GamingAudio::EnumWindowsProc(GamingAudio *a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  HWND Window; // r14
  LONG WindowLongW; // esi
  unsigned __int16 **v7; // r8
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF

  v3 = 1;
  Window = GetWindow((HWND)a1, 4u);
  WindowLongW = GetWindowLongW((HWND)a1, -20);
  if ( !Window || !IsWindowVisible(Window) || (WindowLongW & 0x40000) != 0 )
  {
    if ( IsWindowVisible((HWND)a1) )
    {
      if ( (WindowLongW & 0x80u) == 0 )
      {
        GetWindowThreadProcessId((HWND)a1, &dwProcessId);
        if ( *a2 == dwProcessId )
        {
          if ( (unsigned int)GamingAudio::GetWindowTitle(a1, (HWND)a2 + 2, v7) )
            return 0;
        }
      }
    }
  }
  return v3;
}
