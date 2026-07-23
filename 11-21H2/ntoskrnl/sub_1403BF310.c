/*
 * XREFs of sub_1403BF310 @ 0x1403BF310
 * Callers:
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_140213C5C @ 0x140213C5C (sub_140213C5C.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_140522980 @ 0x140522980 (sub_140522980.c)
 *     sub_140522BA0 @ 0x140522BA0 (sub_140522BA0.c)
 *     sub_14052448C @ 0x14052448C (sub_14052448C.c)
 *     sub_14052CB50 @ 0x14052CB50 (sub_14052CB50.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 *     sub_140A62018 @ 0x140A62018 (sub_140A62018.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 * Callees:
 *     sub_1403BF630 @ 0x1403BF630 (sub_1403BF630.c)
 */

char *__fastcall sub_1403BF310(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)(unsigned int)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = (unsigned int)a2;
  if ( a1 >= qword_140C54AA0 && v5 >= a1 && v5 <= qword_140C54AB8 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( (_DWORD)a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( (_BYTE)a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !(_BYTE)a3 )
      result = (char *)sub_1403BF630(v8, a2, a3, v6);
    if ( qword_140C54AB0 > v7 )
      qword_140C54AB0 = v7;
  }
  return result;
}
