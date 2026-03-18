/*
 * XREFs of ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01656A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C005FA80 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1C0165240 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01B9790 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C0206380 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C020ABD8 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetFilterKeys(int a1, struct tagFILTERKEYS *a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // eax
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  if ( a1 && a1 != 24 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 24 )
    return 0LL;
  v7 = *((_DWORD *)a2 + 2);
  if ( v7 )
  {
    if ( *((_DWORD *)a2 + 5) )
      return 0LL;
  }
  v8 = *((_DWORD *)a2 + 1);
  if ( (v8 & 0x7F) != v8 )
    return 0LL;
  v9 = v8 & 0xFFFFFFFD;
  v10 = v8 | 2;
  if ( (xmmword_1C0295A4C & 2) == 0 )
    v10 = v9;
  *((_DWORD *)a2 + 1) = v10;
  if ( v7 > 0x4E20 || *((_DWORD *)a2 + 3) > 0x4E20u || *((_DWORD *)a2 + 4) > 0x4E20u || *((_DWORD *)a2 + 5) > 0x4E20u )
    return 0LL;
  if ( a3 )
  {
    v11 = SetFilterKeys(a2);
    *a5 = v11;
    a4 = v11;
    if ( !v11 )
    {
      SetFilterKeys((struct tagFILTERKEYS *)&gFilterKeys);
      return 0LL;
    }
  }
  if ( !a4 )
    return 0LL;
  v14 = 0LL;
  v15 = 0LL;
  memmove(&v14, &gFilterKeys, (unsigned int)gFilterKeys);
  memmove(&gFilterKeys, a2, *(unsigned int *)a2);
  LODWORD(gFilterKeys) = 24;
  if ( (xmmword_1C0295A4C & 1) == 0 )
    StopFilterKeysTimers();
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(2LL);
  ApiSetEditionPostShellHookMessages(v13, 2LL, &v14, &gFilterKeys);
  return 1LL;
}
