/*
 * XREFs of sub_14024DA80 @ 0x14024DA80
 * Callers:
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 * Callees:
 *     sub_140286630 @ 0x140286630 (sub_140286630.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 */

_QWORD *__fastcall sub_14024DA80(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // r9
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rax

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 1800);
  v4 = -1;
  v6 = 0;
  while ( 1 )
  {
    if ( *v3 )
    {
      v2 += *v3;
      v4 = v6;
      if ( v2 >= a2 )
        break;
    }
    ++v6;
    v3 += 4;
    if ( v6 >= 4 )
    {
      if ( v2 < a2 )
        return 0LL;
      break;
    }
  }
  sub_1402F391C(0LL, 2LL);
  v8 = (_QWORD *)(32LL * v4 + a1 + 1784);
  v9 = (_QWORD *)*v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
    __fastfail(3u);
  *v8 = v10;
  *(_QWORD *)(v10 + 8) = v8;
  v9[4] = v9[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  --v8[2];
  sub_140286630(a1, 0LL, 1LL);
  return v9;
}
