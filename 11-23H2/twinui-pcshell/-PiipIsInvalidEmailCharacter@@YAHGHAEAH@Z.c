/*
 * XREFs of ?PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z @ 0x180284E7C
 * Callers:
 *     ?PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284950 (-PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _o_iswspace_0 @ 0x1801C7488 (_o_iswspace_0.c)
 */

__int64 __fastcall PiipIsInvalidEmailCharacter(__int16 a1, int a2, int *a3)
{
  int v3; // ebx
  __int128 *i; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v8 = *(_DWORD *)L"\\";
  v7 = *(_OWORD *)L"@[]<>,:;\\";
  if ( *a3 )
  {
    if ( a1 == 34 )
      *a3 = 0;
    return 0LL;
  }
  if ( a1 != 34 )
  {
    if ( !(unsigned int)o_iswspace_0() )
    {
      for ( i = &v7; a1 != *(_WORD *)i; i = (__int128 *)((char *)i + 2) )
      {
        if ( (unsigned int)++v3 >= 0xA )
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( !a2 )
    return 1LL;
  *a3 = 1;
  return 0LL;
}
