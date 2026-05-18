/*
 * XREFs of sub_18001DF1C @ 0x18001DF1C
 * Callers:
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001CC60 @ 0x18001CC60 (sub_18001CC60.c)
 *     sub_18001DBD0 @ 0x18001DBD0 (sub_18001DBD0.c)
 */

void **__fastcall sub_18001DF1C(void **Src, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // r8
  bool v9; // cf
  char *v10; // rbx
  size_t v11; // rdi

  sub_18001DBD0((__int64)Src, 0LL);
  v8 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v8 )
    return sub_18001CC60(Src, a4, v8, v7, a3, a4);
  v9 = (unsigned __int64)Src[3] < 0x10;
  Src[2] = (void *)(v8 + a4);
  v10 = (char *)Src;
  if ( !v9 )
    v10 = (char *)*Src;
  if ( &a3[a4] <= v10 || a3 > &v10[v8] )
  {
    v11 = a4;
  }
  else if ( v10 > a3 )
  {
    v11 = v10 - a3;
  }
  else
  {
    v11 = 0LL;
  }
  memmove(&v10[a4], v10, v8 + 1);
  memcpy(v10, a3, v11);
  memcpy(&v10[v11], &a3[v11 + a4], a4 - v11);
  return Src;
}
