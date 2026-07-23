/*
 * XREFs of sub_140287660 @ 0x140287660
 * Callers:
 *     sub_140250924 @ 0x140250924 (sub_140250924.c)
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 *     sub_140287574 @ 0x140287574 (sub_140287574.c)
 *     sub_1402875B0 @ 0x1402875B0 (sub_1402875B0.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140592278 @ 0x140592278 (sub_140592278.c)
 * Callees:
 *     sub_140220A44 @ 0x140220A44 (sub_140220A44.c)
 *     sub_140242580 @ 0x140242580 (sub_140242580.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_1402878F0 @ 0x1402878F0 (sub_1402878F0.c)
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403885EC @ 0x1403885EC (sub_1403885EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 */

__int64 __fastcall sub_140287660(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r14
  __int16 v7; // cx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  BOOL v10; // r12d
  __int64 v11; // r13
  int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rdx
  __int64 v16; // rax
  KIRQL v17; // al
  bool v18; // zf
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v7 = *(_WORD *)(a1 + 60);
  v8 = 0LL;
  v9 = 0;
  v33 = 0LL;
  v10 = v5 != 0;
  v32 = -1LL;
  v11 = *(_QWORD *)(qword_140C51F48 + 8LL * (v7 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_16:
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14063D8B0(a1 + 72, retaddr);
      else
        *(_DWORD *)(a1 + 72) = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v28 = *(_DWORD *)(v14 + 24) - 1;
          *(_DWORD *)(v14 + 24) = v28;
          if ( !v28 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            CurrentPrcb = (struct _KPRCB *)((unsigned int)(unsigned __int8)v4 + 1);
            a3 = *((_QWORD *)v30 + 4375);
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v18 = (v31 & *(_DWORD *)(a3 + 20)) == 0;
            v14 = (unsigned int)v31 & *(_DWORD *)(a3 + 20);
            *(_DWORD *)(a3 + 20) = v14;
            if ( v18 )
              sub_140418E4C(v30);
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      if ( v6 )
      {
        do
        {
          v19 = *(_QWORD *)v6;
          sub_14024B0B4((_DWORD *)(v6 + 16), 1);
          v6 = v19;
        }
        while ( v19 );
      }
      sub_1402878F0(CurrentPrcb, v14, a3);
      goto LABEL_22;
    }
    v9 = 4;
    goto LABEL_4;
  }
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( (v12 & 0x40000) != 0 )
      {
        v9 = 1;
      }
      else
      {
        if ( (v12 & 0x20020) != 0x20020 )
        {
          v16 = sub_140287FB8(a1);
          v12 = *(_DWORD *)(a1 + 56);
          v8 = v16;
        }
        if ( (v12 & 0x20) != 0 )
        {
          sub_140242580(a1, 1, (__int64)&v32);
          v12 = *(_DWORD *)(a1 + 56);
        }
      }
      if ( (v12 & 0x20020) == 0x20020 )
      {
        *(_QWORD *)(a1 + 40) = 1LL;
        *(_DWORD *)(a1 + 56) = v12 | 4;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v20 >= 2u )
            {
              v21 = KeGetCurrentPrcb();
              v22 = *((_QWORD *)v21 + 4375);
              v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              v18 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
              *(_DWORD *)(v22 + 20) &= v23;
              if ( v18 )
                sub_140418E4C(v21);
            }
          }
        }
        __writecr8(v4);
        sub_14025AD28(a1);
        v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        *(_DWORD *)(a1 + 56) &= ~4u;
        LOBYTE(v4) = v17;
        v18 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v18 || *(_QWORD *)(a1 + 24) )
        {
          v9 = 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( !v9 )
          {
            v8 = sub_140287FB8(a1);
            v9 = 4;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v9 = 2;
          sub_140220A44(a1);
        }
      }
    }
    else
    {
      v9 = 2;
      *(_DWORD *)(a1 + 56) = v12 | 1;
      sub_140220A44(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v9 = 2;
  }
  if ( v9 >= 4 )
  {
LABEL_4:
    v6 = sub_140287B04(a1, 3LL);
    v9 &= ~4u;
  }
  if ( !v9 )
    goto LABEL_16;
  if ( (v9 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    sub_1403885EC(a1, (unsigned __int8)v4, 0LL);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v18 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v18 )
            sub_140418E4C(v25);
        }
      }
    }
    __writecr8((unsigned __int8)v4);
    sub_1406F4904(a1);
  }
LABEL_22:
  if ( v8 )
    sub_1405C4B8C(v11, v10, v8);
  return sub_1406FC148(&v32);
}
