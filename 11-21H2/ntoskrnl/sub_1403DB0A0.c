/*
 * XREFs of sub_1403DB0A0 @ 0x1403DB0A0
 * Callers:
 *     sub_1405263E0 @ 0x1405263E0 (sub_1405263E0.c)
 *     sub_140B2B9A0 @ 0x140B2B9A0 (sub_140B2B9A0.c)
 *     sub_140B4D270 @ 0x140B4D270 (sub_140B4D270.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PVOID *__fastcall sub_1403DB0A0(unsigned int a1)
{
  PVOID *v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  PVOID *i; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned __int8 v8; // di
  PVOID *v9; // rax
  _QWORD *v10; // rax
  __int64 v12; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  int v28; // eax

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C4A138);
  for ( i = (PVOID *)qword_140C4A140; i != &qword_140C4A140; i = (PVOID *)*i )
  {
    v2 = i;
    if ( *((_DWORD *)i + 4) == a1 )
      break;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A138);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = (unsigned int)CurrentIrql + 1;
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v2 && *((_DWORD *)v2 + 4) == a1 )
    return v2;
  v6 = (_QWORD *)sub_1403B1F04(v5, 64LL);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x40uLL);
    v7[3] = 0LL;
    v7[5] = v7 + 4;
    v7[4] = v7 + 4;
    v7[7] = v7 + 6;
    v7[6] = v7 + 6;
    *((_DWORD *)v7 + 4) = a1;
    v8 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v8 <= 0xFu )
    {
      v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v18 + 20) |= (-1 << (v8 + 1)) & 0xFFFC;
    }
    KeAcquireSpinLockAtDpcLevel(&qword_140C4A138);
    v9 = (PVOID *)qword_140C4A140;
    if ( qword_140C4A140 == &qword_140C4A140 )
    {
LABEL_9:
      if ( byte_140C4BCBC && (!byte_140C4A119 || (int)sub_14042A5E0(a1, (unsigned int)dword_140C4A120) < 0) )
      {
        KeReleaseSpinLockFromDpcLevel(&qword_140C4A138);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && v8 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v20 = (unsigned int)v8 + 1;
              v23 = *((_QWORD *)v22 + 4375);
              v24 = ~(unsigned __int16)(-1LL << (v8 + 1));
              v17 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
              *(_DWORD *)(v23 + 20) &= v24;
              if ( v17 )
                sub_140418E4C(v22);
            }
          }
        }
        __writecr8(v8);
        sub_1403B1B5C(v20, (__int64)v7);
        return 0LL;
      }
      v10 = qword_140C4A140;
      if ( *((PVOID **)qword_140C4A140 + 1) != &qword_140C4A140 )
        __fastfail(3u);
      *v7 = qword_140C4A140;
      v2 = (PVOID *)v7;
      v7[1] = &qword_140C4A140;
      v10[1] = v7;
      qword_140C4A140 = v7;
      v7 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v19 = *((_DWORD *)v9 + 4);
        v2 = v9;
        if ( v19 == a1 )
          break;
        v9 = (PVOID *)*v9;
        if ( v9 == &qword_140C4A140 )
        {
          if ( v19 == a1 )
            break;
          goto LABEL_9;
        }
      }
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C4A138);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v8 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v17 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v17 )
            sub_140418E4C(v26);
        }
      }
    }
    __writecr8(v8);
    if ( v7 )
      sub_1403B1B5C(v8, (__int64)v7);
    return v2;
  }
  return 0LL;
}
