/*
 * XREFs of ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180001064
 * Callers:
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x1800011B0 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180004360 (__security_check_cookie.c)
 */

char __fastcall wil::details::GetModuleInformation(LPCWSTR lpModuleName, _DWORD *a2, unsigned int *a3, char *a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // rcx
  __int64 v12; // rdx
  signed __int64 v13; // rcx
  char v14; // al
  unsigned int *v15; // rax
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
    *a2 = lpModuleName != 0LL ? (_DWORD)lpModuleName - (_DWORD)v6 : 0;
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
        *(_BYTE *)a3 = 0;
    }
    else
    {
      v12 = 2147483646LL - (_QWORD)a4;
      v13 = i - (CHAR *)a3;
      do
      {
        if ( !&a4[v12] )
          break;
        v14 = *((_BYTE *)a3 + v13);
        if ( !v14 )
          break;
        *(_BYTE *)a3 = v14;
        a3 = (unsigned int *)((char *)a3 + 1);
        --a4;
      }
      while ( a4 );
      v15 = (unsigned int *)((char *)a3 - 1);
      if ( a4 )
        v15 = a3;
      *(_BYTE *)v15 = 0;
    }
  }
  return 1;
}
