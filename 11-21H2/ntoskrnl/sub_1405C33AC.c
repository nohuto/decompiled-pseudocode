/*
 * XREFs of sub_1405C33AC @ 0x1405C33AC
 * Callers:
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 * Callees:
 *     sub_14026EBC4 @ 0x14026EBC4 (sub_14026EBC4.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405C33AC(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  KIRQL v5; // al
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf

  v3 = 0LL;
  v5 = ExAcquireSpinLockShared(&dword_140C4F2F8);
  v6 = (_QWORD *)qword_140C4F2F0;
  v7 = v5;
  while ( v6 )
  {
    v8 = 0LL;
    v9 = v6[3] & 7LL;
    if ( v9 > 4 )
      goto LABEL_15;
    if ( (_DWORD)v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          v14 = *(v6 - 7) + 128LL;
          v13 = *(_QWORD *)(*(v6 - 7) + 136LL);
          do
          {
            v15 = *(unsigned int *)(v14 + 44);
            v14 = *(_QWORD *)(v14 + 16);
            v8 += v15;
          }
          while ( v14 );
          goto LABEL_16;
        }
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
LABEL_15:
            v13 = 0LL;
            goto LABEL_16;
          }
          v13 = v6[4];
          v8 = v6[5];
        }
        else
        {
          v13 = v6[6];
          v8 = v6[4];
        }
      }
      else
      {
        v13 = *(v6 - 6);
        v8 = *((unsigned int *)v6 - 3);
      }
    }
    else
    {
      v13 = *(v6 - 14);
      v8 = *((unsigned int *)v6 - 19);
    }
LABEL_16:
    if ( a1 >= v13 )
    {
      if ( a1 < v13 + 8 * v8 )
      {
        v3 = sub_14026EBC4(v6, a2);
        break;
      }
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      v6 = (_QWORD *)*v6;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F2F8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v3;
}
