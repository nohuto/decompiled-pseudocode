/*
 * XREFs of ?SetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00B95DC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00EC2A0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00C609C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00CCCF4 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SetWindowMinimizeAnimation(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  int v2; // edi
  unsigned int v5; // ebx
  _BYTE v7[40]; // [rsp+20h] [rbp-68h] BYREF
  int v8; // [rsp+48h] [rbp-40h]

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 > 4u )
    return 3221225485LL;
  v5 = -1073741816;
  memset_0(v7, 0, 0x40uLL);
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    if ( v8 == v2 )
    {
      return 0;
    }
    else
    {
      v8 = v2;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 27LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v5;
}
