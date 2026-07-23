/*
 * XREFs of sub_1402E1704 @ 0x1402E1704
 * Callers:
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_14025116C @ 0x14025116C (sub_14025116C.c)
 *     sub_140259D60 @ 0x140259D60 (sub_140259D60.c)
 *     sub_14026187C @ 0x14026187C (sub_14026187C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E18F8 @ 0x1402E18F8 (sub_1402E18F8.c)
 *     sub_1402E1AB0 @ 0x1402E1AB0 (sub_1402E1AB0.c)
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 *     sub_1402E1D48 @ 0x1402E1D48 (sub_1402E1D48.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

__int64 __fastcall sub_1402E1704(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r14d
  signed __int64 v10; // rdx
  __int64 v11; // r10
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v15; // rbp

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  v11 = ((__int64 (*)(void))sub_1402E18F8)();
  if ( v11 )
  {
LABEL_7:
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v11 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v6 )
        *(_QWORD *)(v11 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v10 = (v11 | 0xF) & -(__int64)(v11 != 0);
        v13 = _InterlockedCompareExchange64(a3, v10, i);
        if ( i == v13 )
          break;
      }
      v15 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        break;
      if ( v15 )
      {
        if ( a2 )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFF1);
        if ( v6 )
          sub_140259D60(a1, v11);
        else
          sub_1402E1AB0(a1, v11, 0LL);
        return 0LL;
      }
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( v15 )
    {
      sub_1402E1CBC(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), ~(i & 0xF));
      if ( !v6 && sub_14025116C((_DWORD *)a1) )
      {
        if ( (a5 & 0x600) != 0 || KeGetEffectiveIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
            KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 208) )
    {
      LOBYTE(v10) = (a5 & 0x600) != 0;
      sub_1402E1D48(a1, v10);
    }
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && KeGetEffectiveIrql() <= 2u
         && (*(_DWORD *)(a1 + 12) & 0x40000) == 0
         && (unsigned int)sub_14026187C(a1, 1u) == 1 )
    {
      v11 = sub_1402E18F8(a1);
      if ( v11 )
        goto LABEL_7;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
