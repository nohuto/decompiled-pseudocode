/*
 * XREFs of sub_1405C02A0 @ 0x1405C02A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_1405C0478 @ 0x1405C0478 (sub_1405C0478.c)
 */

__int64 __fastcall sub_1405C02A0(__int64 a1, __int64 CurrentPrcb, unsigned __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // r14
  __int64 v6; // rbx
  int v7; // ebp
  signed __int32 v8; // eax
  unsigned int v9; // esi
  __int64 result; // rax
  signed __int32 v11; // eax
  unsigned int v12; // ebx
  int i; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR *v14[6]; // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v14[0] = 0LL;
  v5 = (volatile signed __int32 *)a3;
  v6 = CurrentPrcb;
  if ( *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL) == *(_DWORD *)(CurrentPrcb + 192)
    && (CurrentPrcb = (__int64)KeGetCurrentPrcb(), *(unsigned __int8 *)(CurrentPrcb + 208) == *(_WORD *)(v6 + 208))
    && (a3 = *(_QWORD *)(CurrentPrcb + 34912), (a3 & *(_QWORD *)(v6 + 200)) != 0)
    && (a3 = ~a3,
        _m_prefetchw((const void *)(v6 + 200)),
        (CurrentPrcb & -(__int64)((_InterlockedAnd64((volatile signed __int64 *)(v6 + 200), a3) & *(_QWORD *)(CurrentPrcb + 34912)) != 0)) != 0) )
  {
    v7 = sub_1405C0478(v6, v14);
  }
  else
  {
    v7 = 0;
  }
  if ( (*(_DWORD *)(v6 + 184) & 2) != 0 )
  {
    v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v9 = ~v8 & 0x80000000;
    if ( (v8 & 0x7FFFFFFF) != 0 )
    {
      v15 = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
        sub_1402F32E0(&v15, CurrentPrcb, a3, a4);
    }
    else
    {
      *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
    }
  }
  if ( v7 )
    sub_1405C00C0(v6, v14);
  result = *(unsigned int *)(v6 + 184);
  if ( (result & 2) != 0 )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v12 = ~v11 & 0x80000000;
    if ( (v11 & 0x7FFFFFFF) != 0 )
    {
      for ( i = 0; ; sub_1402F32E0(&i, CurrentPrcb, a3, a4) )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v12 )
          break;
      }
    }
    else
    {
      result = v12 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = result;
    }
  }
  _InterlockedDecrement(v5);
  return result;
}
