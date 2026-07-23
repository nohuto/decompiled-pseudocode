/*
 * XREFs of sub_14022CBE0 @ 0x14022CBE0
 * Callers:
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 * Callees:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_140281F60 @ 0x140281F60 (sub_140281F60.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1405C4C6C @ 0x1405C4C6C (sub_1405C4C6C.c)
 */

__int64 __fastcall sub_14022CBE0(__int64 *a1, __int64 a2, char a3)
{
  ULONG_PTR v4; // rdi
  bool v6; // r12
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned __int64 v11; // rsi
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rax
  __int64 j; // rdi
  ULONG_PTR i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r11
  __int64 v30; // r9
  int v31; // eax
  __int64 v34; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v34 = *a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v9 = v34;
  v10 = 2;
  v11 = v8;
  if ( *(_QWORD *)(v34 + 48) )
  {
    if ( (a1[6] & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = *((_QWORD *)CurrentPrcb + 4375);
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v12 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v21;
              if ( v12 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        goto LABEL_16;
      }
    }
    else
    {
      v6 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v4; i; i = *(_QWORD *)(i + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( (*(_BYTE *)(v34 + 62) & 0xC) != 0 )
          *(_DWORD *)(i + 52) |= 0x40000000u;
      }
      v12 = !v6;
      goto LABEL_4;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v12 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v12 )
            sub_140418E4C(v23);
        }
      }
    }
    v10 = 1;
LABEL_16:
    __writecr8(v11);
    return v10;
  }
  if ( *(_QWORD *)(v4 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v4 + 48) & 0x3FFFFFFF) != 0 )
        sub_1405C4C6C(v4, 0x3FFFFFFFLL);
      *(_QWORD *)(v4 + 96) = 0LL;
      v26 = sub_140220AAC(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v26;
    }
    while ( v4 );
    goto LABEL_41;
  }
  v12 = (a3 & 2) == 0;
LABEL_4:
  if ( !v12 )
  {
    do
    {
      v27 = sub_1402869C0(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v27;
    }
    while ( v4 );
LABEL_41:
    v9 = v34;
  }
  *((_WORD *)a1 + 17) &= 0xFu;
  v13 = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 13) &= 0xC0000000;
  *((_DWORD *)a1 + 10) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  a1[2] = v14;
  for ( j = v14; j; v9 = v34 )
  {
    sub_140281F60(v9, j, 1LL);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = *((_QWORD *)v29 + 4375);
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v12 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v12 )
          sub_140418E4C(v29);
      }
    }
  }
  __writecr8(v11);
  if ( v7 )
    sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v34 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
