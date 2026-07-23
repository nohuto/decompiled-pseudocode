/*
 * XREFs of sub_1408525D8 @ 0x1408525D8
 * Callers:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 * Callees:
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14036071C @ 0x14036071C (sub_14036071C.c)
 *     sub_140360A00 @ 0x140360A00 (sub_140360A00.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140582B18 @ 0x140582B18 (sub_140582B18.c)
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_1408525D8(ULONG_PTR *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // rsi
  int v6; // edi
  unsigned int *v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  char *v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rax
  char *v17; // rax
  size_t v18; // rsi
  char v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v19 = 0;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 || a1 != &StartContext )
  {
    v19 = 1;
    sub_14023502C((__int64)a1, (__int64)CurrentThread);
    if ( a1 != &StartContext )
    {
      while ( a1[2090] && !a1[12] )
      {
        sub_14022B0E0((__int64)a1, (__int64)CurrentThread);
        sub_140360A00((__int64)a1, (__int64)CurrentThread);
        if ( a1[2090] )
        {
          if ( !a1[12] )
          {
            sub_140981F58(a1);
            if ( a1[2090] )
            {
              if ( !a1[12] )
              {
                sub_14036071C((__int64)a1, (__int64)CurrentThread);
                return 0LL;
              }
            }
          }
        }
        sub_14036071C((__int64)a1, (__int64)CurrentThread);
        sub_14023502C((__int64)a1, (__int64)CurrentThread);
      }
    }
  }
  v7 = (unsigned int *)sub_14023FF18((__int64)a1, 0);
  v8 = (__int64)v7;
  if ( v7 )
    v9 = *v7 & (unsigned __int64)-(__int64)(a1[2090] != 0);
  else
    v9 = 0LL;
  v20 = 0LL;
  v10 = 0LL;
  if ( v6 )
  {
    v17 = sub_140582B18((__int16 *)a1, a2, &v20);
    v3 = v20;
    v10 = v17;
  }
  v11 = sub_1402828F0(64, 16 * (v3 + v9 + 1), 0x68506D4Du);
  v12 = v11;
  if ( v11 )
  {
    v13 = v11;
    if ( v9 )
    {
      v14 = (__int64 *)(v8 + 24);
      do
      {
        *v13 = *(v14 - 1) << 12;
        v15 = *v14;
        v14 += 2;
        v13[1] = v15 << 12;
        v13 += 2;
        --v9;
      }
      while ( v9 );
    }
    if ( v3 )
    {
      v18 = 16 * v3;
      memmove(v13, v10, v18);
      v13 = (_QWORD *)((char *)v13 + v18);
    }
    *v13 = 0LL;
    v13[1] = 0LL;
  }
  if ( v19 )
    sub_14022B0E0((__int64)a1, (__int64)CurrentThread);
  if ( v8 )
    sub_14023FCF0(v8);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
