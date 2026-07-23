/*
 * XREFs of sub_1402D0CE0 @ 0x1402D0CE0
 * Callers:
 *     sub_140299150 @ 0x140299150 (sub_140299150.c)
 *     sub_140299FBC @ 0x140299FBC (sub_140299FBC.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D0CE0(__int64 a1)
{
  __int64 result; // rax
  char v3; // si
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v5; // eax
  __int64 v6; // r9
  unsigned __int32 v7; // ett
  signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 840), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    sub_1402F3290(a1);
    v5 = *(_DWORD *)(a1 + 840);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v5 < 8 )
      {
        v7 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 840), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v7 == v5 )
        {
          v3 = 1;
          break;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v3 )
    {
      v8 = (signed __int64 *)(a1 + 360);
      _m_prefetchw(&qword_140C2BB68);
      v9 = qword_140C2BB68;
      do
      {
        *v8 = v9;
        v10 = v9;
        v9 = _InterlockedCompareExchange64(&qword_140C2BB68, (signed __int64)v8, v9);
      }
      while ( v9 != v10 );
      if ( !v9 )
        KeSetEvent(&Event, 10, 0);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
