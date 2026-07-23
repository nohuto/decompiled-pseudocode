/*
 * XREFs of sub_1406DF688 @ 0x1406DF688
 * Callers:
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_140978260 @ 0x140978260 (sub_140978260.c)
 *     sub_14097833C @ 0x14097833C (sub_14097833C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406DF7A0 @ 0x1406DF7A0 (sub_1406DF7A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_1406DF688(_QWORD *P, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !*P )
    goto LABEL_14;
  v7 = 0LL;
  do
  {
    v8 = P[v7 + 1];
    if ( v8 )
    {
      P[v4 + 1] = v8;
      v3 = v8 | 1;
      v4 = (unsigned int)(v4 + 1);
    }
    v7 = ++v5;
  }
  while ( (unsigned __int64)v5 < *P );
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      v9 = (unsigned int)v4;
      if ( (unsigned int)v4 == *P )
        return P;
      v10 = sub_1406DF7A0((unsigned int)v4);
      v3 = v10;
      if ( !v10 )
        return P;
      memmove((void *)(v10 + 8), P + 1, 8 * v9);
    }
  }
  else
  {
LABEL_14:
    v3 = -2LL;
  }
  if ( a2 )
    ExFreePoolWithTag(P, 0);
  return (_QWORD *)v3;
}
