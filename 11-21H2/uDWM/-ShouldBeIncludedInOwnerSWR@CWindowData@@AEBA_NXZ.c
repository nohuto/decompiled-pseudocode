/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001DDE4
 * Callers:
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001F330 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001F920 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18001DEC0 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // bl
  HWND v4; // rcx
  WCHAR *v5; // rax
  int v6; // edx
  int v7; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( (*((char *)this + 120) >= 0 || (*((_DWORD *)this + 168) & 0xFFF) == 0x11)
    && CWindowData::PropertiesAllowAutoParenting(this) )
  {
    v4 = (HWND)*((_QWORD *)this + 5);
    ClassName[0] = 0;
    v2 = 1;
    if ( GetClassNameW(v4, ClassName, 260) )
    {
      v5 = ClassName;
      do
      {
        v6 = *(WCHAR *)((char *)v5 + (char *)L"ImmersiveAppTitleBar" - (char *)ClassName);
        v7 = *v5 - v6;
        if ( v7 )
          break;
        ++v5;
      }
      while ( v6 );
      return v7 != 0;
    }
  }
  return v2;
}
