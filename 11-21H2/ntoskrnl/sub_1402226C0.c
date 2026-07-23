/*
 * XREFs of sub_1402226C0 @ 0x1402226C0
 * Callers:
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402226C0(_QWORD *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // r8
  unsigned __int64 v6; // rsi
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r10d
  int v10; // r9d
  int v11; // r9d
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(a2);
  v5 = (_QWORD *)*a1;
  v6 = v4;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 - 10) - *((_DWORD *)v5 + 5);
      *((_DWORD *)v5 + 5) = *((_DWORD *)v5 - 10);
      v8 = *((_DWORD *)v5 - 11) - *((_DWORD *)v5 + 4);
      v9 = *((unsigned __int16 *)v5 - 23);
      *((_DWORD *)v5 + 4) = *((_DWORD *)v5 - 11);
      if ( (_WORD)v9 != 0xFFFF )
        break;
LABEL_8:
      v5 = (_QWORD *)*v5;
      if ( v5 == a1 )
        goto LABEL_9;
    }
    v10 = *((unsigned __int16 *)v5 - 24);
    if ( v8 >= 0x4B )
    {
      v13 = 1000 * v7 / v8;
      if ( v13 >= 5 )
      {
        v14 = v13 * (v9 - v10) / 0x7D0 + 5;
        if ( v14 > 0x1E )
          v14 = 30;
        v11 = v14 + v10;
        if ( v11 > v9 )
          LOWORD(v11) = v9;
        goto LABEL_7;
      }
      v11 = v10 - 1;
    }
    else
    {
      v11 = v10 - 10;
    }
    if ( v11 < 4 )
      LOWORD(v11) = 4;
LABEL_7:
    *((_WORD *)v5 - 24) = v11;
    goto LABEL_8;
  }
LABEL_9:
  KeReleaseSpinLockFromDpcLevel(a2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
