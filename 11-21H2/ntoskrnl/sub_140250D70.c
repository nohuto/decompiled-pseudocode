/*
 * XREFs of sub_140250D70 @ 0x140250D70
 * Callers:
 *     sub_14026FB78 @ 0x14026FB78 (sub_14026FB78.c)
 * Callees:
 *     sub_14026EBC4 @ 0x14026EBC4 (sub_14026EBC4.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140250D70(unsigned __int64 a1, _RTL_BITMAP *a2)
{
  unsigned __int64 v2; // r13
  unsigned int v4; // r12d
  KIRQL v5; // al
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 j; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  _QWORD *i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // edx
  bool v31; // zf
  __int64 NumberToSet; // [rsp+60h] [rbp+40h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+68h] [rbp+48h]
  __int64 v34; // [rsp+70h] [rbp+50h] BYREF

  BitMapHeader = a2;
  NumberToSet = 0LL;
  v2 = a1 + 4096;
  v4 = 1;
  v5 = ExAcquireSpinLockShared(&dword_140C4F2F8);
  v6 = (_QWORD *)qword_140C4F2F0;
  v7 = v5;
  if ( qword_140C4F2F0 )
  {
    do
    {
      v34 = 0LL;
      v8 = sub_14026EBC4(v6, &v34);
      if ( v9 >= v8 )
      {
        if ( a1 < v8 + 8 * v34 )
          break;
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        v6 = (_QWORD *)*v6;
      }
    }
    while ( v6 );
  }
  v10 = (unsigned __int64)v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v11 = sub_14026EBC4(v10, &NumberToSet);
      v12 = NumberToSet;
      v13 = v11;
      if ( v11 < a1 )
      {
        if ( v11 + 8 * NumberToSet <= a1 )
          goto LABEL_21;
        v13 = a1;
        v12 = NumberToSet - ((__int64)(a1 - v11) >> 3);
        NumberToSet = v12;
      }
      if ( v13 >= v2 )
        goto LABEL_21;
      if ( (*(_BYTE *)(v10 + 24) & 7) == 4 )
        break;
      v14 = (__int64)(v13 - a1) >> 3;
      if ( v12 + (unsigned __int64)(unsigned int)v14 > 0x200 )
      {
        LODWORD(v12) = 512 - v14;
        NumberToSet = (unsigned int)(512 - v14);
      }
      RtlSetBits(BitMapHeader, v14, v12);
      if ( (_DWORD)v14 )
      {
        v15 = *(_QWORD *)v10;
        v16 = v10;
        if ( *(_QWORD *)v10 )
        {
          while ( 1 )
          {
            v10 = v15;
            if ( !*(_QWORD *)(v15 + 8) )
              break;
            v15 = *(_QWORD *)(v15 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v10 || *(_QWORD *)(v10 + 8) == v16 )
              break;
            v16 = v10;
          }
        }
        if ( v10 )
          continue;
      }
      goto LABEL_21;
    }
    v4 = 0;
LABEL_21:
    v17 = v6[1];
    if ( v17 )
    {
      for ( i = *(_QWORD **)v17; i; i = (_QWORD *)*i )
        v17 = (unsigned __int64)i;
    }
    else
    {
      for ( j = v6[2]; ; j = *(_QWORD *)(v17 + 16) )
      {
        v17 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 || *(_QWORD **)v17 == v6 )
          break;
        v6 = (_QWORD *)v17;
      }
    }
    while ( v17 )
    {
      v20 = sub_14026EBC4(v17, &NumberToSet);
      if ( v20 >= v2 || v20 < a1 )
        break;
      if ( (*(_BYTE *)(v17 + 24) & 7) == 4 )
      {
        v4 = 0;
        break;
      }
      v21 = NumberToSet;
      v22 = (__int64)(v20 - a1) >> 3;
      v23 = (unsigned int)v22;
      if ( (unsigned __int64)(unsigned int)v22 + NumberToSet > 0x200 )
      {
        v21 = (unsigned int)(512 - v22);
        NumberToSet = v21;
      }
      RtlSetBits(BitMapHeader, v22, v21);
      if ( v23 + v21 == 512 )
        break;
      v19 = *(_QWORD **)(v17 + 8);
      v24 = v17;
      if ( v19 )
      {
        do
        {
          v17 = (unsigned __int64)v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
      }
      else
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v17 || *(_QWORD *)v17 == v24 )
            break;
          v24 = v17;
        }
      }
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
        v29 = *((_QWORD *)CurrentPrcb + 4375);
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
        *(_DWORD *)(v29 + 20) &= v30;
        if ( v31 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v4;
}
