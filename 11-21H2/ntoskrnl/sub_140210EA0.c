/*
 * XREFs of sub_140210EA0 @ 0x140210EA0
 * Callers:
 *     sub_1403C6D20 @ 0x1403C6D20 (sub_1403C6D20.c)
 * Callees:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140210EA0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v4; // rdi
  _QWORD *v5; // r8
  bool v6; // bp
  unsigned __int8 v7; // cl
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r9
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  signed __int64 *v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  struct _KPRCB *v22; // r10
  __int64 v23; // r9

  do
  {
    v2 = a1 - 45;
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    sub_1402F3290(v2);
    v4 = v2 + 43;
    v5 = (_QWORD *)v2[43];
    if ( v5 == v2 + 43 || (v2[105] & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)v2 + 210, v2[105] & 7 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = *((_QWORD *)CurrentPrcb + 4375);
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      sub_140211108(v2);
      v6 = 0;
      v7 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v7 <= 0xFu )
      {
        v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v11 + 20) |= (-1 << (v7 + 1)) & 4;
      }
      sub_1402F3290(v2);
      if ( (_QWORD *)*v4 == v4 )
      {
        v8 = 4;
      }
      else
      {
        v14 = v2 + 45;
        _m_prefetchw(&qword_140C2BBB8);
        v15 = qword_140C2BBB8;
        do
        {
          *v14 = v15;
          v16 = v15;
          v15 = _InterlockedCompareExchange64(&qword_140C2BBB8, (signed __int64)v14, v15);
        }
        while ( v15 != v16 );
        v17 = v15 == 0;
        v8 = 7;
        v6 = v17;
      }
      _InterlockedXor((volatile signed __int32 *)v2 + 210, v8);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v6 )
      {
        sub_1402F3290(&Event);
        Event.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&Event, 0xFFFFFF7F);
      }
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && CurrentIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = *((_QWORD *)v22 + 4375);
            result = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = ((unsigned int)result & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= result;
            if ( v17 )
              result = sub_140418E4C(v22);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v12 = (_QWORD *)*v4;
      v13 = (_QWORD *)v2[44];
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v13 != v4 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      v2[44] = v2 + 43;
      *v4 = v4;
      _InterlockedXor((volatile signed __int32 *)v2 + 210, 3u);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      LOBYTE(v12) = CurrentIrql;
      result = sub_1402112F8(v5, v12);
    }
  }
  while ( a1 );
  return result;
}
