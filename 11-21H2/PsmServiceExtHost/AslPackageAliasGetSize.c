/*
 * XREFs of AslPackageAliasGetSize @ 0x180030388
 * Callers:
 *     CompatCachepGetPackageAlias @ 0x1800301EC (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslPackageAliasGetSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v5 = -1LL;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a3 + 2 * v6) );
    v7 = 2 * v6 + 98;
  }
  else
  {
    v7 = 98LL;
  }
  v8 = 2LL;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a4 + 2 * v9) );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 2LL;
  }
  if ( a5 )
  {
    do
      ++v5;
    while ( *(_WORD *)(a5 + 2 * v5) );
    v8 = 2 * v5 + 2;
  }
  return v8 + v10 + v7;
}
