/*
 * XREFs of RtlStringCbCatNW @ 0x140649BD4
 * Callers:
 *     AslPathWildcardFindNext @ 0x140A1641C (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToAppend)
{
  __int64 v4; // r10
  NTSTRSAFE_PWSTR v5; // rax
  NTSTATUS result; // eax
  size_t v7; // r9
  __int64 v8; // rdx
  char *v9; // rcx
  signed __int64 v10; // r8
  __int16 v11; // ax
  char *v12; // rax

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = -1073741811;
  if ( !v4 )
    return -1073741811;
  v7 = cbToAppend >> 1;
  if ( v7 <= 0x7FFFFFFE )
  {
    v8 = ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260;
    v9 = (char *)pszDest + (-(__int64)(v4 != 0) & (2 * (260 - v4)));
    if ( ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) != 0xFFFFFFFFFFFFFEFCuLL )
    {
      v10 = (char *)pszSrc - v9;
      do
      {
        if ( !v7 )
          break;
        v11 = *(_WORD *)&v9[v10];
        if ( !v11 )
          break;
        *(_WORD *)v9 = v11;
        --v7;
        v9 += 2;
        --v8;
      }
      while ( v8 );
    }
    v12 = v9 - 2;
    if ( v8 )
      v12 = v9;
    *(_WORD *)v12 = 0;
    return v8 == 0 ? 0x80000005 : 0;
  }
  return result;
}
