/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14035BE00
 * Callers:
 *     sub_1402D2F74 @ 0x1402D2F74 (sub_1402D2F74.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     sub_14035CA04 @ 0x14035CA04 (sub_14035CA04.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 *     sub_1403AF7F0 @ 0x1403AF7F0 (sub_1403AF7F0.c)
 *     sub_1403BC8C4 @ 0x1403BC8C4 (sub_1403BC8C4.c)
 *     sub_1403C205C @ 0x1403C205C (sub_1403C205C.c)
 *     sub_1403CB7F4 @ 0x1403CB7F4 (sub_1403CB7F4.c)
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14045A010 (KeRevertToUserAffinityThreadEx.c)
 *     sub_140506410 @ 0x140506410 (sub_140506410.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x140508620 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     sub_140508990 @ 0x140508990 (sub_140508990.c)
 *     sub_14050ADB0 @ 0x14050ADB0 (sub_14050ADB0.c)
 *     sub_14050B600 @ 0x14050B600 (sub_14050B600.c)
 *     sub_1405206E4 @ 0x1405206E4 (sub_1405206E4.c)
 *     sub_1405214A8 @ 0x1405214A8 (sub_1405214A8.c)
 *     sub_1405246D0 @ 0x1405246D0 (sub_1405246D0.c)
 *     sub_1405247B0 @ 0x1405247B0 (sub_1405247B0.c)
 *     sub_14052BFC0 @ 0x14052BFC0 (sub_14052BFC0.c)
 *     sub_140560BB0 @ 0x140560BB0 (sub_140560BB0.c)
 *     sub_14056918C @ 0x14056918C (sub_14056918C.c)
 *     sub_14056A8C4 @ 0x14056A8C4 (sub_14056A8C4.c)
 *     KeRevertToUserAffinityThread @ 0x14056B3D0 (KeRevertToUserAffinityThread.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 *     sub_1405798A8 @ 0x1405798A8 (sub_1405798A8.c)
 *     sub_1405C70FC @ 0x1405C70FC (sub_1405C70FC.c)
 *     sub_1405C8024 @ 0x1405C8024 (sub_1405C8024.c)
 *     sub_1405C8BDC @ 0x1405C8BDC (sub_1405C8BDC.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 *     sub_140849A30 @ 0x140849A30 (sub_140849A30.c)
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 *     sub_14090A314 @ 0x14090A314 (sub_14090A314.c)
 *     sub_140919E48 @ 0x140919E48 (sub_140919E48.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 *     sub_140A61424 @ 0x140A61424 (sub_140A61424.c)
 *     sub_140A67A68 @ 0x140A67A68 (sub_140A67A68.c)
 *     sub_140A930EC @ 0x140A930EC (sub_140A930EC.c)
 *     sub_140A93220 @ 0x140A93220 (sub_140A93220.c)
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 *     sub_14062E5D0 @ 0x14062E5D0 (sub_14062E5D0.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r14
  PGROUP_AFFINITY v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v10; // rcx
  struct _KPRCB *v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // r9d
  unsigned int v15; // r14d
  int Group; // ecx
  __int64 v17; // rax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF

  v27 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 8) == 0
    || PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2]) )
  {
    return;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)v1 | *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 20) = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !PreviousAffinity->Mask )
  {
    v10 = *((_QWORD *)CurrentThread + 138);
    if ( v10 )
    {
      v4 = *(_QWORD *)(v10 + 24);
      *(_BYTE *)(v10 + 18) = *(_BYTE *)(v10 + 19) & 2;
    }
    goto LABEL_7;
  }
  Group = PreviousAffinity->Group;
  if ( (unsigned __int16)Group < LOWORD(dword_140D06E40[0]) )
  {
    v17 = qword_140D06E48[Group];
    v18 = (v17 & PreviousAffinity->Mask) == 0;
    PreviousAffinity->Mask &= v17;
    if ( !v18 )
    {
      v5 = PreviousAffinity;
LABEL_7:
      v11 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        v12 = *((_QWORD *)v11 + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)v11 + 32) <= 1u )
          {
            v23 = *(_DWORD *)(v12 + 24);
            *(_DWORD *)(v12 + 24) = v23 + 1;
            if ( v23 == -1 )
              sub_140418E4C(v11);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
          break;
        v24 = *((_QWORD *)v11 + 4375);
        if ( v24 )
        {
          if ( *((_BYTE *)v11 + 32) <= 1u )
          {
            v25 = *(_DWORD *)(v24 + 24) - 1;
            *(_DWORD *)(v24 + 24) = v25;
            if ( !v25 )
              sub_140418E4C(v11);
          }
        }
        do
          sub_1402F32E0(&v26, v1, v2, v3);
        while ( *((_QWORD *)CurrentThread + 8) );
      }
      v13 = *((_DWORD *)CurrentThread + 147);
      if ( v4 || v5 )
      {
        v14 = 2048;
      }
      else
      {
        v4 = *((_QWORD *)CurrentThread + 69);
        v14 = *((_DWORD *)CurrentThread + 49);
        *((_DWORD *)CurrentThread + 29) &= ~8u;
      }
      sub_14035C1C0((_DWORD)CurrentPrcb, v4, (_DWORD)v5, v14, (__int64)&v27);
      v15 = *((_DWORD *)CurrentThread + 147);
      sub_140224100((__int64)CurrentThread);
      if ( (xmmword_140D06910 & 0x8000000) != 0 )
        sub_14062DAE4(CurrentThread, 1350LL, v13, v15);
      if ( (WORD2(xmmword_140D06900) & 0x1000) != 0 )
        sub_14062E5D0(CurrentThread, PreviousAffinity);
      sub_140344800((__int64)CurrentPrcb, &v27, CurrentIrql);
      return;
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v18 )
          sub_140418E4C(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
}
