/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x14035BFE0
 * Callers:
 *     sub_1402D301C @ 0x1402D301C (sub_1402D301C.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     sub_14035CA04 @ 0x14035CA04 (sub_14035CA04.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_1403AF9E8 @ 0x1403AF9E8 (sub_1403AF9E8.c)
 *     sub_1403BC8C4 @ 0x1403BC8C4 (sub_1403BC8C4.c)
 *     sub_1403C205C @ 0x1403C205C (sub_1403C205C.c)
 *     sub_1403CBB10 @ 0x1403CBB10 (sub_1403CBB10.c)
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403DEA20 (KeSetSystemAffinityThreadEx.c)
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
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 *     sub_1405798A8 @ 0x1405798A8 (sub_1405798A8.c)
 *     sub_1405C70FC @ 0x1405C70FC (sub_1405C70FC.c)
 *     sub_1405C8024 @ 0x1405C8024 (sub_1405C8024.c)
 *     sub_1405C8BDC @ 0x1405C8BDC (sub_1405C8BDC.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 *     sub_140849A30 @ 0x140849A30 (sub_140849A30.c)
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 *     sub_14090A314 @ 0x14090A314 (sub_14090A314.c)
 *     sub_140919E48 @ 0x140919E48 (sub_140919E48.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 *     sub_140A61424 @ 0x140A61424 (sub_140A61424.c)
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 *     sub_140A930EC @ 0x140A930EC (sub_140A930EC.c)
 *     sub_140A93220 @ 0x140A93220 (sub_140A93220.c)
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 *     sub_14062E5D0 @ 0x14062E5D0 (sub_14062E5D0.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 Group; // rcx
  PGROUP_AFFINITY v6; // r12
  char v7; // bp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r14d
  unsigned int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _GROUP_AFFINITY v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  Group = Affinity->Group;
  v6 = PreviousAffinity;
  if ( (unsigned __int16)Group >= LOWORD(dword_140D06E40[0])
    || (PreviousAffinity = (PGROUP_AFFINITY)dword_140D06E40,
        (*(_QWORD *)&dword_140D06E40[2 * Group + 2] & Affinity->Mask) == 0)
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    Affinity->Mask &= *(_QWORD *)&dword_140D06E40[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    PreviousAffinity = (PGROUP_AFFINITY)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)PreviousAffinity | *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 20) = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  v10 = *((_QWORD *)CurrentPrcb + 1);
  while ( 1 )
  {
    v11 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v16 = *(_DWORD *)(v11 + 24);
        *(_DWORD *)(v11 + 24) = v16 + 1;
        if ( v16 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
      break;
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v18;
        if ( !v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v20, (__int64)PreviousAffinity, v2, v3);
    while ( *(_QWORD *)(v10 + 64) );
  }
  v12 = *(_DWORD *)(v10 + 116);
  v13 = *(_DWORD *)(v10 + 588);
  if ( (v12 & 8) == 0 )
  {
    *(_DWORD *)(v10 + 116) = v12 | 8;
    goto LABEL_11;
  }
  v15 = *(_QWORD *)(v10 + 1104);
  if ( !v15 )
    goto LABEL_24;
  switch ( *(_BYTE *)(v15 + 18) )
  {
    case 0:
      goto LABEL_38;
    case 1:
LABEL_24:
      KeFirstGroupAffinityEx(&v19, *(_QWORD *)(v10 + 576));
      break;
    case 2:
LABEL_38:
      if ( !v7 )
        goto LABEL_13;
      *(_BYTE *)(v15 + 18) = 1;
      break;
  }
LABEL_11:
  if ( v7 )
    sub_14035C1C0((_DWORD)CurrentPrcb, 0, (_DWORD)Affinity, 2048, (__int64)&v21);
LABEL_13:
  v14 = *(_DWORD *)(v10 + 588);
  sub_140224100(v10);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
    sub_14062DAE4(v10, 1350LL, v13, v14);
  if ( (WORD2(xmmword_140D06900) & 0x1000) != 0 )
    sub_14062E5D0(v10, Affinity);
  sub_140344800((__int64)CurrentPrcb, &v21, CurrentIrql);
  if ( v6 )
    *v6 = v19;
}
