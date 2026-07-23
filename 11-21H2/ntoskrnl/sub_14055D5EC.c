/*
 * XREFs of sub_14055D5EC @ 0x14055D5EC
 * Callers:
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 *     sub_14055CDB4 @ 0x14055CDB4 (sub_14055CDB4.c)
 * Callees:
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_UNKNOWN **sub_14055D5EC()
{
  _UNKNOWN **result; // rax
  int v1; // esi
  unsigned int *v2; // rdi
  unsigned int v3; // ecx
  unsigned __int64 *v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = 0;
  if ( qword_140C54E80 )
  {
    qsort((void *)(qword_140C54E80 + 8), *(unsigned int *)qword_140C54E80, 0x10uLL, sub_14055E030);
    v2 = (unsigned int *)qword_140C54E80;
    v3 = 1;
    if ( *(_DWORD *)qword_140C54E80 > 1u )
    {
      v4 = (unsigned __int64 *)(qword_140C54E80 + 8);
      v5 = qword_140C54E80;
      do
      {
        v6 = *v4;
        v7 = *v4 + *(_QWORD *)(v5 + 16);
        v8 = *(_QWORD *)&v2[4 * v3 + 2];
        v9 = v8 + *(_QWORD *)&v2[4 * v3 + 4];
        if ( v7 - 1 < v8 - 1 )
        {
          v5 = (__int64)&v2[4 * ++v1];
          v4 = (unsigned __int64 *)(v5 + 8);
          *(_OWORD *)(v5 + 8) = *(_OWORD *)&v2[4 * v3 + 2];
        }
        else
        {
          if ( v6 >= v8 )
            v6 = *(_QWORD *)&v2[4 * v3 + 2];
          *v4 = v6;
          if ( v7 - 1 <= v9 - 1 )
            v7 = v9;
          *(_QWORD *)(v5 + 16) = v7 - v6;
        }
        ++v3;
      }
      while ( v3 < *v2 );
    }
    result = (_UNKNOWN **)memset(&v2[4 * (v1 + 1) + 2], 0, 16LL * (*v2 - v1 - 1));
    *v2 = v1 + 1;
  }
  return result;
}
