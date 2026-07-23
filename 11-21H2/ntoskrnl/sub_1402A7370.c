/*
 * XREFs of sub_1402A7370 @ 0x1402A7370
 * Callers:
 *     sub_140559124 @ 0x140559124 (sub_140559124.c)
 *     sub_1406A4A70 @ 0x1406A4A70 (sub_1406A4A70.c)
 *     sub_1406C9A28 @ 0x1406C9A28 (sub_1406C9A28.c)
 *     sub_1406CF67C @ 0x1406CF67C (sub_1406CF67C.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022A6A0 @ 0x14022A6A0 (sub_14022A6A0.c)
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_14024DEFC @ 0x14024DEFC (sub_14024DEFC.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

__int64 __fastcall sub_1402A7370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax
  struct _LIST_ENTRY *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r11
  struct _LIST_ENTRY *Flink; // r12
  unsigned int v12; // r15d
  volatile signed __int32 *v13; // rbx
  KIRQL CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v16; // rcx
  struct _LIST_ENTRY *v17; // r14
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  char v21; // al
  PIRP v22; // r13
  __int64 v23; // rcx
  int v24; // r13d
  KIRQL v25; // al
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  __int64 v35; // r9
  int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // rax
  __int64 v40; // r9
  int v41; // edx
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v46; // [rsp+A0h] [rbp+8h]

  result = 0LL;
  v46 = 1;
  v7 = (struct _LIST_ENTRY *)(a1 + 192);
  Irp = 0LL;
  v8 = a4;
  v44 = 0LL;
  v9 = a3;
  Flink = 0LL;
  v12 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
    return result;
  v13 = (volatile signed __int32 *)(a1 + 184);
  Interval.QuadPart = -10000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(v13);
LABEL_35:
    v9 = a3;
    v8 = a4;
    goto LABEL_6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v16 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v26 = *(_DWORD *)(v16 + 24);
      *(_DWORD *)(v16 + 24) = v26 + 1;
      if ( v26 == -1 )
      {
        sub_140418E4C(CurrentPrcb);
        v8 = a4;
        v9 = a3;
      }
    }
  }
  if ( _interlockedbittestandset64(v13, 0LL) )
  {
    v23 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v23 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v27 = *(_DWORD *)(v23 + 24) - 1;
        *(_DWORD *)(v23 + 24) = v27;
        if ( !v27 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    sub_140211E70(v13);
    goto LABEL_35;
  }
LABEL_6:
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  while ( 1 )
  {
    v17 = Flink;
    if ( v7->Flink == v7 )
      break;
    v21 = sub_14024DEFC(v7, a2, v9, v8, Flink, &Irp);
    v22 = Irp;
    Flink = 0LL;
    if ( Irp )
    {
      if ( !Irp->Cancel )
      {
        v12 = 1;
        Irp->Cancel = 1;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = *((_QWORD *)v29 + 4375);
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
              *(_DWORD *)(v30 + 20) &= v31;
              if ( v32 )
                sub_140418E4C(v29);
              v22 = Irp;
            }
          }
        }
        __writecr8(CurrentIrql);
        IoCancelIrp(v22);
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
      }
      if ( (v22->Flags & 0x2000) != 0 )
        Flink = v22->ThreadListEntry.Flink;
      if ( !(unsigned int)sub_14022A6A0((volatile signed __int64 *)&v22->Overlay, -1) )
        IoFreeIrp(v22);
      v8 = a4;
      v9 = a3;
      if ( Flink == v7 )
      {
        if ( !a5 )
          break;
        Flink = 0LL;
      }
    }
    else
    {
      if ( !a5 )
        break;
      if ( v21 )
      {
        if ( !v17 )
          break;
        v8 = a4;
        v9 = a3;
      }
      else
      {
        v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = *((_QWORD *)v34 + 4375);
              v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
              *(_DWORD *)(v35 + 20) &= v36;
              if ( v32 )
                sub_140418E4C(v34);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeDelayExecutionThread(0, 0, &Interval);
        v24 = v46;
        if ( v46 < 100 )
        {
          v46 *= 2;
          Interval.QuadPart = -20000 * v24;
        }
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
        v8 = a4;
        CurrentIrql = v25;
        v9 = a3;
      }
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14056E8CC(v13, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = *((_QWORD *)v18 + 4375);
  if ( v19 )
  {
    if ( *((_BYTE *)v18 + 32) <= 1u )
    {
      v37 = *(_DWORD *)(v19 + 24) - 1;
      *(_DWORD *)(v19 + 24) = v37;
      if ( !v37 )
        sub_140418E4C(v18);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = *((_QWORD *)v39 + 4375);
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v41;
        if ( v32 )
          sub_140418E4C(v39);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v12;
}
