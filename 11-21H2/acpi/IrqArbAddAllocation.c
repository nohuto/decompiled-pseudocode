/*
 * XREFs of IrqArbAddAllocation @ 0x1C0099940
 * Callers:
 *     <none>
 * Callees:
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00228E4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C00238C4 (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C0023D18 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C0049974 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     WPP_RECORDER_SF_d @ 0x1C005E894 (WPP_RECORDER_SF_d.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C006C894 (ProcessorDeleteDeviceIdtAssignment.c)
 *     IcGetPossibleInput @ 0x1C0097288 (IcGetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1C00972E0 (IcAddPossibleReference.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0099900 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C009A2C0 (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C009A5B0 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C009BA8C (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009BAFC (IrqArbpLookupIsaOverrideByGsiv.c)
 *     MsiGetTargetInfo @ 0x1C009C148 (MsiGetTargetInfo.c)
 *     ProcessorGetDestinationMode @ 0x1C009C258 (ProcessorGetDestinationMode.c)
 *     IcSetPossibleInput @ 0x1C009D180 (IcSetPossibleInput.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B5F4C (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B5F70 (LinkNodeGetPossibleResources.c)
 *     IcRemovePossibleReference @ 0x1C00B7154 (IcRemovePossibleReference.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2, __int64 a3)
{
  int v3; // edi
  char v4; // bl
  unsigned int v6; // r13d
  unsigned int v7; // eax
  int v8; // r11d
  ULONGLONG v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int IsPciDevice; // r15d
  __int16 v14; // di
  unsigned __int8 v15; // di
  bool v16; // zf
  ULONGLONG v17; // rax
  BOOL v18; // ecx
  __int64 v19; // rdx
  __int16 v20; // r8
  unsigned int v21; // r13d
  int v22; // r9d
  ULONGLONG v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  __int64 Pool2; // rax
  int v28; // edx
  int v29; // ecx
  ULONGLONG v30; // r8
  unsigned int v31; // edi
  __int64 v32; // rbx
  int v33; // eax
  __int128 v34; // xmm0
  unsigned int v35; // ecx
  int v36; // ebx
  UCHAR v37; // di
  const char *v38; // r9
  const char *v39; // rdx
  const char *v40; // r8
  NTSTATUS v41; // eax
  int PossibleInput; // eax
  int v43; // edx
  BOOL v44; // eax
  char v45; // di
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int Flagsa; // [rsp+20h] [rbp-E0h]
  PVOID UserData; // [rsp+28h] [rbp-D8h]
  PVOID Owner; // [rsp+30h] [rbp-D0h]
  char v53; // [rsp+80h] [rbp-80h] BYREF
  char v54; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned __int8 v55; // [rsp+82h] [rbp-7Eh] BYREF
  char v56; // [rsp+83h] [rbp-7Dh]
  char v57; // [rsp+84h] [rbp-7Ch]
  char v58; // [rsp+85h] [rbp-7Bh]
  int v59; // [rsp+88h] [rbp-78h]
  int v60; // [rsp+8Ch] [rbp-74h]
  int v61; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v62; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp-60h] BYREF
  int v65; // [rsp+A4h] [rbp-5Ch] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  __int128 v69; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-30h]
  __int128 v71; // [rsp+E0h] [rbp-20h]
  __int128 v72; // [rsp+F0h] [rbp-10h]

  P = 0LL;
  v65 = 0;
  v4 = 0;
  v64 = 0;
  v61 = 0;
  v69 = 0LL;
  v53 = 0;
  v70 = 0LL;
  v68 = a1;
  v71 = 0LL;
  v54 = 0;
  v72 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Owner = *(PVOID *)(a2[4] + 32);
    WPP_RECORDER_SF_Dq((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, 0xDu, Flags);
  }
  v6 = *(_DWORD *)a2;
  v63 = 0LL;
  v57 = 0;
  v58 = 0;
  v7 = IrqArbGsivFromIrq(v6);
  v9 = a2[5];
  v10 = 0LL;
  v62 = 0;
  LOBYTE(v3) = 0;
  v11 = v7;
  v59 = v3;
  v56 = 0;
  v12 = *(_QWORD *)(v9 + 40);
  if ( (*(_BYTE *)(v12 + 4) & 0x20) == 0 )
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v53);
    if ( IsPciDevice < 0 )
      goto LABEL_110;
    v4 = v53;
  }
  if ( (a2[8] & 2) != 0 && v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xEu,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
    return;
  }
  LOBYTE(v8) = 0;
  v55 = 0;
  v60 = v8;
  if ( v11 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v11, v12, &v55);
    if ( PossibleInput >= 0 )
    {
      v8 = (unsigned __int8)v8;
      if ( PossibleInput != 263 )
        v8 = 1;
      v60 = v8;
    }
  }
  if ( v4 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v15 = 3;
    if ( (a2[8] & 2) != 0 )
      goto LABEL_16;
    IsPciDevice = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v63, &v64, 1);
    if ( IsPciDevice < 0 )
      goto LABEL_86;
    if ( v63 )
    {
      IsPciDevice = LinkNodeGetPossibleResources(v63, &P, &v54);
      if ( IsPciDevice < 0 )
        goto LABEL_86;
      ExFreePoolWithTag(P, 0);
      v15 = v54 & 2 | 1;
      if ( (int)LinkNodeGetPossibleGsiv(v63, &v64) < 0 )
      {
        if ( *(_DWORD *)(v47 + 28) )
        {
          IsPciDevice = -1073741823;
          goto LABEL_86;
        }
        *(_DWORD *)(v63 + 36) = v11;
      }
      v57 = 1;
      ++*(_DWORD *)(v63 + 28);
    }
    else
    {
      v11 = v64;
    }
LABEL_84:
    LOBYTE(v8) = v60;
    goto LABEL_16;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v11, &v62) )
  {
    v15 = byte_1C00803E4[8 * v62];
    if ( v15 != 0xFF )
      goto LABEL_16;
  }
  v14 = *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL);
  if ( IcIsInterruptTypeSecondary(v11) )
  {
    v56 = 1;
    IsPciDevice = AcpiIrqTranslateSecondaryInterruptToNtResources();
    if ( IsPciDevice < 0 )
      goto LABEL_86;
    v15 = v72 | ((v14 & 1) == 0);
    goto LABEL_84;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v6, &v61) )
  {
    v15 = (v14 & 1) == 0 ? 3 : 0;
  }
  else
  {
    v15 = v61 | ((v14 & 1) == 0);
  }
  LOBYTE(v8) = v60;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v15 |= 4u;
LABEL_16:
  v16 = (a2[8] & 2) == 0;
  v53 = 0;
  if ( !v16 )
  {
    v53 = 1;
    if ( (_BYTE)v8 )
    {
      if ( ((v15 ^ v55) & 0xFFFFFFFB) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x14u,
            0xFu,
            (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
        LOBYTE(v3) = v59;
        IsPciDevice = -1073741823;
        goto LABEL_110;
      }
    }
  }
  v17 = a2[5];
  v18 = 0;
  v19 = *(_QWORD *)(v17 + 40);
  v67 = v19;
  v20 = *(_WORD *)(v19 + 4);
  if ( (v20 & 2) != 0 )
  {
    v21 = *(_DWORD *)(v19 + 12) - *(_DWORD *)(v19 + 8) + 1;
  }
  else
  {
    v21 = 1;
    v18 = (*(_BYTE *)(v17 + 36) & 1) != 0;
  }
  v22 = v18 | 2;
  v16 = (v20 & 8) == 0;
  v23 = a2[9];
  if ( v16 )
    v22 = v18;
  P = (PVOID)a2[9];
  v55 = v15 & 8;
  v54 = v15 & 1;
  v62 = v22;
  LODWORD(Owner) = v22;
  v61 = !(v15 & 1) | ((v15 & 8) != 0 ? 2 : 0);
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, ULONGLONG, unsigned int, int, PVOID, int, __int128 *))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(a2[4] + 32),
                  v19,
                  v11,
                  v23,
                  v21,
                  v61,
                  Owner,
                  1,
                  &v69);
  if ( IsPciDevice < 0 )
  {
    if ( v21 <= 1 )
      return;
    v48 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, int, unsigned int, int, __int128 *))ProcessorReserveIdtEntries)(
            *(_QWORD *)(a2[4] + 32),
            *(_QWORD *)(a2[5] + 40),
            v11,
            P,
            1,
            !(v15 & 1) | (unsigned __int8)((v15 & 8) != 0 ? 2 : 0),
            v62,
            1,
            &v69);
    v26 = 1;
    IsPciDevice = v48;
    v21 = 1;
    if ( v48 < 0 )
      return;
  }
  else
  {
    v26 = 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    if ( !(_BYTE)v60 )
    {
      LOBYTE(v24) = v15;
      LOBYTE(v25) = (*(_BYTE *)(v67 + 4) & 8) != 0;
      IsPciDevice = IcSetPossibleInput(v11, &v69, v24, v25);
      if ( IsPciDevice < 0 )
        goto LABEL_86;
    }
    IcAddPossibleReference(v11, (a2[8] & 2) != 0);
    v58 = v26;
  }
  v60 = 0;
  if ( (v15 & 4) == 0 )
  {
    v43 = v26;
    if ( ((unsigned __int8)v26 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v43 = 3;
    v60 = v43;
  }
  Pool2 = ExAllocatePool2(256LL, 88LL * (v21 - 1) + 120, 1232102209LL);
  v10 = Pool2;
  if ( !Pool2 )
    goto LABEL_86;
  *(_DWORD *)Pool2 = 1;
  v28 = 4;
  *(_DWORD *)(Pool2 + 4) = 4;
  v29 = *(_DWORD *)(a2[4] + 40);
  if ( v29 && v29 != 2 )
  {
    v28 = 5;
    *(_DWORD *)(Pool2 + 4) = 5;
  }
  v30 = a2[5];
  if ( (*(_DWORD *)(v30 + 36) & 4) != 0 )
  {
    v28 |= 2u;
    *(_DWORD *)(Pool2 + 4) = v28;
    v30 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 4LL) & 0x20) != 0 )
  {
    *(_DWORD *)(Pool2 + 4) = v28 | 0x10;
    v30 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 4LL) & 2) == 0 )
  {
    if ( v63 )
    {
      *(_DWORD *)(Pool2 + 8) = 2;
      *(_QWORD *)(Pool2 + 16) = v63;
    }
    else
    {
      *(_DWORD *)(Pool2 + 8) = 1;
    }
    *(_DWORD *)(Pool2 + 32) = 0;
    v16 = v56 == 0;
    *(_DWORD *)(Pool2 + 36) = DWORD1(v70);
    *(_OWORD *)(Pool2 + 56) = v69;
    v44 = (!v16 || v55) && !v54;
    v45 = v15 & 0xA;
    *(_DWORD *)(v10 + 48) = v44;
    switch ( v45 )
    {
      case 10:
        v46 = 3;
        break;
      case 8:
        v46 = 4;
        break;
      case 2:
        v46 = 2;
        break;
      default:
        v46 = v45 == 0;
        break;
    }
    *(_DWORD *)(v10 + 44) = v46;
    *(_DWORD *)(v10 + 88) = IrqArbGsivFromIrq(*a2);
    *(_DWORD *)(v10 + 92) ^= (*(_DWORD *)(v10 + 92) ^ (*(_DWORD *)(v10 + 4) >> 4)) & 1;
    IsPciDevice = IrqArbGetDeviceIrql(v10 + 32, v10 + 40);
    if ( IsPciDevice >= 0 )
      goto LABEL_39;
    LOBYTE(v3) = v59;
LABEL_110:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(UserData) = IsPciDevice;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0x11u,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
        UserData);
    }
    if ( DWORD1(v70) )
      ProcessorDeleteDeviceIdtAssignment(*(void **)(a2[4] + 32), v11, DWORD1(v70), 1);
    if ( v57 )
      --*(_DWORD *)(v63 + 28);
    if ( v58 )
    {
      LOBYTE(v12) = (a2[8] & 2) != 0;
      IcRemovePossibleReference(v11, v12);
    }
    if ( v10 )
    {
      if ( !(_BYTE)v3 )
        ExFreePoolWithTag((PVOID)v10, 0);
    }
    return;
  }
  *(_DWORD *)(Pool2 + 8) = 3;
  IsPciDevice = MsiGetTargetInfo(&v69, DWORD1(v70), Pool2 + 16);
  if ( IsPciDevice < 0 )
  {
LABEL_86:
    LOBYTE(v3) = v59;
    goto LABEL_110;
  }
  *(_BYTE *)(v10 + 26) = BYTE8(v70);
  ProcessorGetDestinationMode(&v69, &v65);
  v31 = 0;
  if ( v21 )
  {
    v32 = v10 + 56;
    do
    {
      v33 = v65;
      *(_DWORD *)(v32 - 24) = 3;
      v34 = v69;
      *(_DWORD *)(v32 - 12) = 0;
      *(_DWORD *)(v32 - 8) = 1;
      *(_OWORD *)v32 = v34;
      v35 = v31 + DWORD1(v70);
      *(_DWORD *)(v32 + 48) = v33;
      *(_DWORD *)(v32 - 20) = v35;
      *(_DWORD *)(v32 + 32) = v31 + v11;
      IsPciDevice = IrqArbGetDeviceIrql(v10 + 88LL * v31 + 32, 88LL * v31 + v10 + 40);
      if ( IsPciDevice < 0 )
        goto LABEL_86;
      ++v31;
      v32 += 88LL;
    }
    while ( v31 < v21 );
  }
LABEL_39:
  v36 = v60;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = v53;
  }
  else
  {
    v37 = v53;
    v38 = "RTL_RANGE_LIST_ADD_SHARED";
    v39 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
    v40 = "ARBITER_RANGE_BOOT_ALLOCATED";
    if ( (v60 & 2) == 0 )
      v38 = " ";
    if ( (v60 & 1) == 0 )
      v39 = " ";
    if ( !v53 )
      v40 = " ";
    WPP_RECORDER_SF_DDDssDssqq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v39,
      (__int64)v40,
      (__int64)v38,
      Flagsa);
  }
  v41 = RtlAddRange(*(PRTL_RANGE_LIST *)(v68 + 48), *a2, a2[1], v37, v36 | 0x10, (PVOID)v10, *(PVOID *)(a2[4] + 32));
  IsPciDevice = v41;
  if ( v41 < 0 )
  {
    LOBYTE(v3) = v59;
    if ( v41 != -1073741823 )
      LOBYTE(v3) = 1;
    goto LABEL_110;
  }
}
