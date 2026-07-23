/*
 * XREFs of sub_14026A5DC @ 0x14026A5DC
 * Callers:
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_1405B719C @ 0x1405B719C (sub_1405B719C.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026A6C4 @ 0x14026A6C4 (sub_14026A6C4.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

__int64 __fastcall sub_14026A5DC(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed __int32 v3; // r10d
  bool v6; // zf
  signed __int32 v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v12; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax

  v3 = dword_140C530BC;
  if ( dword_140C530BC != dword_140C530B8 )
  {
    while ( 1 )
    {
      v7 = _InterlockedCompareExchange(&dword_140C530BC, v3 + 1, v3);
      v6 = v3 == v7;
      v3 = v7;
      if ( v6 )
        break;
      if ( v7 == dword_140C530B8 )
        return 0LL;
    }
    *(_QWORD *)a1 = 0LL;
    v8 = a2;
    *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&xmmword_14001C760);
    if ( !a2 )
      goto LABEL_10;
    if ( a2 > 2uLL )
      v8 = 2LL;
    if ( (int)sub_14026A784(&StartContext, (unsigned int)v8, 0LL, 0LL) >= 0 )
    {
      v9 = 0LL;
      if ( v8 )
      {
        while ( 1 )
        {
          v10 = sub_14026A6C4(a3);
          if ( v10 == -1 )
            break;
          *(_QWORD *)(a1 + 8 * v9 + 8) = v10;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_10;
        }
        _InterlockedDecrement(&dword_140C530BC);
        if ( (_DWORD)v9 )
        {
          v12 = (_QWORD *)(a1 + 8 * v9 + 8);
          do
          {
            sub_140268408(48LL * *--v12 - 0x220000000000LL);
            *v12 = -1LL;
            LODWORD(v9) = v9 - 1;
          }
          while ( (_DWORD)v9 );
        }
        sub_14028CE10(&StartContext, v8);
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((int *)CurrentPrcb + 8615);
        if ( (_DWORD)v14 == -1 )
          goto LABEL_27;
        if ( v8 + v14 <= 0x100 )
        {
          do
          {
            if ( v8 >= 0x80000 )
              break;
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v14 + v8, v14);
            v6 = (_DWORD)v14 == v15;
            LODWORD(v14) = v15;
            if ( v6 )
              return 0LL;
          }
          while ( v15 != -1 && v8 + v15 <= 0x100 );
        }
        if ( (int)v14 > 192
          && (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v14) )
        {
          v8 += (int)v14 - 192;
        }
        if ( v8 )
LABEL_27:
          _InterlockedExchangeAdd64(&qword_140C591C0, v8);
        return 0LL;
      }
LABEL_10:
      *(_BYTE *)(a1 + 24) = 1;
      return 1LL;
    }
    _InterlockedDecrement(&dword_140C530BC);
  }
  return 0LL;
}
