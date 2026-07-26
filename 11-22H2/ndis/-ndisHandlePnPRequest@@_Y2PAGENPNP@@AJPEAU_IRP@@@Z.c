/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008
 * Callers:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C000310C (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0022D18 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C0025550 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x1C00271A0 (ndisHandleUModePnPOp.c)
 *     NdisGetVersion @ 0x1C002A040 (NdisGetVersion.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033610 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0034BD0 (WPP_RECORDER_SF_DD_ea_1C0034BD0.c)
 *     Feature_560772409__private_IsEnabledDeviceUsage @ 0x1C00372AC (Feature_560772409__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0057E2C (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00594B4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00597EC (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0061370 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C00614C4 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062EAC (WPP_RECORDER_SF_LL_ea_1C0062EAC.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C008BD94 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00902D4 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00B141C (-ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 *     ?ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00B154C (-ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C00B8D94 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B9974 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     WdmlibIoValidateDeviceIoControlAccess @ 0x1C00D1A58 (WdmlibIoValidateDeviceIoControlAccess.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x1C010C3CC (ndisValidateEmbeddedBufferBounds.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C010C48C (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C010C518 (ndisValidateNdisVarDataDescInputString.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0110010 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012085C (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C012E5D0 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C012EE80 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisPnpRefresh @ 0x1C012EEDC (ndisPnpRefresh.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C012EF38 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C012EFA0 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x1C0130374 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x1C01366C4 (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x1C01367A4 (-ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_S.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C01369A4 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C013E1D0 (NdisIfAllocateNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x1C013E94C (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C014D4BC (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0155F38 (ndisEnumerateInterfaces32.c)
 */

NTSTATUS __fastcall ndisHandlePnPRequest(struct _IRP *a1, __int64 a2, __int64 a3, enum _NDIS_MP_REFTAG a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v5; // edi
  unsigned int v6; // edx
  _FILE_OBJECT *FileObject; // rax
  int active; // ebx
  char *FsContext; // r13
  NTSTATUS result; // eax
  char v12; // cl
  unsigned int LowPart; // eax
  unsigned int Options; // r15d
  unsigned __int64 Length; // r12
  _DWORD *p_Type; // rsi
  const WCHAR *v17; // rdx
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 MasterIrp; // r14
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  unsigned int v26; // edx
  _DWORD *Pool2; // rax
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // r9
  __int64 v31; // r9
  size_t v32; // r8
  void *v33; // rdx
  char *v34; // rcx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // r9
  __int64 v39; // r9
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned __int32 v54; // r14d
  struct _NDIS_MINIPORT_BLOCK *v55; // rax
  struct _NDIS_MINIPORT_BLOCK *v56; // rbx
  unsigned int Flags; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int32 v59; // eax
  int v60; // r9d
  int v61; // eax
  unsigned __int8 v62; // dl
  struct _NDIS_MINIPORT_BLOCK *v63; // rcx
  int v64; // r9d
  struct _NDIS_MINIPORT_BLOCK *v65; // r14
  struct _NDIS_MINIPORT_BLOCK *v66; // r15
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  bool v72; // zf
  int v73; // eax
  struct _NDIS_MINIPORT_BLOCK **v74; // [rsp+30h] [rbp-49h]
  unsigned int pNetLuidIndex; // [rsp+50h] [rbp-29h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v76; // [rsp+58h] [rbp-21h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v78; // [rsp+70h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  void *v80; // [rsp+E0h] [rbp+67h] BYREF
  void *Src; // [rsp+E8h] [rbp+6Fh] BYREF
  int v82; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v83; // [rsp+F8h] [rbp+7Fh]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  v6 = 0;
  P[0] = 0LL;
  v83 = 0;
  DestinationString = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  active = 0;
  v82 = 0;
  LODWORD(Src) = 0;
  pNetLuidIndex = 0;
  FsContext = (char *)FileObject->FsContext;
  v76 = 0LL;
  *(_QWORD *)&v78 = CurrentStackLocation;
  if ( !FsContext )
    return -1073741809;
  v12 = *FsContext;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  LOBYTE(v80) = *FsContext;
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
        if ( (unsigned int)Length >= 4 )
        {
          *p_Type = NdisGetVersion();
          v6 = 4;
          if ( (unsigned int)Length >= 8 )
          {
            v6 = 8;
            p_Type[1] = ndisChecked;
          }
        }
        else
        {
          active = -1073741789;
        }
        v20 = v6;
        goto LABEL_27;
      }
      if ( LowPart == 1198084 || LowPart == 1198092 || LowPart == 1214472 || LowPart == 1214480 )
      {
        active = ndisKnobIoctl(FsContext[1] != 0, LowPart, Options, Length, p_Type, (unsigned int *)&Src);
        if ( active )
          return active;
        goto LABEL_24;
      }
      if ( LowPart != 1507336 )
      {
        if ( LowPart != 1507344 )
        {
          if ( LowPart != 1507348 )
            return active;
          if ( v12 )
          {
            active = -1073741811;
            if ( !Options || (Options & 1) != 0 )
              return active;
            v17 = &a1->AssociatedIrp.MasterIrp->Type;
            *((_WORD *)p_Type + ((unsigned __int64)Options >> 1) - 1) = 0;
            RtlInitUnicodeString(&DestinationString, v17);
            return ndisHandleLegacyTransport(&DestinationString);
          }
          return -1073741790;
        }
        if ( IoIs32bitProcess(a1) )
        {
          if ( (unsigned int)Length >= 0x20 )
          {
            v19 = ndisEnumerateInterfaces32(p_Type, (unsigned int)Length);
            a1->IoStatus.Information = Length;
LABEL_23:
            active = v19;
LABEL_24:
            v20 = (unsigned int)Src;
LABEL_27:
            a1->IoStatus.Information = v20;
            return active;
          }
        }
        else if ( (unsigned int)Length >= 0x30 )
        {
          v19 = ndisEnumerateInterfaces(p_Type, (unsigned int)Length);
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      if ( !v12 )
        return -1073741790;
      if ( !IoIs32bitProcess(a1) )
        goto LABEL_46;
      v22 = v78;
      MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
      Src = 0LL;
      v78 = 0LL;
      v24 = *(_DWORD *)(v22 + 16);
      if ( Options >= 0x28 )
      {
        v25 = *(unsigned __int16 *)(MasterIrp + 18)
            + *(unsigned __int16 *)(MasterIrp + 26)
            + *(unsigned __int16 *)(MasterIrp + 34);
        v26 = v25 + *(_DWORD *)(MasterIrp + 12);
        if ( v26 < v25 || v26 >= 0xFFFFFFD8 )
          return -1073741811;
        if ( Options >= v26 + 40 )
        {
          if ( v26 < 0xFFFFFFB8 )
          {
            Options = v26 + 80;
            if ( v26 + 80 >= 8 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(64LL, Options, 538985550);
              P[0] = Pool2;
              v29 = (__int64)Pool2;
              if ( !Pool2 )
                return -1073741670;
              *Pool2 = *(_DWORD *)MasterIrp;
              Pool2[1] = *(_DWORD *)(MasterIrp + 4);
              p_Type = Pool2;
              v80 = Pool2 + 18;
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v24,
                      (unsigned __int16 *)(MasterIrp + 16),
                      v28,
                      (__int64)&v78) )
                goto LABEL_41;
              ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v78, v29, &v80, v29 + 24);
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v24,
                      (unsigned __int16 *)(MasterIrp + 24),
                      v30,
                      (__int64)&v78) )
                goto LABEL_41;
              ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v78, v29, &v80, v29 + 40);
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v24,
                      (unsigned __int16 *)(MasterIrp + 32),
                      v31,
                      (__int64)&v78) )
                goto LABEL_41;
              ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v78, v29, &v80, v29 + 56);
              if ( !ndisValidateEmbeddedBufferBounds(
                      MasterIrp,
                      v24,
                      MasterIrp + 8,
                      8u,
                      0,
                      *(_DWORD *)(MasterIrp + 8),
                      *(_DWORD *)(MasterIrp + 12),
                      4,
                      (unsigned __int64 *)&Src) )
                goto LABEL_41;
              v32 = *(unsigned int *)(MasterIrp + 12);
              v33 = Src;
              v34 = (char *)(((unsigned __int64)v80 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              *(_DWORD *)(v29 + 16) = v32;
              *(_QWORD *)(v29 + 8) = &v34[-v29];
              memmove(v34, v33, v32);
LABEL_46:
              if ( Options < 0x48 )
              {
LABEL_47:
                active = -1073741789;
                goto LABEL_195;
              }
              v35 = *((unsigned __int16 *)p_Type + 13)
                  + *((unsigned __int16 *)p_Type + 21)
                  + *((unsigned __int16 *)p_Type + 29);
              v36 = v35 + p_Type[4];
              if ( v36 >= v35 )
              {
                v37 = v36 + 72;
                if ( v37 >= 0x48 )
                {
                  if ( Options < v37 )
                    goto LABEL_47;
                  if ( ndisValidateNdisVarDataDescInputString(
                         (unsigned __int64)p_Type,
                         Options,
                         (unsigned __int16 *)p_Type + 12,
                         v21,
                         (__int64)(p_Type + 6))
                    && ndisValidateNdisVarDataDescInputString(
                         (unsigned __int64)p_Type,
                         Options,
                         (unsigned __int16 *)p_Type + 20,
                         v38,
                         (__int64)(p_Type + 10))
                    && ndisValidateNdisVarDataDescInputString(
                         (unsigned __int64)p_Type,
                         Options,
                         (unsigned __int16 *)p_Type + 28,
                         v39,
                         (__int64)(p_Type + 14))
                    && ndisValidateEmbeddedBufferBounds(
                         (unsigned __int64)p_Type,
                         Options,
                         (unsigned __int64)(p_Type + 2),
                         0xCu,
                         0,
                         p_Type[2],
                         p_Type[4],
                         8,
                         (unsigned __int64 *)p_Type + 1) )
                  {
                    active = ndisHandleUModePnPOp((__int64)p_Type);
                    goto LABEL_195;
                  }
                }
              }
LABEL_41:
              active = -1073741811;
              goto LABEL_195;
            }
          }
          return -1073741811;
        }
      }
      return -1073741789;
    }
    v40 = LowPart - 1507380;
    if ( v40 )
    {
      v41 = v40 - 12;
      if ( !v41 )
      {
        if ( !v12 )
          return -1073741790;
        if ( !IoIs32bitProcess(a1) )
        {
          if ( Options >= 0x10 )
          {
            if ( ndisPeriodicReceives )
            {
              if ( *(_WORD *)p_Type == 1 && *((_WORD *)p_Type + 1) == 16 )
              {
                v47 = p_Type[1];
                if ( v47 && (v47 == -1 || *((_QWORD *)p_Type + 1)) )
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
            goto LABEL_77;
          }
          goto LABEL_74;
        }
        return -1073741637;
      }
      v42 = v41 - 4;
      if ( v42 )
      {
        v43 = v42 - 4;
        if ( v43 )
        {
          v44 = v43 - 12;
          if ( v44 )
          {
            v45 = v44 - 4;
            if ( v45 && v45 != 4 )
              return active;
            return -1073741637;
          }
          if ( !v12 )
            return -1073741790;
          if ( !IoIs32bitProcess(a1) )
          {
            if ( Options < 0x20C )
            {
LABEL_74:
              active = -1073741789;
LABEL_77:
              a1->IoStatus.Information = 0LL;
              return active;
            }
            v46 = ndisIfSetIfDescr((const WCHAR *)p_Type);
LABEL_76:
            active = v46;
            goto LABEL_77;
          }
        }
        else
        {
          if ( !v12 )
            return -1073741790;
          if ( !IoIs32bitProcess(a1) )
          {
            if ( Options < 8 )
              goto LABEL_74;
            v46 = NdisIfFreeNetLuidIndex(*((_WORD *)p_Type + 2), *p_Type);
            goto LABEL_76;
          }
        }
        return -1073741637;
      }
      if ( !v12 )
        return -1073741790;
      if ( IoIs32bitProcess(a1) )
        return -1073741637;
      if ( Options >= 2 && (unsigned int)Length >= 4 )
      {
        active = NdisIfAllocateNetLuidIndex(*(_WORD *)p_Type, &pNetLuidIndex);
        if ( !active )
        {
          *p_Type = pNetLuidIndex;
          v20 = 4LL;
          goto LABEL_27;
        }
        goto LABEL_26;
      }
    }
    else
    {
      NdisTraceLoggingRareFeaturePath();
      if ( !(_BYTE)v80 )
        return -1073741790;
      if ( Options >= 0x30 && (unsigned int)Length >= 0x30 )
      {
        v19 = ndisIfEnumerateNsiObjects((struct _NDIS_ENUM_NSI_OBJECTS *)p_Type, Length, (unsigned int *)&Src);
        goto LABEL_23;
      }
    }
LABEL_25:
    active = -1073741789;
LABEL_26:
    v20 = v83;
    goto LABEL_27;
  }
  if ( LowPart <= 0x170808 )
  {
    if ( LowPart != 1509384 )
    {
      v48 = LowPart - 1507464;
      if ( v48 )
      {
        v49 = v48 - 4;
        if ( v49 )
        {
          v50 = v49 - 20;
          if ( v50 )
          {
            v51 = v50 - 4;
            if ( v51 )
            {
              v52 = v51 - 8;
              if ( !v52 )
              {
                if ( v12 )
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
              v53 = v52 - 12;
              if ( v53 )
              {
                if ( v53 != 1868 )
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
                return -1073741790;
              }
              if ( !v12 )
                return -1073741790;
              if ( Options < 4 )
                return -1073741789;
              v54 = p_Type[1];
              v55 = ndisReferenceMiniportByNetLuid(*(union _NET_LUID_LH *)(p_Type + 2), 0x6Eu);
              v76 = v55;
              v56 = v55;
              if ( v55 )
              {
                Flags = v55->Flags;
                if ( (Flags & 0x80u) != 0 && (Flags & 0x100) == 0 )
                {
                  CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v56);
                  CxBlockFromMiniport->Chars.EvtCxUpdateIdleCondition(
                    v56->MiniportAdapterContext,
                    (_NDIS_IDLE_CONDITION)v54);
                }
                ndisDereferenceMiniport(v56, 0x6Eu);
              }
              else
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_DD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    0xEu,
                    0x19u,
                    (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
                    *((_WORD *)p_Type + 7),
                    (*((_QWORD *)p_Type + 1) >> 24) & 0xFFFFFF);
                v5 = -1071448058;
              }
              v82 = v5;
              v59 = _InterlockedExchange((volatile __int32 *)&ndisIdleCondition, v54);
              if ( v59 != v54 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v74) = v54;
                WPP_RECORDER_SF_LL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0xEu,
                  0x1Au,
                  (struct _GUID *)&WPP_f447471922483fea15b29c0a6cad7a3c_Traceguids,
                  v59,
                  v74);
              }
              return v82;
            }
            if ( !ndisAoAcRefMiniportForIoctl(
                    (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                    Options,
                    (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                    1,
                    MPREF_AOAC_WAKE_DISABLE,
                    &v82,
                    &v76) )
              return v82;
            v61 = ndisAoAcEnableRemoteWake(v76, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 0, v60);
            v62 = 6;
          }
          else
          {
            if ( !ndisAoAcRefMiniportForIoctl(
                    (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                    Options,
                    (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                    1,
                    MPREF_AOAC_WAKE_ENABLE,
                    &v82,
                    &v76) )
              return v82;
            v61 = ndisAoAcEnableRemoteWake(v76, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 1, v64);
            v62 = 5;
          }
          v63 = v76;
          active = v61;
        }
        else
        {
          if ( !ndisAoAcRefMiniportForIoctl(
                  (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                  Options,
                  (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                  0,
                  MPREF_AOAC_NA_RELEASE,
                  &v82,
                  &v76) )
            return v82;
          v65 = v76;
          if ( (v76->Flags & 0x80u) == 0 )
            active = ndisNicActiveRelease(
                       v76,
                       (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                       (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
          else
            ndisWdfNicActiveReleaseSleepStudy(
              v76,
              (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
              (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
          v62 = 1;
          v63 = v65;
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
                &v82,
                &v76) )
          return v82;
        v66 = v76;
        if ( (v76->Flags & 0x80u) == 0 )
          active = ndisNicActiveAcquire(
                     v76,
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                     a1);
        else
          ndisWdfNicActiveAcquireSleepStudy(
            v76,
            (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
            (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
        v62 = 0;
        v63 = v66;
      }
      ndisDereferenceMiniport(v63, v62);
      return active;
    }
    if ( !FsContext[2] )
      return -1073741790;
    if ( Options < 0x1C )
      return -1073741789;
    v80 = 0LL;
    v78 = 0LL;
    *(_OWORD *)P = 0LL;
    if ( !ndisValidateNdisOffsetAndLengthInputString((__int64)a1, p_Type + 1, (__int64)P)
      || !ndisValidateNdisOffsetAndLengthInputString((__int64)a1, p_Type + 3, (__int64)&v78)
      || !ndisValidateNdisOffsetAndLengthInputBufferBounds((__int64)a1, p_Type + 5, (unsigned __int64 *)&v80) )
    {
      return -1073741811;
    }
    return ndisPnpInvokeTdi(*p_Type, (__int64)P, (__int64)&v78);
  }
  v67 = LowPart - 1509388;
  if ( !v67 )
  {
    active = ndisQueryDeviceReset(
               (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
               Options,
               Length,
               (unsigned int *)&Src,
               (struct _NDIS_QUERY_DEVICE_RESET *)a1->AssociatedIrp.MasterIrp);
    a1->IoStatus.Information = (unsigned int)Src;
LABEL_195:
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0);
    return active;
  }
  v68 = v67 - 4;
  if ( !v68 )
    return ndisInvokeDeviceReset(
             (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
             Options,
             (union _NET_LUID_LH *)a1->AssociatedIrp.MasterIrp,
             a4);
  v69 = v68 - 21492;
  if ( v69 )
  {
    v70 = v69 - 4;
    if ( v70 )
    {
      v71 = v70 - 12;
      if ( v71 )
      {
        if ( v71 != 16388 )
          return active;
        if ( v12 )
          return ndisReinitializeHistograms();
        return -1073741790;
      }
      if ( !v12 )
        return -1073741790;
      if ( Options >= 0xC )
      {
        if ( *p_Type != 1313105969 )
          return -1073741736;
        LODWORD(v80) = 0;
        v72 = *((_BYTE *)p_Type + 8) == 0;
        if ( *((_BYTE *)p_Type + 8) )
        {
          result = WdmlibIoValidateDeviceIoControlAccess(a1, 0x170808u);
          if ( result )
            return result;
          v72 = *((_BYTE *)p_Type + 8) == 0;
        }
        v73 = ndisCollectHistogramsForIoctl(p_Type[1], !v72, (wchar_t *)p_Type, Length, (unsigned int *)&v80);
        active = v73;
        if ( !v73 || v73 == -2147483643 )
        {
          a1->IoStatus.Information = (unsigned int)v80;
          if ( (unsigned int)Feature_560772409__private_IsEnabledDeviceUsage() )
          {
            if ( active == -2147483643 )
              a1->Flags &= ~0x40u;
          }
        }
        return active;
      }
      return -1073741811;
    }
    if ( !v12 )
      return -1073741790;
    if ( Options >= 0x28 && (unsigned int)Length >= 0x90 )
      return ndisCollectSingleStatisticForIoctl(
               (const struct NDIS_COLLECT_SINGLE_STATISTIC_IN *)a1->AssociatedIrp.MasterIrp,
               (wchar_t *)a1->AssociatedIrp.MasterIrp,
               &a1->IoStatus.Information);
    return -1073741789;
  }
  if ( !v12 )
    return -1073741790;
  if ( Options < 0x28 || (unsigned int)Length < 0x18 )
    return -1073741789;
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
