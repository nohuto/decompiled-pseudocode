/*
 * XREFs of ndisNsiGetPackageFamilyName @ 0x1C013ED20
 * Callers:
 *     ndisIsMacAddressHidden @ 0x1C010D9C0 (ndisIsMacAddressHidden.c)
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 */

__int64 __fastcall ndisNsiGetPackageFamilyName(const wchar_t *Src, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  wchar_t *v6; // rax
  unsigned int v7; // ebp
  int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // esi
  const wchar_t *i; // rdi

  v3 = a2;
  v6 = wcschr(Src, 0x5Fu);
  v7 = 0;
  v8 = (int)v6;
  if ( !v6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Src[v9] );
    v8 = (_DWORD)Src + 2 * v9;
  }
  v10 = v8 - (_DWORD)Src;
  for ( i = (const wchar_t *)((char *)Src + v3 - 2); *i != 95 && i != Src; --i )
    v7 += 2;
  if ( (unsigned __int64)(v10 + v7) + 2 > *(unsigned __int16 *)(a3 + 2) )
    return 3221225507LL;
  memmove(*(void **)(a3 + 8), Src, v10);
  memmove((void *)(v10 + *(_QWORD *)(a3 + 8)), i, v7 + 2LL);
  *(_WORD *)a3 = v7 + v10;
  return 0LL;
}
