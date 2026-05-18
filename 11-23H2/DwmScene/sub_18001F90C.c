/*
 * XREFs of sub_18001F90C @ 0x18001F90C
 * Callers:
 *     sub_1800C2E4C @ 0x1800C2E4C (sub_1800C2E4C.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001DBD0 @ 0x18001DBD0 (sub_18001DBD0.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 */

void **__fastcall sub_18001F90C(void **Src, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r8
  bool v8; // cf
  char *v9; // rsi
  __int64 v10; // rdi
  int v12; // [rsp+20h] [rbp-28h]

  sub_18001DBD0((__int64)Src, 0LL);
  v7 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v7 )
    return sub_18001EB54(Src, a4, v7, v6, v12, a4);
  v8 = (unsigned __int64)Src[3] < 8;
  Src[2] = (void *)(v7 + a4);
  v9 = (char *)Src;
  if ( !v8 )
    v9 = (char *)*Src;
  if ( &aFl[a4] <= (wchar_t *)v9 || L"FL_" > (wchar_t *)&v9[2 * v7] )
  {
    v10 = a4;
  }
  else if ( v9 > (char *)L"FL_" )
  {
    v10 = (v9 - (char *)L"FL_") >> 1;
  }
  else
  {
    v10 = 0LL;
  }
  memmove(&v9[2 * a4], v9, 2 * v7 + 2);
  memcpy(v9, L"FL_", 2 * v10);
  memcpy(&v9[2 * v10], &aFl[v10 + a4], 2 * (a4 - v10));
  return Src;
}
