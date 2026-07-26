/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008
 * Callers:
 *     ndisDispatchRequest @ 0x1C0005B98 (ndisDispatchRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0006198 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0017824 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017A68 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C00231F4 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x1C0027DB8 (ndisHandleUModePnPOp.c)
 *     NdisGetVersion @ 0x1C002D820 (NdisGetVersion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0052A48 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00540AC (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00543F4 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C005C0EC (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C005C23C (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C0086AF4 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008A62C (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00AB9F8 (-ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 *     ?ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00ABB2C (-ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B3DC0 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B4984 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     WdmlibIoValidateDeviceIoControlAccess @ 0x1C00CB610 (WdmlibIoValidateDeviceIoControlAccess.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0104890 (NdisIfFreeNetLuidIndex.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C010C6A8 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x1C010C78C (ndisValidateEmbeddedBufferBounds.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C0114D58 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C0122A88 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C0123318 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisPnpRefresh @ 0x1C0123374 (ndisPnpRefresh.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C01233D0 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C0123434 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C0123480 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x1C01247B4 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x1C012A9DC (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x1C012AABC (-ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_S.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C012ACBC (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C01325F0 (NdisIfAllocateNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x1C0132D60 (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C013FC28 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0149FE8 (ndisEnumerateInterfaces32.c)
 */

NTSTATUS __fastcall ndisHandlePnPRequest(struct _IRP *a1, __int64 a2, __int64 a3, enum _NDIS_MP_REFTAG a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v5; // edi
  unsigned int v6; // edx
  _FILE_OBJECT *FileObject; // rax
  int active; // ebx
  char *FsContext; // r12
  char v11; // cl
  unsigned int LowPart; // eax
  unsigned int Options; // r15d
  unsigned int Length; // r13d
  _DWORD *p_Type; // rsi
  const WCHAR *v16; // rdx
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  NTSTATUS result; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned __int32 v31; // r14d
  struct _NDIS_MINIPORT_BLOCK *v32; // rax
  struct _NDIS_MINIPORT_BLOCK *v33; // rbx
  __int32 v34; // eax
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 MasterIrp; // r14
  unsigned int v39; // r12d
  unsigned int v40; // ecx
  unsigned int v41; // edx
  _DWORD *Pool2; // rax
  __int64 v43; // rbx
  unsigned int v44; // r13d
  void *v45; // rdx
  char *v46; // rcx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  int v51; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v53; // eax
  unsigned __int8 v54; // dl
  struct _NDIS_MINIPORT_BLOCK *v55; // rcx
  struct _NDIS_MINIPORT_BLOCK *v56; // r14
  struct _NDIS_MINIPORT_BLOCK *v57; // r15
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  bool v63; // zf
  int v64; // eax
  struct _NDIS_MINIPORT_BLOCK **v65; // [rsp+30h] [rbp-39h]
  unsigned int pNetLuidIndex; // [rsp+40h] [rbp-29h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v67; // [rsp+48h] [rbp-21h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v69; // [rsp+60h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  void *v71; // [rsp+D0h] [rbp+67h] BYREF
  void *Src; // [rsp+D8h] [rbp+6Fh] BYREF
  int v73; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v74; // [rsp+E8h] [rbp+7Fh]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  v6 = 0;
  P[0] = 0LL;
  v74 = 0;
  DestinationString = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  active = 0;
  v73 = 0;
  LODWORD(Src) = 0;
  pNetLuidIndex = 0;
  FsContext = (char *)FileObject->FsContext;
  v67 = 0LL;
  *(_QWORD *)&v69 = CurrentStackLocation;
  if ( !FsContext )
    return -1073741809;
  v11 = *FsContext;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  LOBYTE(v71) = *FsContext;
  if ( (LowPart & 3) != 0 )
    return -1073741811;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  p_Type = &a1->AssociatedIrp.MasterIrp->Type;
  if ( LowPart <= 0x170060 )
  {
    if ( LowPart == 1507424 )
      return -1073741637;
    if ( LowPart <= 0x170020 )
    {
      if ( LowPart == 1507360 )
      {
        if ( Length >= 4 )
        {
          *p_Type = NdisGetVersion();
          v6 = 4;
          if ( Length >= 8 )
          {
            v6 = 8;
            p_Type[1] = ndisChecked;
          }
        }
        else
        {
          active = -1073741789;
        }
        v36 = v6;
        goto LABEL_68;
      }
      if ( LowPart == 1198084 || LowPart == 1198092 || LowPart == 1214472 || LowPart == 1214480 )
      {
        active = ndisKnobIoctl(FsContext[1] != 0, LowPart, Options, Length, p_Type, (unsigned int *)&Src);
        if ( active )
          return active;
        goto LABEL_67;
      }
      if ( LowPart != 1507336 )
      {
        if ( LowPart != 1507344 )
        {
          if ( LowPart != 1507348 )
            return active;
          if ( v11 )
          {
            active = -1073741811;
            if ( !Options || (Options & 1) != 0 )
              return active;
            v16 = &a1->AssociatedIrp.MasterIrp->Type;
            *((_WORD *)p_Type + ((unsigned __int64)Options >> 1) - 1) = 0;
            RtlInitUnicodeString(&DestinationString, v16);
            return ndisHandleLegacyTransport(&DestinationString);
          }
          return -1073741790;
        }
        if ( IoIs32bitProcess(a1) )
        {
          if ( Length >= 0x20 )
          {
            v35 = ndisEnumerateInterfaces32(p_Type, Length);
            goto LABEL_66;
          }
        }
        else if ( Length >= 0x30 )
        {
          v35 = ndisEnumerateInterfaces(p_Type, Length);
LABEL_66:
          active = v35;
LABEL_67:
          v36 = (unsigned int)Src;
LABEL_68:
          a1->IoStatus.Information = v36;
          return active;
        }
        goto LABEL_74;
      }
      if ( !v11 )
        return -1073741790;
      if ( !IoIs32bitProcess(a1) )
        goto LABEL_36;
      v37 = v69;
      MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
      Src = 0LL;
      v69 = 0LL;
      v39 = *(_DWORD *)(v37 + 16);
      if ( Options >= 0x28 )
      {
        v40 = *(unsigned __int16 *)(MasterIrp + 18)
            + *(unsigned __int16 *)(MasterIrp + 26)
            + *(unsigned __int16 *)(MasterIrp + 34);
        v41 = v40 + *(_DWORD *)(MasterIrp + 12);
        if ( v41 < v40 || v41 >= 0xFFFFFFD8 )
          return -1073741811;
        if ( Options >= v41 + 40 )
        {
          if ( v41 < 0xFFFFFFB8 )
          {
            Options = v41 + 80;
            if ( v41 + 80 >= 8 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(64LL, Options, 538985550);
              P[0] = Pool2;
              v43 = (__int64)Pool2;
              if ( !Pool2 )
                return -1073741670;
              *Pool2 = *(_DWORD *)MasterIrp;
              Pool2[1] = *(_DWORD *)(MasterIrp + 4);
              p_Type = Pool2;
              v71 = Pool2 + 18;
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v39,
                      (unsigned __int16 *)(MasterIrp + 16),
                      (__int64)&v69) )
                goto LABEL_89;
              ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v69, v43, &v71, v43 + 24);
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v39,
                      (unsigned __int16 *)(MasterIrp + 24),
                      (__int64)&v69) )
                goto LABEL_89;
              ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v69, v43, &v71, v43 + 40);
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v39,
                      (unsigned __int16 *)(MasterIrp + 32),
                      (__int64)&v69) )
                goto LABEL_89;
              ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v69, v43, &v71, v43 + 56);
              v44 = *(_DWORD *)(MasterIrp + 12);
              if ( !ndisValidateEmbeddedBufferBounds(
                      MasterIrp,
                      v39,
                      MasterIrp + 8,
                      8u,
                      *(_DWORD *)(MasterIrp + 8),
                      v44,
                      4,
                      (unsigned __int64 *)&Src) )
                goto LABEL_89;
              v45 = Src;
              v46 = (char *)(((unsigned __int64)v71 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              *(_DWORD *)(v43 + 16) = v44;
              *(_QWORD *)(v43 + 8) = &v46[-v43];
              memmove(v46, v45, v44);
LABEL_36:
              if ( Options < 0x48 )
              {
LABEL_90:
                active = -1073741789;
                goto LABEL_45;
              }
              v22 = *((unsigned __int16 *)p_Type + 13)
                  + *((unsigned __int16 *)p_Type + 21)
                  + *((unsigned __int16 *)p_Type + 29);
              v23 = v22 + p_Type[4];
              if ( v23 >= v22 )
              {
                v24 = v23 + 72;
                if ( v24 >= 0x48 )
                {
                  if ( Options >= v24 )
                  {
                    if ( ndisValidateNdisVarDataDescInputString(
                           (unsigned __int64)p_Type,
                           Options,
                           (unsigned __int16 *)p_Type + 12,
                           (__int64)(p_Type + 6))
                      && ndisValidateNdisVarDataDescInputString(
                           (unsigned __int64)p_Type,
                           Options,
                           (unsigned __int16 *)p_Type + 20,
                           (__int64)(p_Type + 10))
                      && ndisValidateNdisVarDataDescInputString(
                           (unsigned __int64)p_Type,
                           Options,
                           (unsigned __int16 *)p_Type + 28,
                           (__int64)(p_Type + 14))
                      && ndisValidateEmbeddedBufferBounds(
                           (unsigned __int64)p_Type,
                           Options,
                           (unsigned __int64)(p_Type + 2),
                           0xCu,
                           p_Type[2],
                           p_Type[4],
                           8,
                           (unsigned __int64 *)p_Type + 1) )
                    {
                      active = ndisHandleUModePnPOp((__int64)p_Type);
                      goto LABEL_45;
                    }
                    goto LABEL_89;
                  }
                  goto LABEL_90;
                }
              }
LABEL_89:
              active = -1073741811;
              goto LABEL_45;
            }
          }
          return -1073741811;
        }
      }
      return -1073741789;
    }
    v18 = LowPart - 1507380;
    if ( v18 )
    {
      v19 = v18 - 12;
      if ( !v19 )
      {
        if ( !v11 )
          return -1073741790;
        if ( !IoIs32bitProcess(a1) )
        {
          if ( Options >= 0x10 )
          {
            if ( ndisPeriodicReceives )
            {
              if ( *(_WORD *)p_Type == 1 && *((_WORD *)p_Type + 1) == 16 )
              {
                v20 = p_Type[1];
                if ( v20 && (v20 == -1 || *((_QWORD *)p_Type + 1)) )
                  ndisConfigurePeriodicReceives((struct _NDIS_SET_RECEIVE_RATE *)p_Type);
                else
                  active = -1073741811;
              }
              else
              {
                active = -1073741735;
              }
            }
            else
            {
              active = -1073741823;
            }
            goto LABEL_31;
          }
          goto LABEL_108;
        }
        return -1073741637;
      }
      v47 = v19 - 4;
      if ( v47 )
      {
        v48 = v47 - 4;
        if ( v48 )
        {
          v49 = v48 - 12;
          if ( v49 )
          {
            v50 = v49 - 4;
            if ( v50 && v50 != 4 )
              return active;
            return -1073741637;
          }
          if ( !v11 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( Options >= 0x20C )
          {
            v51 = ndisIfSetIfDescr((const WCHAR *)p_Type);
LABEL_109:
            active = v51;
            goto LABEL_31;
          }
        }
        else
        {
          if ( !v11 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( Options >= 8 )
          {
            v51 = NdisIfFreeNetLuidIndex(*((_WORD *)p_Type + 2), *p_Type);
            goto LABEL_109;
          }
        }
LABEL_108:
        active = -1073741789;
LABEL_31:
        a1->IoStatus.Information = 0LL;
        return active;
      }
      if ( !v11 )
        return -1073741790;
      if ( IoIs32bitProcess(a1) )
        return -1073741637;
      if ( Options >= 2 && Length >= 4 )
      {
        active = NdisIfAllocateNetLuidIndex(*(_WORD *)p_Type, &pNetLuidIndex);
        if ( !active )
        {
          *p_Type = pNetLuidIndex;
          v36 = 4LL;
          goto LABEL_68;
        }
        goto LABEL_75;
      }
    }
    else
    {
      NdisTraceLoggingRareFeaturePath();
      if ( !(_BYTE)v71 )
        return -1073741790;
      if ( Options >= 0x30 && Length >= 0x30 )
      {
        v35 = ndisIfEnumerateNsiObjects((struct _NDIS_ENUM_NSI_OBJECTS *)p_Type, Length, (unsigned int *)&Src);
        goto LABEL_66;
      }
    }
LABEL_74:
    active = -1073741789;
LABEL_75:
    v36 = v74;
    goto LABEL_68;
  }
  if ( LowPart <= 0x170808 )
  {
    if ( LowPart != 1509384 )
    {
      v25 = LowPart - 1507464;
      if ( v25 )
      {
        v26 = v25 - 4;
        if ( v26 )
        {
          v27 = v26 - 20;
          if ( v27 )
          {
            v28 = v27 - 4;
            if ( v28 )
            {
              v29 = v28 - 8;
              if ( v29 )
              {
                v30 = v29 - 12;
                if ( v30 )
                {
                  if ( v30 != 1868 )
                    return active;
                  if ( FsContext[2] )
                  {
                    if ( Options >= 0x10 )
                    {
                      ndisPnpRefresh((struct _GUID *)a1->AssociatedIrp.MasterIrp, 1509384LL, 0x170060u);
                      return active;
                    }
                    return -1073741789;
                  }
                }
                else if ( v11 )
                {
                  if ( Options < 4 )
                    return -1073741789;
                  v31 = p_Type[1];
                  v32 = ndisReferenceMiniportByNetLuid(*(union _NET_LUID_LH *)(p_Type + 2), 0x6Eu);
                  v67 = v32;
                  v33 = v32;
                  if ( v32 )
                  {
                    if ( (v32->Flags & 0x80u) != 0 )
                    {
                      CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v32);
                      CxBlockFromMiniport->Chars.EvtCxUpdateIdleCondition(
                        v33->MiniportAdapterContext,
                        (_NDIS_IDLE_CONDITION)v31);
                    }
                    ndisDereferenceMiniport(v33, 0x6Eu);
                  }
                  else
                  {
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_DD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        0xEu,
                        0x19u,
                        (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
                        *((_WORD *)p_Type + 7),
                        (*((_QWORD *)p_Type + 1) >> 24) & 0xFFFFFF);
                    v5 = -1071448058;
                  }
                  v73 = v5;
                  v34 = _InterlockedExchange((volatile __int32 *)&ndisIdleCondition, v31);
                  if ( v34 != v31 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v65) = v31;
                    WPP_RECORDER_SF_DD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      4u,
                      0xEu,
                      0x1Au,
                      (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
                      v34,
                      v65);
                  }
                  return v73;
                }
              }
              else if ( v11 )
              {
                if ( Options >= 0x18 )
                {
                  if ( *((_QWORD *)FsContext + 6) )
                    return -1073740024;
                  return ndisIfReferenceCompartmentForUser(
                           (struct _GUID *)(p_Type + 1),
                           p_Type[5],
                           (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
                }
                return -1073741789;
              }
              return -1073741790;
            }
            if ( !ndisAoAcRefMiniportForIoctl(
                    (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                    Options,
                    (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                    1,
                    MPREF_AOAC_WAKE_DISABLE,
                    &v73,
                    &v67) )
              return v73;
            v53 = ndisAoAcEnableRemoteWake(v67, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 0);
            v54 = 6;
          }
          else
          {
            if ( !ndisAoAcRefMiniportForIoctl(
                    (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                    Options,
                    (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                    1,
                    MPREF_AOAC_WAKE_ENABLE,
                    &v73,
                    &v67) )
              return v73;
            v53 = ndisAoAcEnableRemoteWake(v67, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 1);
            v54 = 5;
          }
          v55 = v67;
          active = v53;
        }
        else
        {
          if ( !ndisAoAcRefMiniportForIoctl(
                  (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                  Options,
                  (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                  0,
                  MPREF_AOAC_NA_RELEASE,
                  &v73,
                  &v67) )
            return v73;
          v56 = v67;
          if ( (v67->Flags & 0x80u) == 0 )
            active = ndisNicActiveRelease(
                       v67,
                       (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                       (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
          else
            ndisWdfNicActiveReleaseSleepStudy(
              v67,
              (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
              (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
          v54 = 1;
          v55 = v56;
        }
      }
      else
      {
        if ( !ndisAoAcRefMiniportForIoctl(
                (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                Options,
                (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                1,
                MPREF_AOAC_NA_ACQUIRE,
                &v73,
                &v67) )
          return v73;
        v57 = v67;
        if ( (v67->Flags & 0x80u) == 0 )
          active = ndisNicActiveAcquire(
                     v67,
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                     a1);
        else
          ndisWdfNicActiveAcquireSleepStudy(
            v67,
            (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
            (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
        v54 = 0;
        v55 = v57;
      }
      ndisDereferenceMiniport(v55, v54);
      return active;
    }
    if ( !FsContext[2] )
      return -1073741790;
    if ( Options < 0x1C )
      return -1073741789;
    v71 = 0LL;
    v69 = 0LL;
    *(_OWORD *)P = 0LL;
    if ( !ndisValidateNdisOffsetAndLengthInputString((__int64)a1, p_Type + 1, (__int64)P)
      || !ndisValidateNdisOffsetAndLengthInputString((__int64)a1, p_Type + 3, (__int64)&v69)
      || !ndisValidateNdisOffsetAndLengthInputBufferBounds((__int64)a1, p_Type + 5, (unsigned __int64 *)&v71) )
    {
      return -1073741811;
    }
    return ndisPnpInvokeTdi(*p_Type, (__int64)P, (__int64)&v69);
  }
  v58 = LowPart - 1509388;
  if ( !v58 )
  {
    active = ndisQueryDeviceReset(
               (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
               Options,
               Length,
               (unsigned int *)&Src,
               (struct _NDIS_QUERY_DEVICE_RESET *)a1->AssociatedIrp.MasterIrp);
    a1->IoStatus.Information = (unsigned int)Src;
LABEL_45:
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0);
    return active;
  }
  v59 = v58 - 4;
  if ( !v59 )
    return ndisInvokeDeviceReset(
             (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
             Options,
             (union _NET_LUID_LH *)a1->AssociatedIrp.MasterIrp,
             a4);
  v60 = v59 - 21492;
  if ( !v60 )
  {
    if ( !v11 )
      return -1073741790;
    if ( Options >= 0x28 && Length >= 0x18 )
    {
      if ( !*((_BYTE *)p_Type + 32) )
        return ndisCollectAllStatisticsForIoctl(
                 (const struct NDIS_COLLECT_ALL_STATISTICS_IN *)p_Type,
                 (struct NDIS_COLLECT_ALL_STATISTICS_OUT *)p_Type,
                 Length,
                 &a1->IoStatus.Information);
      result = WdmlibIoValidateDeviceIoControlAccess(a1, 0x170808u);
      if ( !result )
        return ndisCollectAllStatisticsForIoctl(
                 (const struct NDIS_COLLECT_ALL_STATISTICS_IN *)p_Type,
                 (struct NDIS_COLLECT_ALL_STATISTICS_OUT *)p_Type,
                 Length,
                 &a1->IoStatus.Information);
      return result;
    }
    return -1073741789;
  }
  v61 = v60 - 4;
  if ( !v61 )
  {
    if ( !v11 )
      return -1073741790;
    if ( Options >= 0x28 && Length >= 0x90 )
      return ndisCollectSingleStatisticForIoctl(
               (const struct NDIS_COLLECT_SINGLE_STATISTIC_IN *)a1->AssociatedIrp.MasterIrp,
               (wchar_t *)a1->AssociatedIrp.MasterIrp,
               &a1->IoStatus.Information);
    return -1073741789;
  }
  v62 = v61 - 12;
  if ( v62 )
  {
    if ( v62 != 16388 )
      return active;
    if ( v11 )
      return ndisReinitializeHistograms();
    return -1073741790;
  }
  if ( !v11 )
    return -1073741790;
  if ( Options < 0xC )
    return -1073741811;
  if ( *p_Type != 1313105969 )
    return -1073741736;
  LODWORD(v71) = 0;
  v63 = *((_BYTE *)p_Type + 8) == 0;
  if ( !*((_BYTE *)p_Type + 8) )
    goto LABEL_180;
  result = WdmlibIoValidateDeviceIoControlAccess(a1, 0x170808u);
  if ( !result )
  {
    v63 = *((_BYTE *)p_Type + 8) == 0;
LABEL_180:
    v64 = ndisCollectHistogramsForIoctl(p_Type[1], !v63, (wchar_t *)p_Type, Length, (unsigned int *)&v71);
    active = v64;
    if ( v64 && v64 != -2147483643 )
      return active;
    v36 = (unsigned int)v71;
    goto LABEL_68;
  }
  return result;
}
