/*
 * XREFs of sub_140A93C34 @ 0x140A93C34
 * Callers:
 *     sub_140A934D8 @ 0x140A934D8 (sub_140A934D8.c)
 *     sub_140A94324 @ 0x140A94324 (sub_140A94324.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A93E2C @ 0x140A93E2C (sub_140A93E2C.c)
 */

_QWORD *__fastcall sub_140A93C34(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi

  v2 = a2;
  v4 = sub_140A93E2C(a1, a2);
  if ( !v4 )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)(dword_140C1AFA4 + 1), 0x74566D4Du);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memset(Pool2, 0, 8LL * (unsigned int)(dword_140C1AFA4 + 1));
  v7 = 0LL;
  do
  {
    v6[v7] = v4;
    v7 = (unsigned int)(v7 + 1);
    v4 = sub_140A93E2C(a1, v2);
  }
  while ( v4 );
  return v6;
}
