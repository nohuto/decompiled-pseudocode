/*
 * XREFs of sub_1402682BC @ 0x1402682BC
 * Callers:
 *     sub_140267820 @ 0x140267820 (sub_140267820.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_1405B719C @ 0x1405B719C (sub_1405B719C.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 */

void __fastcall sub_1402682BC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    v4 = (unsigned int)a2 > 2 ? 1LL : qword_14001C780[(unsigned int)a2];
    sub_1402C6260(a1, a2, v4, 2LL);
    _InterlockedDecrement(&dword_140C530BC);
    v5 = (_QWORD *)(a1 + 8);
    v6 = 0LL;
    do
    {
      if ( *v5 != -1LL )
      {
        sub_140268408(48LL * *v5 - 0x220000000000LL);
        ++v6;
        *v5 = -1LL;
      }
      ++v5;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v6 )
    {
      sub_14028CE10(&StartContext, v6);
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v8 == -1 )
        goto LABEL_24;
      if ( v6 + v8 <= 0x100 )
      {
        do
        {
          if ( v6 >= 0x80000 )
            break;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v8 + v6, v8);
          v9 = (_DWORD)v8 == v10;
          LODWORD(v8) = v10;
          if ( v9 )
            return;
        }
        while ( v10 != -1 && v6 + v10 <= 0x100 );
      }
      if ( (int)v8 > 192
        && (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v8) )
      {
        v6 += (int)v8 - 192;
      }
      if ( v6 )
LABEL_24:
        _InterlockedExchangeAdd64(&qword_140C591C0, v6);
    }
  }
}
