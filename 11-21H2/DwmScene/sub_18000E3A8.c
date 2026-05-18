/*
 * XREFs of sub_18000E3A8 @ 0x18000E3A8
 * Callers:
 *     sub_18000DFD0 @ 0x18000DFD0 (sub_18000DFD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

char __fastcall sub_18000E3A8(LPCWSTR lpModuleName, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  _BYTE *v15; // rax
  HMODULE phModule; // [rsp+20h] [rbp-148h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-138h] BYREF

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
    if ( (unsigned __int64)(a4 - 1) > 0x7FFFFFFE )
    {
      if ( a4 )
        *a3 = 0;
    }
    else
    {
      v12 = 2147483646 - a4;
      v13 = i - a3;
      do
      {
        if ( !(v12 + a4) )
          break;
        v14 = a3[v13];
        if ( !v14 )
          break;
        *a3++ = v14;
        --a4;
      }
      while ( a4 );
      v15 = a3 - 1;
      if ( a4 )
        v15 = a3;
      *v15 = 0;
    }
  }
  return 1;
}
