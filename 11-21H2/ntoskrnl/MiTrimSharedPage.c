/*
 * XREFs of MiTrimSharedPage @ 0x14023F658
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14059F908 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiPreventControlAreaDeletion @ 0x14023F8E8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14023F9CC (MiDecrementSubsection.c)
 *     MiReferencePfBackedSection @ 0x14023FA50 (MiReferencePfBackedSection.c)
 *     MiTrimSection @ 0x14027E174 (MiTrimSection.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140287A8C (MiDecrementModifiedWriteCount.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x14045DB90 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r12
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r13d
  int v12; // edx
  unsigned int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 *v20; // rax
  int v21; // ecx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  _QWORD v33[5]; // [rsp+20h] [rbp-30h] BYREF
  int v34; // [rsp+48h] [rbp-8h]
  int v35; // [rsp+4Ch] [rbp-4h]
  __int64 v36; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  v35 = 0;
  v6 = v3 | 0x8000000000000000uLL;
  v36 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = (a3 >> 18) & 1 | 2;
  if ( (a3 & 0x80000) == 0 )
    v7 = (a3 >> 18) & 1;
  v8 = v7 | 4;
  if ( (a3 & 0x20000) == 0 )
    v8 = v7;
  v9 = v8 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v9 = v8;
  v10 = v9;
  v11 = a3 & 0x800000;
  if ( (a3 & 0x800000) != 0 && (a3 & 0x8000000) == 0 )
    v10 = v9 | 0x10;
  v12 = v10 | 0x40;
  if ( (a3 & 0x1000000) == 0 )
    v12 = v10;
  v13 = v12 | 0x80;
  if ( (a3 & 0x2000000) == 0 )
    v13 = v12;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v26 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v20 = (__int64 *)MiReferencePfBackedSection(v6);
    v16 = (__int64)v20;
    if ( v20 )
    {
      v14 = *v20;
      if ( !v11 || *(int *)(v14 + 56) >= 0 || !(unsigned int)MiClusterVadFull(a1, 16LL, v20) )
        goto LABEL_19;
      ++dword_140C29D50;
      v31 = MiDecrementModifiedWriteCount(v14, 0LL);
      if ( v31 )
        MiReleaseControlAreaWaiters(v31);
    }
    else
    {
      ++dword_140C29D78;
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  v14 = MiPreventControlAreaDeletion(a1, &BugCheckParameter2, &v36);
  if ( !v14 )
  {
    ++dword_140C29D74;
    return 0LL;
  }
  v15 = *(_QWORD *)(a1 + 16);
  if ( qword_140C50780 && (v15 & 0x10) == 0 )
    v15 &= ~qword_140C50780;
  v16 = v15 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v4);
  MiReleaseControlAreaWaiters(v36);
LABEL_19:
  v34 = 0;
  v33[3] = v16;
  v33[4] = v16;
  v33[0] = v14;
  v33[1] = v6;
  v33[2] = v6;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))MiTrimSection)(v33, 0LL, 1LL, v13)
    || (*(_BYTE *)(a1 + 34) & 7) == 6 )
  {
    v21 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))MiTrimSection)(v33, 0LL, 1LL, v13);
    if ( v21 || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    {
      ++dword_140C29D88;
      if ( v21 )
      {
        v32 = *(_DWORD *)(v14 + 56);
        if ( (v32 & 0x20) != 0 )
        {
          ++dword_140C29D7C;
        }
        else if ( (v32 & 0x80u) == 0 )
        {
          ++dword_140C29D84;
        }
        else
        {
          ++dword_140C29D80;
        }
        goto LABEL_23;
      }
    }
    else
    {
      ++dword_140C29CDC;
    }
  }
  v17 = *(_DWORD *)(v14 + 56);
  if ( (v17 & 0x20) != 0 )
  {
    ++dword_140C29CD4;
  }
  else if ( (v17 & 0x80u) == 0 )
  {
    ++dword_140C29CE0;
  }
  else
  {
    ++dword_140C29CD8;
  }
LABEL_23:
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v18 = MiDecrementModifiedWriteCount(v14, 0LL);
  if ( v18 )
    MiReleaseControlAreaWaiters(v18);
  MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
  {
    ++dword_140C29CCC;
    return 2LL;
  }
  ++dword_140C29D8C;
  return 0LL;
}
