/*
 * XREFs of sub_1402EB59C @ 0x1402EB59C
 * Callers:
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 * Callees:
 *     sub_1402EB71C @ 0x1402EB71C (sub_1402EB71C.c)
 *     sub_1402EB8BC @ 0x1402EB8BC (sub_1402EB8BC.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B130C @ 0x1405B130C (sub_1405B130C.c)
 */

__int64 __fastcall sub_1402EB59C(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  __int64 v20; // r8

  if ( !(*(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 32)) )
    return -1LL;
  v2 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  if ( !v3 )
    goto LABEL_11;
  v5 = sub_1402EB71C(v3, a1);
  if ( v5 == -1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v8 & 1) != 0 )
    {
      if ( v8 != 1 )
      {
        v9 = (_QWORD *)(v8 ^ (a1 | 1));
        goto LABEL_15;
      }
    }
    else
    {
      v9 = *(_QWORD **)(a1 + 8);
LABEL_15:
      while ( v9 )
      {
        v5 = sub_1402EB71C(v9, a1);
        if ( v5 != -1 )
        {
          *(_QWORD *)(a1 + 24) = v9;
          goto LABEL_4;
        }
        v10 = (_QWORD *)v9[1];
        v11 = v9;
        if ( v10 )
        {
          do
          {
            v9 = v10;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 );
        }
        else
        {
          while ( 1 )
          {
            v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v9 || (_QWORD *)*v9 == v11 )
              break;
            v11 = v9;
          }
        }
      }
    }
    v5 = -1LL;
  }
LABEL_4:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( v5 == -1 )
    return sub_1405B130C(a1);
  v6 = (unsigned __int8)sub_1402F2700(48 * v5 - 0x220000000000LL);
  sub_1402EB8BC(a1, v5, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v5 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v20 = *((_QWORD *)v18 + 4375);
        v16 = (v19 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v19;
        if ( v16 )
          sub_140418E4C(v18);
      }
    }
  }
  __writecr8(v6);
  return v5;
}
