/*
 * XREFs of sub_140458FD4 @ 0x140458FD4
 * Callers:
 *     sub_140458184 @ 0x140458184 (sub_140458184.c)
 * Callees:
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 */

_QWORD *__fastcall sub_140458FD4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, char a6, __int64 *a7)
{
  unsigned int v11; // eax
  unsigned int v12; // r10d
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r11
  _QWORD *v18; // r9
  __int64 v19; // rcx
  _QWORD *result; // rax
  __int64 v21; // rdx
  bool v22; // zf
  int v23; // [rsp+20h] [rbp-38h]
  int v24; // [rsp+28h] [rbp-30h]

  v11 = sub_14045699C(a1, a2, a3, a4, a6, *a5);
  v12 = v11;
  *a5 = v11;
  v13 = a4 & 0xFFF;
  v14 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v15 = v13 + (*(_QWORD *)(a2 + 8 * v14 + 48) << 12);
  if ( a3
    && ((v16 = v11, *(_QWORD *)(a1 + 136) < (unsigned __int64)v11 + v15 - 1)
     || !a6
     && !*(_BYTE *)(a1 + 437)
     && ((v14 = (unsigned int)sub_14045693C(a1) - 1, (v14 & v15) != 0) || (v17 & v14) != 0)) )
  {
    v18 = *(_QWORD **)(a3 + 56);
    *a7 = v13 + *v18;
    if ( a6 )
    {
      sub_140457A42(a1, a2, a4, v18, v12, a6, 0, 0);
    }
    else if ( !*(_BYTE *)(a1 + 437) )
    {
      sub_140457A42(a1, a2, a4, v18, v12, 0, 1, 0);
    }
    v19 = *(_QWORD *)(a3 + 56);
    result = (_QWORD *)((unsigned __int64)(v16 + v13 + 4095) >> 12);
    if ( (_DWORD)result )
    {
      v21 = (unsigned int)result;
      do
      {
        v19 = *(_QWORD *)(v19 + 8);
        --v21;
      }
      while ( v21 );
    }
    *(_QWORD *)(a3 + 56) = v19;
  }
  else
  {
    v22 = *(_BYTE *)(a1 + 437) == 0;
    result = a7;
    *a7 = v15;
    if ( v22 )
    {
      LOBYTE(v24) = 0;
      LOBYTE(v23) = a6;
      return (_QWORD *)sub_140513310(v14, a2, a4, v12, v23, v24);
    }
  }
  return result;
}
