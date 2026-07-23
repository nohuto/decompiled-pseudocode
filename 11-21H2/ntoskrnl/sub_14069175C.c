/*
 * XREFs of sub_14069175C @ 0x14069175C
 * Callers:
 *     sub_140691444 @ 0x140691444 (sub_140691444.c)
 * Callees:
 *     sub_140211F88 @ 0x140211F88 (sub_140211F88.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlUpcaseUnicodeChar @ 0x1407CD620 (RtlUpcaseUnicodeChar.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall sub_14069175C(unsigned __int16 *a1, const void **a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  WCHAR *v8; // rdi
  WCHAR *v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // eax
  WCHAR v13; // [rsp+40h] [rbp+8h]

  v4 = *(unsigned __int16 *)a2 + (unsigned __int64)*a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 68, 0x67655256u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4 + 68);
    v7 = 314159LL;
    v8 = (WCHAR *)*((_QWORD *)a1 + 1);
    v9 = &v8[(unsigned __int64)*a1 >> 1];
    while ( v8 < v9 )
    {
      v13 = RtlUpcaseUnicodeChar(*v8++);
      v7 = HIBYTE(v13) + 37 * ((unsigned __int8)v13 + 37 * v7);
    }
    v6[3] = 0LL;
    v6[1] = v7;
    v6[2] = 1LL;
    sub_140211F88(v6 + 6);
    v10 = *a1;
    *((_WORD *)v6 + 32) = v10;
    memmove((char *)v6 + 68, *((const void **)a1 + 1), v10);
    v11 = *(unsigned __int16 *)a2;
    *((_WORD *)v6 + 33) = v11;
    memmove((char *)v6 + 2 * ((unsigned __int64)*((unsigned __int16 *)v6 + 32) >> 1) + 68, a2[1], v11);
  }
  return v6;
}
