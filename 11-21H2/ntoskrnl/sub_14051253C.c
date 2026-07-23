/*
 * XREFs of sub_14051253C @ 0x14051253C
 * Callers:
 *     sub_140514920 @ 0x140514920 (sub_140514920.c)
 *     sub_140515B80 @ 0x140515B80 (sub_140515B80.c)
 *     sub_140516290 @ 0x140516290 (sub_140516290.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_14051253C(_RTL_BALANCED_NODE *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  KIRQL v5; // al
  _RTL_RB_TREE *v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // al
  __int64 v16; // rbx
  KIRQL v17; // di
  KIRQL v18; // al
  _RTL_RB_TREE *v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // edx
  KIRQL v32; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  if ( !a2 )
    goto LABEL_25;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 80));
  v6 = (_RTL_RB_TREE *)(a2 + 64);
  v7 = v5;
  v8 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v6;
  while ( v8 )
  {
    if ( *(_RTL_BALANCED_NODE **)(v8 + 24) == a1 )
    {
      v2 = v8;
      RtlRbRemoveNode(v6, (PRTL_BALANCED_NODE)v8);
      break;
    }
    if ( *(_QWORD *)(v8 + 24) <= (unsigned __int64)a1 )
      v9 = *(_QWORD *)(v8 + 8);
    else
      v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v9 )
      v8 ^= v9;
    else
      v8 = v9;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a2 + 80));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  if ( !v2 )
  {
LABEL_25:
    v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BD30);
    v16 = qword_140C4BD40;
    v17 = v15;
    v32 = v15;
    if ( (__int64 *)qword_140C4BD40 != &qword_140C4BD40 )
    {
      do
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 80));
        v19 = (_RTL_RB_TREE *)(v16 + 64);
        v20 = v18;
        v21 = *(_QWORD *)(v16 + 64);
        if ( (*(_BYTE *)(v16 + 72) & 1) != 0 && v21 )
          v21 ^= (unsigned __int64)v19;
        while ( v21 )
        {
          if ( *(_RTL_BALANCED_NODE **)(v21 + 24) == a1 )
          {
            v2 = v21;
            RtlRbRemoveNode(v19, (PRTL_BALANCED_NODE)v21);
            break;
          }
          if ( *(_QWORD *)(v21 + 24) <= (unsigned __int64)a1 )
            v22 = *(_QWORD *)(v21 + 8);
          else
            v22 = *(_QWORD *)v21;
          if ( (*(_BYTE *)(v16 + 72) & 1) != 0 && v22 )
            v21 ^= v22;
          else
            v21 = v22;
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v16 + 80));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v23 = KeGetCurrentIrql();
            if ( v23 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v23 >= 2u )
            {
              v24 = KeGetCurrentPrcb();
              v25 = *((_QWORD *)v24 + 4375);
              v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
              v14 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
              *(_DWORD *)(v25 + 20) &= v26;
              if ( v14 )
                sub_140418E4C((__int64)v24);
            }
          }
        }
        __writecr8(v20);
        if ( v2 )
          break;
        v16 = *(_QWORD *)v16;
      }
      while ( (__int64 *)v16 != &qword_140C4BD40 );
      v17 = v32;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C4BD30);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && v17 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = *((_QWORD *)v28 + 4375);
          v30 = ~(unsigned __int16)(-1LL << (v17 + 1));
          v14 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v14 )
            sub_140418E4C((__int64)v28);
        }
      }
    }
    __writecr8(v17);
  }
  return v2;
}
