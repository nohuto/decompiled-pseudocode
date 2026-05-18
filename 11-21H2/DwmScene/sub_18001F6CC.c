/*
 * XREFs of sub_18001F6CC @ 0x18001F6CC
 * Callers:
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001E2B8 @ 0x18001E2B8 (sub_18001E2B8.c)
 */

void **__fastcall sub_18001F6CC(void **Src, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v6; // r8
  unsigned __int64 v8; // rcx
  char *v9; // rbx
  size_t v10; // rsi

  v6 = (__int64)Src[2];
  v8 = (unsigned __int64)Src[3];
  if ( a4 > v8 - v6 )
    return sub_18001E2B8(Src, a4, v6);
  v9 = (char *)Src;
  Src[2] = (void *)(v6 + a4);
  if ( v8 >= 0x10 )
    v9 = (char *)*Src;
  if ( &a3[a4] <= v9 || a3 > &v9[v6] )
  {
    v10 = a4;
  }
  else if ( v9 > a3 )
  {
    v10 = v9 - a3;
  }
  else
  {
    v10 = 0LL;
  }
  memmove(&v9[a4], v9, v6 + 1);
  memcpy(v9, a3, v10);
  memcpy(&v9[v10], &a3[v10 + a4], a4 - v10);
  return Src;
}
