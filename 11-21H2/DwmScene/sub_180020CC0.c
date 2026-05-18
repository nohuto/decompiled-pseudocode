/*
 * XREFs of sub_180020CC0 @ 0x180020CC0
 * Callers:
 *     sub_1800D7738 @ 0x1800D7738 (sub_1800D7738.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180020174 @ 0x180020174 (sub_180020174.c)
 */

void **__fastcall sub_180020CC0(void **Src, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v6; // rcx
  char *v8; // r14
  __int64 v9; // rdi

  v4 = (__int64)Src[2];
  v6 = (unsigned __int64)Src[3];
  if ( a4 > v6 - v4 )
    return sub_180020174(Src, a4, v4);
  v8 = (char *)Src;
  Src[2] = (void *)(v4 + a4);
  if ( v6 >= 8 )
    v8 = (char *)*Src;
  if ( &aFl[a4] <= (wchar_t *)v8 || L"FL_" > (wchar_t *)&v8[2 * v4] )
  {
    v9 = a4;
  }
  else if ( v8 > (char *)L"FL_" )
  {
    v9 = (v8 - (char *)L"FL_") >> 1;
  }
  else
  {
    v9 = 0LL;
  }
  memmove(&v8[2 * a4], v8, 2 * v4 + 2);
  memcpy(v8, L"FL_", 2 * v9);
  memcpy(&v8[2 * v9], &aFl[v9 + a4], 2 * (a4 - v9));
  return Src;
}
