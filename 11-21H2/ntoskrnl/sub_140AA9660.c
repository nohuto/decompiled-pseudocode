/*
 * XREFs of sub_140AA9660 @ 0x140AA9660
 * Callers:
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140AAA09C @ 0x140AAA09C (sub_140AAA09C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406543F8 @ 0x1406543F8 (sub_1406543F8.c)
 *     sub_1406545B0 @ 0x1406545B0 (sub_1406545B0.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 */

char __fastcall sub_140AA9660(void *a1, size_t Size)
{
  KIRQL v4; // bl
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  unsigned __int8 v17; // dl
  PKSPIN_LOCK v18; // rax
  PKSPIN_LOCK v19; // r10
  char *v20; // rcx
  KSPIN_LOCK v21; // rcx
  PKSPIN_LOCK v22; // rax
  KSPIN_LOCK i; // rcx
  char v24; // al
  KSPIN_LOCK v25; // rdx
  __int64 v26; // r8
  char *v27; // rcx
  char v28; // al
  PKSPIN_LOCK v29; // rbx
  size_t v30; // r8
  const void *v31; // rdx
  PKSPIN_LOCK v32; // rax
  PKSPIN_LOCK v33; // rcx
  unsigned __int8 v34; // [rsp+50h] [rbp+18h] BYREF

  v34 = 0;
  if ( (qword_140D01468[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(qword_140D01468);
  v5 = qword_140D01468;
  v6 = *((_DWORD *)qword_140D01468 + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
    {
      KeReleaseSpinLockFromDpcLevel(qword_140D01468);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)qword_140D01468 + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
    {
      KeReleaseSpinLockFromDpcLevel(v5);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && v4 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = *((_QWORD *)v14 + 4375);
            v16 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v11 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v11 )
              sub_140418E4C((__int64)v14);
          }
        }
      }
      __writecr8(v4);
    }
    if ( (qword_140D01468[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( sub_1406545B0(*((_DWORD *)qword_140D01468 + 14))
            && sub_1406543F8(*((_DWORD *)qword_140D01468 + 14), &v34) )
          {
            v17 = v34;
          }
          else
          {
            v17 = 0;
            v34 = 0;
          }
          v18 = qword_140D01468;
          if ( !v17 )
            goto LABEL_46;
          *(_BYTE *)(qword_140D01468[11] + qword_140D01468[4]) = v17;
          v19 = qword_140D01468;
          if ( !*((_BYTE *)qword_140D01468 + 117) || v34 != 10 )
            break;
          *((_BYTE *)qword_140D01468 + 117) = 0;
        }
        *((_BYTE *)qword_140D01468 + 117) = v34 == 13;
        if ( v34 == 10 || v34 == 13 )
          break;
        switch ( v34 )
        {
          case 8u:
          case 0x7Fu:
            if ( v19[11] )
            {
              sub_140AAA418(qword_140AA80E0);
              --qword_140D01468[11];
            }
            break;
          case 3u:
            *(_BYTE *)(++v19[11] + v19[4]) = 0;
            v21 = ++v19[11];
            goto LABEL_49;
          case 9u:
          case 0x1Bu:
            sub_140AAA418(qword_140AA80B0);
            v18 = qword_140D01468;
LABEL_46:
            *((_DWORD *)v18 + 12) &= ~0x10u;
            return 0;
          default:
            v20 = (char *)v19[3];
            if ( v19[11] == 78 )
            {
              sprintf_s(v20, 0x50uLL, "\b%c", v34);
              sub_140AAA418(qword_140D01468[3]);
            }
            else
            {
              sprintf_s(v20, 0x50uLL, "%c", v34);
              sub_140AAA418(qword_140D01468[3]);
              ++qword_140D01468[11];
            }
            break;
        }
      }
      sub_140AAA418(qword_140AA80D0);
      *(_BYTE *)(qword_140D01468[11] + qword_140D01468[4]) = 0;
      v22 = qword_140D01468;
      ++qword_140D01468[11];
      v21 = v22[11];
LABEL_49:
      for ( i = v21 - 1; i; --i )
      {
        v24 = *(_BYTE *)(qword_140D01468[4] + i);
        if ( v24 && v24 != 32 && v24 != 9 )
          break;
      }
      v25 = qword_140D01468[4];
      if ( *(_BYTE *)(v25 + i) )
        *(_BYTE *)(v25 + i + 1) = 0;
      v26 = 0LL;
      v27 = (char *)qword_140D01468[4];
      if ( *v27 )
      {
        do
        {
          v28 = v27[v26];
          if ( v28 != 9 && v28 != 32 )
            break;
          ++v26;
        }
        while ( v27[v26] );
        if ( v26 )
          strcpy_s(v27, 0x50uLL, &v27[v26]);
      }
    }
    v29 = qword_140D01468;
    v30 = qword_140D01468[11];
    v31 = (const void *)qword_140D01468[4];
    if ( Size < v30 )
    {
      memmove(a1, v31, Size);
      memmove((void *)v29[4], (const void *)(v29[4] + Size), v29[11] - Size);
      v33 = qword_140D01468;
      v32 = qword_140D01468 + 6;
      *((_DWORD *)qword_140D01468 + 12) |= 0x20u;
      v33[11] -= Size;
    }
    else
    {
      memmove(a1, v31, v30);
      v29[11] = 0LL;
      v32 = v29 + 6;
      *((_DWORD *)v29 + 12) &= ~0x20u;
    }
    *(_DWORD *)v32 &= ~0x10u;
    return 1;
  }
}
