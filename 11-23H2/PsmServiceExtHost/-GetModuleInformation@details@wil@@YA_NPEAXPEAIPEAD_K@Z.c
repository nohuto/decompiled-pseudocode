/*
 * XREFs of ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800771D4
 * Callers:
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180076D60 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     StringCopyWorkerA @ 0x18004D118 (StringCopyWorkerA.c)
 */

char __fastcall wil::details::GetModuleInformation(LPCWSTR lpModuleName, _DWORD *a2, char *a3, char *a4)
{
  HMODULE v6; // rcx
  size_t *v9; // r8
  __int64 v11; // rax
  const char *i; // r9
  size_t v13; // [rsp+20h] [rbp-168h]
  HMODULE phModule; // [rsp+30h] [rbp-158h] BYREF
  CHAR Filename[272]; // [rsp+40h] [rbp-148h] BYREF

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
    v11 = -1LL;
    do
      ++v11;
    while ( Filename[v11] );
    for ( i = &Filename[v11]; i > Filename && *(i - 1) != 92; --i )
      ;
    if ( a4 )
    {
      if ( (unsigned __int64)a4 <= 0x7FFFFFFF )
        StringCopyWorkerA(a3, (size_t)a4, v9, i, v13);
      else
        *a3 = 0;
    }
  }
  return 1;
}
