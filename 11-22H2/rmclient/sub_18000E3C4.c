/*
 * XREFs of sub_18000E3C4 @ 0x18000E3C4
 * Callers:
 *     sub_18000DF50 @ 0x18000DF50 (sub_18000DF50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_1800109A8 @ 0x1800109A8 (sub_1800109A8.c)
 */

char __fastcall sub_18000E3C4(LPCWSTR lpModuleName, _DWORD *a2, __int64 a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // r8
  HMODULE phModule; // [rsp+20h] [rbp-158h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-148h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
  }
  if ( a2 )
  {
    if ( lpModuleName )
      LODWORD(lpModuleName) = (_DWORD)lpModuleName - (_DWORD)v6;
    *a2 = (_DWORD)lpModuleName;
  }
  if ( a3 )
  {
    if ( !GetModuleFileNameA(v6, Filename, 0x104u) )
      return 0;
    v10 = -1LL;
    do
      ++v10;
    while ( Filename[v10] );
    for ( i = &Filename[v10]; i > Filename && *(i - 1) != 92; --i )
      ;
    sub_1800109A8(a3, a4);
  }
  return 1;
}
