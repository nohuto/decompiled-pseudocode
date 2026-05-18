/*
 * XREFs of sub_18001E2E0 @ 0x18001E2E0
 * Callers:
 *     sub_18001E804 @ 0x18001E804 (sub_18001E804.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

void **__fastcall sub_18001E2E0(void **Src, __int64 a2, __int64 a3, char a4)
{
  size_t v4; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  void *v11; // rbx

  v4 = (size_t)Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180011B60();
  v7 = (unsigned __int64)Src[3];
  v8 = sub_18001187C(v4 + 1, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v9 = (_BYTE *)sub_18001090C(v8 + 1);
  Src[2] = (void *)(v4 + 1);
  v10 = v9;
  Src[3] = (void *)v8;
  if ( v7 < 0x10 )
  {
    memcpy(v9, Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
  }
  else
  {
    v11 = *Src;
    memcpy(v9, *Src, v4);
    v10[v4] = a4;
    v10[v4 + 1] = 0;
    sub_1800100E8(v11, v7 + 1);
  }
  *Src = v10;
  return Src;
}
