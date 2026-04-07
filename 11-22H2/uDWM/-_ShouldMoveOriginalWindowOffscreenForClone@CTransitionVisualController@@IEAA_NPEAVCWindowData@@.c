/*
 * XREFs of ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800EC758
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 */

char __fastcall CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  char v2; // bl
  HWND *v3; // rdi
  int v4; // ecx
  wchar_t **i; // rdx
  WCHAR *v6; // rax
  int v7; // r10d
  int v8; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 1;
  if ( *((_DWORD *)a2 + 33) == 2 || *((_DWORD *)a2 + 33) == 3 )
  {
    v3 = (HWND *)((char *)a2 + 40);
LABEL_6:
    v2 = 0;
    goto LABEL_7;
  }
  v3 = (HWND *)((char *)a2 + 40);
  if ( (unsigned int)GetPropW(*((HWND *)a2 + 5), L"NoAnimationOffscreenMovement") == 1 )
    goto LABEL_6;
LABEL_7:
  memset_0(ClassName, 0, 0x208uLL);
  if ( v2 && GetClassNameW(*v3, ClassName, 260) )
  {
    v4 = 0;
    for ( i = off_18011A4B0; ; ++i )
    {
      v6 = ClassName;
      do
      {
        v7 = *(WCHAR *)((char *)v6 + (char *)*i - (char *)ClassName);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
        break;
      if ( (unsigned int)++v4 >= 2 )
        return v2;
    }
    return 0;
  }
  return v2;
}
