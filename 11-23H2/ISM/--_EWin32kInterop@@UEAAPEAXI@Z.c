/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800F890C
 * Callers:
 *     ??_EWin32kInterop@@WBA@EAAPEAXI@Z @ 0x180066530 (--_EWin32kInterop@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800F82B8 (--1Win32kInterop@@UEAA@XZ.c)
 */

Win32kInterop *__fastcall Win32kInterop::`vector deleting destructor'(Win32kInterop *this, __int64 a2)
{
  char v2; // di

  v2 = a2;
  Win32kInterop::~Win32kInterop(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
