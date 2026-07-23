/*
 * XREFs of sub_1402206C0 @ 0x1402206C0
 * Callers:
 *     sub_140226D50 @ 0x140226D50 (sub_140226D50.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 * Callees:
 *     sub_140220944 @ 0x140220944 (sub_140220944.c)
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_14026EF44 @ 0x14026EF44 (sub_14026EF44.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

char __fastcall sub_1402206C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ecx
  bool v18; // zf
  struct _KPRCB *v19; // rcx
  __int64 v20; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v27; // [rsp+70h] [rbp+18h]
  int v28; // [rsp+78h] [rbp+20h] BYREF

  v6 = a2;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
  {
    v9 = 0LL;
    v27 = 0;
    if ( !*(_QWORD *)(a1 + 64) )
      goto LABEL_6;
  }
  else
  {
    v9 = a2;
  }
  v27 = 1;
LABEL_6:
  if ( (a4 & 2) != 0 )
  {
    v10 = 17;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      LOBYTE(v11) = sub_140461A66(a1 + 72, a2);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = 0;
      v13 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v14 = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v14 + 1;
          if ( v14 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      {
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v15 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v16 = *(_DWORD *)(v15 + 24) - 1;
            *(_DWORD *)(v15 + 24) = v16;
            if ( !v16 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        LOBYTE(a2) = -1;
        v28 = sub_140220C30(a1 + 72, a2);
      }
      v17 = *(_DWORD *)(a1 + 72);
      for ( LOBYTE(v11) = v17; (v17 & 0xBFFFFFFF) != 0x80000000; LOBYTE(v11) = v17 )
      {
        if ( (v17 & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 72), 0x40000000u);
        sub_1402F32E0(&v28);
        v17 = *(_DWORD *)(a1 + 72);
      }
      v8 = 0LL;
    }
  }
  else
  {
    LOBYTE(v11) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v10 = v11;
  }
  if ( v9 )
  {
    v18 = (*(_DWORD *)(v9 + 104))-- == 1;
    if ( v18 && !*(_QWORD *)(v9 + 96) && (*(_BYTE *)(v6 + 34) & 1) == 0 && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      sub_14026EF44(v9);
      v11 = sub_140220AAC(v9);
      v7 = v11;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    LOBYTE(v11) = sub_140220944(a1);
  if ( v7 )
  {
    LOBYTE(v11) = qword_140C51F48;
    v8 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  }
  if ( v10 == 17 )
  {
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      LOBYTE(v11) = sub_14063D8B0(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    v19 = KeGetCurrentPrcb();
    v20 = *((_QWORD *)v19 + 4375);
    if ( v20 )
    {
      if ( *((_BYTE *)v19 + 32) <= 1u )
      {
        LODWORD(v11) = *(_DWORD *)(v20 + 24) - 1;
        *(_DWORD *)(v20 + 24) = v11;
        if ( !(_DWORD)v11 )
          LOBYTE(v11) = sub_140418E4C(v19);
      }
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          v24 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v18 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v18 )
            sub_140418E4C(v22);
        }
      }
    }
    LOBYTE(v11) = v10;
    __writecr8(v10);
  }
  if ( v7 )
    LOBYTE(v11) = sub_1405C4B8C(v8, v27, v7);
  return v11;
}
