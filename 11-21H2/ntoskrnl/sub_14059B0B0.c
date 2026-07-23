/*
 * XREFs of sub_14059B0B0 @ 0x14059B0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140216D20 @ 0x140216D20 (sub_140216D20.c)
 *     sub_14025FB48 @ 0x14025FB48 (sub_14025FB48.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E22B0 @ 0x1402E22B0 (sub_1402E22B0.c)
 *     RtlFindLastBackwardRunClear @ 0x1402E43A0 (RtlFindLastBackwardRunClear.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B3268 @ 0x1405B3268 (sub_1405B3268.c)
 */

LONG __fastcall sub_14059B0B0(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  __int64 v2; // rbx
  unsigned __int64 v3; // r15
  unsigned __int64 Flink_high; // rdx
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rdi
  _DWORD *v11; // r14
  __int64 v12; // rdi
  __int16 v13; // ax
  KIRQL v14; // al
  __int64 v15; // rcx
  int v16; // r9d
  unsigned __int64 v17; // r12
  const signed __int32 *v18; // r8
  const signed __int32 *v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  ULONG v22; // r9d
  ULONG LastBackwardRunClear; // eax
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  _RTL_BITMAP *v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // r12
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  __int64 v43; // r9
  int v44; // eax
  KIRQL v45; // al
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  _RTL_BITMAP *v48; // rbx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  __int64 v51; // r8
  int v52; // eax
  unsigned __int64 v54; // [rsp+30h] [rbp-59h]
  _DWORD *v55; // [rsp+38h] [rbp-51h]
  unsigned int v56; // [rsp+40h] [rbp-49h]
  __int64 v57; // [rsp+48h] [rbp-41h]
  ULONG StartingRunIndex; // [rsp+50h] [rbp-39h] BYREF
  ULONG v59; // [rsp+54h] [rbp-35h]
  ULONG v60; // [rsp+58h] [rbp-31h] BYREF
  __int64 v61; // [rsp+60h] [rbp-29h]
  __int64 v62; // [rsp+68h] [rbp-21h]
  _RTL_BITMAP BitMapHeader; // [rsp+70h] [rbp-19h] BYREF
  _RTL_BITMAP v64; // [rsp+80h] [rbp-9h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+90h] [rbp+7h]
  PRTL_BITMAP v66; // [rsp+98h] [rbp+Fh]
  PRTL_BITMAP v67; // [rsp+A0h] [rbp+17h]
  struct _KEVENT *Event; // [rsp+F0h] [rbp+67h]
  int v69; // [rsp+108h] [rbp+7Fh]

  Event = a1;
  StartingRunIndex = 0;
  v60 = 0;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  *(_QWORD *)&v64.SizeOfBitMap = 0LL;
  LODWORD(v64.Buffer) = 0;
  if ( Flink >= 0x10 )
  {
    if ( !sub_140216D20(*(_QWORD *)(v2 + 17256), *(_QWORD *)(v2 + 17496)) )
      return KeSetEvent(Event, 0, 0);
    v5 = *(_DWORD *)(v2 + 16728);
    v6 = 1;
    v61 = 0x8000LL;
    Flink_high = 0x4000LL;
    v9 = (((v8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v7;
    a1 = Event;
    v3 = v9 - 0x8000;
    Flink = 0;
  }
  else
  {
    v61 = 0LL;
    v3 = 0x7FFFFFFFFFFFFFFFLL;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = Flink + 1;
    v6 = 0;
  }
  v56 = v5;
  v69 = v6;
  v54 = Flink_high;
  if ( Flink < v5 )
  {
    v10 = 8LL * Flink + 16736;
    v55 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v11 = v55;
    v62 = v10;
    while ( 1 )
    {
      if ( Flink_high > v3 )
        return KeSetEvent(Event, 0, 0);
      v12 = *(_QWORD *)(v10 + v2);
      v13 = *(_WORD *)(v12 + 204);
      if ( ((v13 & 0x10) == 0 || !v6)
        && (v13 & 0x40) == 0
        && *(_QWORD *)v12 != *(_QWORD *)(v12 + 16)
        && *(_QWORD *)(v12 + 24) >= Flink_high )
      {
        break;
      }
LABEL_61:
      ++v11;
      v10 = v62 + 8;
      v55 = v11;
      ++Flink;
      v62 += 8LL;
      if ( Flink >= v56 )
        return KeSetEvent(Event, 0, 0);
      v6 = v69;
    }
    v2 = *(_QWORD *)(v12 + 248);
    v57 = v2;
    SpinLock = (PEX_SPIN_LOCK)(v12 + 232);
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 232));
    v15 = *(_QWORD *)(v12 + 112);
    v16 = *(_DWORD *)v12;
    v17 = v14;
    v66 = (PRTL_BITMAP)(v15 + 8);
    v18 = *(const signed __int32 **)(v15 + 16);
    v67 = (PRTL_BITMAP)(v15 + 24);
    if ( !_bittest(v18, v16 - 1) )
    {
      v19 = *(const signed __int32 **)(v15 + 32);
      if ( !_bittest(v19, v16 - 1) )
      {
        v20 = v3;
        if ( v3 > *(_QWORD *)v12 - *(_QWORD *)(v12 + 16) )
          v20 = *(_QWORD *)v12 - *(_QWORD *)(v12 + 16);
        v21 = (*(_QWORD *)v12 - v20) & 0xFFFFFFFFFFFFFFE0uLL;
        v22 = v16 - v21;
        v21 >>= 5;
        v59 = v22;
        BitMapHeader.SizeOfBitMap = v22;
        v64.SizeOfBitMap = v22;
        BitMapHeader.Buffer = (PULONG)&v18[v21];
        v64.Buffer = (PULONG)&v19[v21];
        LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v22 - 1, &StartingRunIndex);
        if ( LastBackwardRunClear <= v20 )
          v20 = LastBackwardRunClear;
        v24 = RtlFindLastBackwardRunClear(&v64, v59 - 1, &v60);
        if ( v20 <= v24 )
          v24 = v20;
        if ( !v69 )
          v24 &= ~(v54 - 1);
        if ( v24 )
        {
          v25 = *(_QWORD *)v12;
          v26 = *(_QWORD *)(v12 + 240);
          v27 = *(_QWORD *)v12 - v24;
          if ( !v26 )
            goto LABEL_40;
          do
          {
            v28 = v26;
            v26 = *(_QWORD *)(v26 + 8);
          }
          while ( v26 );
          v29 = *(_QWORD *)(v28 - 8);
          if ( !v29 || v27 > v29 )
            goto LABEL_40;
          v27 = v29 + 1;
          if ( v29 + 1 >= v29 )
          {
            v24 = v25 - v27;
            if ( !v69 )
            {
              v24 &= ~(v54 - 1);
              v27 = v25 - v24;
            }
            if ( v24 )
            {
LABEL_40:
              v35 = v66;
              *(_QWORD *)(v12 + 24) -= v24;
              *(_QWORD *)(v12 + 48) -= v24;
              *(_QWORD *)v12 = v27;
              RtlSetBits(v35, v27, v24);
              RtlSetBits(v67, v27, v24);
              sub_14025FB48(v12, v27, v24, 0LL);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v38 = *((_QWORD *)CurrentPrcb + 4375);
                    v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                    v34 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
                    *(_DWORD *)(v38 + 20) &= v39;
                    if ( v34 )
                      sub_140418E4C((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v17);
              v2 = v57;
              v3 -= v24;
              if ( (*(_BYTE *)(v12 + 204) & 0x10) == 0 )
              {
                v40 = v24 + v61;
                if ( !(unsigned int)sub_14032A4B0(v57, v24 + v61, 2u) )
                {
                  v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 232));
                  v46 = *(_QWORD *)(v12 + 112);
                  *(_QWORD *)(v12 + 24) += v24;
                  *(_QWORD *)(v12 + 48) += v24;
                  *(_QWORD *)v12 = v24 + v27;
                  v47 = v45;
                  v48 = (_RTL_BITMAP *)(v46 + 24);
                  RtlClearBits((PRTL_BITMAP)(v46 + 8), v27, v24);
                  RtlClearBits(v48, v27, v24);
                  if ( v27 < *(unsigned int *)(v12 + 120) )
                    *(_DWORD *)(v12 + 120) = v27;
                  sub_1402E22B0(v12, 0, v27);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
                  if ( dword_140D06B08 )
                  {
                    if ( (dword_140D06B08 & 1) != 0 )
                    {
                      v49 = KeGetCurrentIrql();
                      if ( v49 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v49 >= 2u )
                      {
                        v50 = KeGetCurrentPrcb();
                        v51 = *((_QWORD *)v50 + 4375);
                        v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
                        v34 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
                        *(_DWORD *)(v51 + 20) &= v52;
                        if ( v34 )
                          sub_140418E4C((__int64)v50);
                      }
                    }
                  }
                  __writecr8(v47);
                  return KeSetEvent(Event, 0, 0);
                }
                sub_1405B3268(v57, v24, 0LL);
                sub_14028CE10(v57, v40);
              }
              *v55 = v27;
              v11 = v55;
              goto LABEL_60;
            }
          }
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v30 >= 2u )
              {
                v31 = KeGetCurrentPrcb();
                v32 = *((_QWORD *)v31 + 4375);
                v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
                *(_DWORD *)(v32 + 20) &= v33;
                if ( v34 )
                  sub_140418E4C((__int64)v31);
              }
            }
          }
          v2 = v57;
LABEL_59:
          v11 = v55;
          __writecr8(v17);
LABEL_60:
          Flink_high = v54;
          goto LABEL_61;
        }
        v2 = v57;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = *((_QWORD *)v42 + 4375);
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v34 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
          *(_DWORD *)(v43 + 20) &= v44;
          if ( v34 )
            sub_140418E4C((__int64)v42);
        }
      }
    }
    goto LABEL_59;
  }
  return KeSetEvent(Event, 0, 0);
}
