/*
 * XREFs of _contentmanagement_IID_Lookup @ 0x180001090
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x180022499 (memcmp_0.c)
 */

__int64 __fastcall contentmanagement_IID_Lookup(void **Buf1, int *a2)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void **v11; // r8

  v3 = -1;
  v5 = memcmp_0(
         Buf1,
         *(&__FIIterable_1___FIKeyValuePair_2_ContentManagement__CWindowPosition_UINT32ProxyVtbl + 1),
         0x10uLL);
  if ( v5 <= 0 )
  {
    if ( !v5 )
    {
      v3 = 32;
LABEL_16:
      *a2 = v3;
      return 1LL;
    }
  }
  else
  {
    v3 = 26;
  }
  v6 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 16][1], 0x10uLL);
  if ( v6 >= 0 )
  {
    v3 += 16;
    if ( !v6 )
      goto LABEL_16;
  }
  v7 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 8][1], 0x10uLL);
  if ( v7 >= 0 )
  {
    v3 += 8;
    if ( !v7 )
      goto LABEL_16;
  }
  v8 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 4][1], 0x10uLL);
  if ( v8 >= 0 )
  {
    v3 += 4;
    if ( !v8 )
      goto LABEL_16;
  }
  v9 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 2][1], 0x10uLL);
  if ( v9 >= 0 )
  {
    v3 += 2;
    if ( !v9 )
      goto LABEL_16;
  }
  v10 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 1][1], 0x10uLL);
  if ( v10 >= 0 )
  {
    ++v3;
    if ( !v10 )
      goto LABEL_16;
  }
  if ( ++v3 < 58 )
  {
    _mm_lfence();
    v11 = (void **)contentmanagement_ProxyVtblList[v3][1];
    if ( *Buf1 == *v11 && Buf1[1] == v11[1] )
      goto LABEL_16;
  }
  return 0LL;
}
