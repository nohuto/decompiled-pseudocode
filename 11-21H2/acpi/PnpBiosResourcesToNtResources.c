/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C009832C
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0022C8C (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C004EFEC (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C0097130 (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AF43C (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B09D0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B5F70 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0022D48 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0022ECC (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C005E894 (WPP_RECORDER_SF_d.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005F36C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C005F554 (WPP_RECORDER_SF_dqLD.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C0096D6C (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C0097330 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00974BC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009753C (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0098040 (PnpiGrowResourceList.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009888C (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0098AA8 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C0098BB4 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiClearAllocatedMemory @ 0x1C0098C70 (PnpiClearAllocatedMemory.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2EAC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00B32F4 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00B33C0 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B3428 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00B348C (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B3510 (PnpiBiosVendorToNtIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, _BYTE *a2, __int64 a3, __int64 *a4)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // ebx
  ULONG_PTR v7; // r10
  int v8; // edx
  PVOID v9; // r12
  int v10; // ecx
  unsigned __int8 v11; // di
  int v12; // r15d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r9
  int v15; // eax
  unsigned __int16 v16; // r9
  unsigned int v17; // edi
  unsigned int v18; // esi
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  int v21; // r15d
  unsigned int v22; // r15d
  __int64 Pool2; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  char *v27; // rsi
  unsigned int v28; // r15d
  unsigned __int16 v30; // di
  unsigned __int16 v31; // r15
  unsigned __int16 i; // si
  unsigned __int16 v33; // r9
  unsigned int v34; // eax
  unsigned __int8 v35; // di
  unsigned __int8 v36; // r15
  unsigned __int8 v37; // al
  __int64 DeviceExtension; // rsi
  int v39; // eax
  unsigned int v40; // edi
  int v41; // eax
  unsigned __int8 v42; // di
  char j; // si
  __int64 v44; // rcx
  int v45; // eax
  unsigned __int16 v46; // r9
  __int64 v47; // rcx
  int v48; // eax
  size_t v49; // rbx
  int v50; // [rsp+28h] [rbp-49h]
  __int64 v51; // [rsp+30h] [rbp-41h]
  __int64 v52; // [rsp+38h] [rbp-39h]
  unsigned int v53; // [rsp+58h] [rbp-19h]
  char v54[4]; // [rsp+5Ch] [rbp-15h] BYREF
  int v55; // [rsp+60h] [rbp-11h]
  int v56; // [rsp+64h] [rbp-Dh] BYREF
  int v57; // [rsp+68h] [rbp-9h]
  unsigned int v58; // [rsp+6Ch] [rbp-5h]
  unsigned __int16 v59; // [rsp+70h] [rbp-1h]
  int v60; // [rsp+74h] [rbp+3h]
  int v61; // [rsp+78h] [rbp+7h]
  PVOID P[9]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v65; // [rsp+E8h] [rbp+77h]

  v65 = a3;
  P[0] = 0LL;
  v56 = 0;
  v53 = 0;
  v58 = 0;
  v54[0] = 0;
  v55 = 0;
  v57 = 0;
  v4 = PnpiGrowResourceList((__int64 *)P, &v56, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x21u,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
        v4);
    return (unsigned int)v6;
  }
  v7 = (ULONG_PTR)a2;
  v8 = 32;
  v9 = P[0];
  v61 = 32;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_BYTE *)v7;
    v12 = v10;
    if ( *(char *)v7 < 0 )
    {
      v13 = *(_WORD *)(v7 + 1) + 3;
      v59 = v13;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v14 = 35;
      goto LABEL_6;
    }
    v13 = (v11 & 7) + 1;
    v59 = v13;
    v11 &= 0x78u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 34;
LABEL_6:
      LODWORD(v52) = v13;
      LODWORD(v51) = v11;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v14,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
        v51,
        v52);
      v10 = v55;
      v7 = (ULONG_PTR)a2;
      v8 = 32;
    }
LABEL_7:
    if ( v11 == 120 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          0x24u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
      if ( !v55 || v57 == v55 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            0x37u,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        PnpiClearAllocatedMemory(v9);
        *a4 = 0LL;
        return (unsigned int)v6;
      }
      if ( *(_QWORD *)v9 )
        v17 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
      else
        v17 = 0;
      v18 = v58;
      v19 = 1;
      if ( v58 )
      {
        while ( 1 )
        {
          v44 = *((_QWORD *)v9 + v19);
          if ( !v44 )
            break;
          v45 = *(_DWORD *)(v44 + 4);
          v22 = v61;
          if ( v45 )
          {
            v22 = 32 * (v17 + v45) + v61 + 8;
            v61 = v22;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x3Au, v50);
          }
          if ( ++v19 > v18 )
          {
            v20 = v18;
            goto LABEL_43;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v51) = v19;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x39u,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
            v51);
        }
        goto LABEL_148;
      }
      v20 = 0;
      if ( *(_QWORD *)v9 && (v21 = *(_DWORD *)(*(_QWORD *)v9 + 4LL)) != 0 )
      {
        v22 = 32 * v21 + 40;
LABEL_43:
        if ( v22 >= 0x48 )
        {
          Pool2 = ExAllocatePool2(256LL, v22, 1383097153LL);
          *a4 = Pool2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v52) = v22;
            WPP_RECORDER_SF_qD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x3Du,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
              Pool2,
              v52);
          }
          v26 = *a4;
          if ( !*a4 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0xDu,
                0x3Eu,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
            v6 = -1073741670;
            goto LABEL_152;
          }
          *(_QWORD *)(v26 + 4) = 15LL;
          *(_DWORD *)v26 = v22;
          v27 = (char *)(v26 + 32);
          v28 = 1;
          if ( v20 )
          {
            do
            {
              v47 = *((_QWORD *)v9 + v28);
              v48 = *(_DWORD *)(v47 + 4);
              if ( v48 )
              {
                v49 = (unsigned int)(32 * v48 + 8);
                *(_DWORD *)(v47 + 4) = v17 + v48;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, 0LL, v24, v25, v50);
                memmove(v27, *((const void **)v9 + v28), v49);
                v27 += v49;
                if ( v17 )
                {
                  memmove(v27, (const void *)(*(_QWORD *)v9 + 8LL), 32LL * v17);
                  v27 += 32 * v17;
                }
                v20 = v58;
                ++*(_DWORD *)(*a4 + 28);
              }
              ++v28;
            }
            while ( v28 <= v20 );
          }
          else
          {
            memmove(v27, *(const void **)v9, 32 * v17 + 8);
            ++*(_DWORD *)(*a4 + 28);
          }
          PnpiClearAllocatedMemory(v9);
          return 0LL;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_148:
          PnpiClearAllocatedMemory(v9);
          *a4 = 0LL;
          return 3221225473LL;
        }
        v46 = 60;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_148;
        v46 = 59;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        v46,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
      goto LABEL_148;
    }
    v55 = v10 + 1;
    v60 = v11;
    if ( v11 <= 0x84u )
    {
      switch ( v11 )
      {
        case 0x84u:
          v6 = 0;
          if ( a1 )
          {
            if ( (int)PnpiBiosVendorToNtIoDescriptor(a1, v7, v5, (_DWORD)v9, v53, v65, (__int64)v54) < 0 || !v54[0] )
              ++v57;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0xEu,
                0x35u,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          }
          else
          {
            ++v57;
          }
          goto LABEL_18;
        case 0x20u:
          v30 = *(_WORD *)(v7 + 1);
          v31 = 0;
          for ( i = 0; v30; v30 >>= 1 )
          {
            if ( v6 < 0 )
              break;
            if ( (v30 & 1) != 0 )
              v6 = PnpiBiosIrqToIoDescriptor(a2, i, (__int64)v9, v53, v31++);
            ++i;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_17;
          v33 = 37;
          goto LABEL_60;
        case 0x28u:
          v42 = *(_BYTE *)(v7 + 1);
          v31 = 0;
          for ( j = 0; v42; v42 >>= 1 )
          {
            if ( v6 < 0 )
              break;
            if ( (v42 & 1) != 0 )
            {
              LOBYTE(v8) = j;
              v6 = PnpiBiosDmaToIoDescriptor((_DWORD)a2, v8, (_DWORD)v9, v53, v31++);
            }
            ++j;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_17;
          v33 = 39;
LABEL_60:
          v34 = v31;
LABEL_61:
          LODWORD(v52) = v6;
          LODWORD(v51) = v34;
          WPP_RECORDER_SF_LL(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            v33,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
            v51,
            v52);
          goto LABEL_17;
        case 0x30u:
          v40 = v58 + 1;
          v58 = v40;
          v53 = v40;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x29u,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          if ( v40 == v56 )
          {
            v41 = PnpiGrowResourceList((__int64 *)P, &v56, v5);
            v9 = P[0];
            v6 = v41;
          }
          goto LABEL_17;
        case 0x38u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x2Au,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          v53 = 0;
          goto LABEL_17;
        case 0x40u:
          v15 = PnpiBiosPortToIoDescriptor(v7, v9, v53, v65);
          v6 = v15;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = 43;
            break;
          }
LABEL_17:
          if ( v6 < 0 )
            goto LABEL_135;
LABEL_18:
          v7 = (ULONG_PTR)a2;
          v8 = 32;
LABEL_19:
          v10 = v55;
          goto LABEL_20;
        case 0x48u:
          v15 = PnpiBiosPortFixedToIoDescriptor(v7, v9, v53, v65);
          v6 = v15;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_17;
          v16 = 44;
          break;
        case 0x50u:
          v15 = PnpiBiosDmaToIoDescriptorV3(v7, v9, v53, 1LL);
          v6 = v15;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_17;
          v16 = 40;
          break;
        case 0x70u:
          ++v57;
          v6 = 0;
          goto LABEL_19;
        case 0x81u:
          goto LABEL_31;
        default:
          goto LABEL_79;
      }
LABEL_15:
      LODWORD(v51) = v15;
LABEL_16:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v16,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
        v51);
      goto LABEL_17;
    }
    if ( v11 == 138 )
    {
      v15 = PnpiBiosAddressQuadToIoDescriptor((unsigned __int8 *)v7, (__int64)v9, v53, v65);
      v6 = v15;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v16 = 48;
      goto LABEL_15;
    }
    if ( v11 <= 0x8Au )
      break;
    switch ( v11 )
    {
      case 0x8Bu:
        v15 = PnpiBiosAddressExtendedToIoDescriptor(v7);
        v6 = v15;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v16 = 49;
        goto LABEL_15;
      case 0x8Cu:
        LOBYTE(v34) = 0;
        if ( a1 )
        {
          if ( v6 >= 0 )
          {
            v6 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v7, v5, (_DWORD)v9, v53, v65);
            LOBYTE(v34) = 1;
          }
        }
        else
        {
          v6 = -1073741637;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v34 = (unsigned __int8)v34;
        v33 = 51;
        goto LABEL_61;
      case 0x8Du:
        if ( a1 )
          v6 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v7, v5, (_DWORD)v9, v53, v65);
        else
          v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v16 = 50;
LABEL_125:
        LODWORD(v51) = v6;
        goto LABEL_16;
      case 0x8Eu:
        if ( a1 )
          v6 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v7, v5, (_DWORD)v9, v53, v65);
        else
          v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 52;
          goto LABEL_125;
        }
        goto LABEL_17;
    }
LABEL_79:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xDu,
        0x36u,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
    v7 = (ULONG_PTR)a2;
    v10 = v12;
    v6 = 0;
    v55 = v12;
    v8 = 32;
LABEL_20:
    v7 += v59;
    a2 = (_BYTE *)v7;
  }
  if ( v11 <= 0x86u )
  {
LABEL_31:
    v15 = PnpiBiosMemoryToIoDescriptor(v7, v9, v53, 1LL);
    v6 = v15;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v16 = 45;
    goto LABEL_15;
  }
  if ( v11 == 135 )
  {
    v15 = PnpiBiosAddressDoubleToIoDescriptor(v7);
    v6 = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 47;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  if ( v11 == 136 )
  {
    v15 = PnpiBiosAddressToIoDescriptor((unsigned __int8 *)v7, (__int64)v9, v53, v65);
    v6 = v15;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v16 = 46;
    goto LABEL_15;
  }
  v35 = *(_BYTE *)(v7 + 4);
  v36 = 0;
  v37 = 4 * v35 + 5;
  if ( AcpiInterruptCombiningSupported != 1 || (LOBYTE(v5) = *(_BYTE *)(v7 + 1) + 3, (unsigned __int8)v5 <= v37) )
  {
    DeviceExtension = 0LL;
    if ( gAcpiHonorBiosPolarities && a1 )
      DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    if ( v35 )
    {
      do
      {
        if ( v6 < 0 )
          break;
        v39 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, (__int64)a2, v36++, (__int64)v9, v53);
        v6 = v39;
      }
      while ( v36 < v35 );
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v34 = v36;
    v33 = 38;
    goto LABEL_61;
  }
  if ( a1 )
  {
    v6 = PnpiBiosInterruptCombineToIoDescriptor(a1, v7, (unsigned __int8)v5 - v37 - 1, (int)v9, v53, v65);
    goto LABEL_17;
  }
  v6 = -1073741637;
LABEL_135:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 0xDu, 0x38u, v50);
LABEL_152:
  PnpiClearAllocatedMemory(v9);
  return (unsigned int)v6;
}
