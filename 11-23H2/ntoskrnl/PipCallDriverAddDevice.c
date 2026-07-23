/*
 * XREFs of PipCallDriverAddDevice @ 0x1406C8264
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140854630 (PiProcessAddBootDevices.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302E90 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilMarkStack @ 0x140367C34 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage @ 0x140410104 (Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14068C158 (PnpCallDriverQueryServiceHelper.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14069AA88 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1406CE0F4 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x140787A24 (_CmOpenInstallerClassRegKey.c)
 *     PnpCallAddDevice @ 0x14079281C (PnpCallAddDevice.c)
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetDeviceRegProp @ 0x14079881C (_CmSetDeviceRegProp.c)
 *     IopQueryLegacyBusInformation @ 0x1407E2838 (IopQueryLegacyBusInformation.c)
 *     IopBootLog @ 0x1407E379C (IopBootLog.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x1407E5A94 (PiDmaGuardProcessPreAddDevice.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1408603C4 (IopInsertLegacyBusDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x1408675FC (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     PnpUnloadAttachedDriver @ 0x140869974 (PnpUnloadAttachedDriver.c)
 *     IopSafebootDriverLoad @ 0x140945844 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x140958C34 (PnpGetStableSystemBootTime.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096B474 (PipDmgEnforceEnumerationPolicy.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096F708 (PiProcessDriversLoadedOnSecureDevice.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipCallDriverAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // r15
  char v5; // r13
  __int64 v6; // rax
  void *v7; // r12
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  int ObjectProperty; // ebx
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r9d
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  __int64 *v21; // r14
  __int64 v22; // rdi
  PVOID *v23; // rsi
  bool v24; // zf
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  const WNF_STATE_NAME *v31; // rbx
  ULONG v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // r14
  unsigned __int8 i; // bl
  _QWORD *v39; // r15
  _QWORD *j; // rsi
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rdx
  BOOL v44; // r9d
  unsigned int v45; // r11d
  int v46; // eax
  __int64 v47; // rdx
  _DWORD *v48; // rbx
  _DWORD *v49; // rsi
  __int64 v50; // rcx
  ULONG v52; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v53; // [rsp+64h] [rbp-9Ch] BYREF
  char v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v58; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _WORD v60[2]; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE v62; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v63; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *AttachedDeviceReferenceWithTag; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v67; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h]
  _QWORD v69[8]; // [rsp+E0h] [rbp-20h] BYREF
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v54 = 0;
  v62 = 0LL;
  v55 = 0;
  v58 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v60[0] = 0;
  v67 = 0LL;
  v52 = 0;
  v56 = 0;
  v63 = 0;
  memset(v69, 0, sizeof(v69));
  v6 = 6LL;
  v7 = 0LL;
  v68 = 6LL;
  DestinationString = 0LL;
  v53 = 0;
  AttachedDeviceReferenceWithTag = 0LL;
  v61 = 0;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  P = 0LL;
  Object = 0LL;
  if ( !*(_BYTE *)(BugCheckParameter2 + 688) || *(_BYTE *)(a2 + 4) )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 48);
    *(_BYTE *)(BugCheckParameter2 + 688) = 0;
    v8 = CmOpenDeviceRegKey(PiPnpRtlCtx, v9, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_44;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
      && ((int)PnpGetObjectProperty(
                 PiPnpRtlCtx,
                 *(_QWORD *)(BugCheckParameter2 + 48),
                 1,
                 (_DWORD)Handle,
                 0LL,
                 (__int64)&DEVPKEY_Device_DebuggerSafe,
                 (__int64)&v61,
                 (__int64)&v58,
                 4,
                 (__int64)&v53,
                 0) < 0
       || v61 != 7
       || v53 != 4
       || !v58) )
    {
      v10 = 53LL;
LABEL_11:
      v11 = 0LL;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
    {
      if ( PnpQueryProximityNode
        && (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  *(_QWORD *)(BugCheckParameter2 + 48),
                  1,
                  (_DWORD)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                  (__int64)&v61,
                  (__int64)&v58,
                  4,
                  (__int64)&v53,
                  0) >= 0
        && v58 <= 0xFF
        && (int)((__int64 (__fastcall *)(_QWORD, _WORD *))PnpQueryProximityNode)(v58, v60) >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = v60[0];
      }
      v12 = *(_DWORD *)(BugCheckParameter2 + 660);
      if ( v12 == -1 )
      {
        v13 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( !v13 )
        {
          *(_DWORD *)(BugCheckParameter2 + 660) = -2;
          goto LABEL_24;
        }
        v12 = *(_DWORD *)(v13 + 660);
        *(_DWORD *)(BugCheckParameter2 + 660) = v12;
      }
      if ( v12 != -2 )
      {
        v14 = *(_QWORD *)(BugCheckParameter2 + 48);
        v58 = v12;
        PnpSetObjectProperty(PiPnpRtlCtx, v14, 1, 0LL, (__int64)&DEVPKEY_Device_Numa_Node, 7, (__int64)&v58, 4, 0);
      }
    }
LABEL_24:
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(BugCheckParameter2 + 48),
                       1,
                       (_DWORD)Handle,
                       0LL,
                       (__int64)DEVPKEY_Device_PreventDriverLoad,
                       (__int64)&v61,
                       (__int64)&v67,
                       8,
                       (__int64)&v53,
                       0);
    if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
      && (int)PnpGetStableSystemBootTime(&AttachedDeviceReferenceWithTag) >= 0 )
    {
      if ( ObjectProperty != -1073741789
        && v61 == 16
        && v53 == 8
        && !PnpBootMode
        && AttachedDeviceReferenceWithTag == v67 )
      {
        goto LABEL_43;
      }
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)DEVPKEY_Device_PreventDriverLoad,
        0,
        0LL,
        0,
        0);
    }
    v16 = *(_QWORD *)(BugCheckParameter2 + 48);
    v52 = 78;
    if ( (int)CmGetDeviceRegProp(
                PiPnpRtlCtx,
                v16,
                (_DWORD)Handle,
                9,
                (__int64)&v56,
                (__int64)SourceString,
                (__int64)&v52,
                0) >= 0
      && v56 == 1
      && v52 )
    {
      RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
      if ( InitSafeBootMode )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
        {
          v52 = 256;
          Pool2 = (void *)ExAllocatePool2(256LL, 256LL, 1852141648LL);
          if ( Pool2 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *(_QWORD *)(BugCheckParameter2 + 48),
                              (_DWORD)Handle,
                              1,
                              (__int64)&v56,
                              (__int64)Pool2,
                              (__int64)&v52,
                              0);
            if ( DeviceRegProp == -1073741789 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Pool2 = (void *)ExAllocatePool2(256LL, v52, 1852141648LL);
            }
            else if ( DeviceRegProp >= 0 )
            {
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
              IopBootLog(&DestinationString);
              goto LABEL_42;
            }
          }
          IopBootLog(&DestinationString);
          if ( !Pool2 )
          {
LABEL_43:
            v8 = -1073741823;
            goto LABEL_44;
          }
LABEL_42:
          ExFreePoolWithTag(Pool2, 0);
          goto LABEL_43;
        }
        v4 = v54;
      }
      CmOpenInstallerClassRegKey(PiPnpRtlCtx, (unsigned int)SourceString, v17, v18, 131097, 0, (__int64)&v62, 0LL);
    }
    v25 = *(_QWORD *)(BugCheckParameter2 + 48);
    v52 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v25, (_DWORD)Handle, 11, (__int64)&v56, (__int64)&v55, (__int64)&v52, 0) < 0
      || v56 != 4
      || v52 != 4 )
    {
      v55 = 0;
    }
    v69[1] = a2;
    v8 = 0;
    v69[0] = BugCheckParameter2;
    v52 = 512;
    P = (PVOID)ExAllocatePool2(256LL, 512LL, 1852141648LL);
    if ( !P )
    {
      v8 = -1073741670;
      goto LABEL_105;
    }
    if ( (v55 & 0x80000) != 0 )
    {
      if ( v62 )
      {
        v26 = PnpCallDriverQueryServiceHelper(
                &P,
                &v52,
                0,
                (__int64)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v62,
                1,
                0,
                v4,
                (__int64)v69);
        v8 = v26;
        if ( v26 != -1073741772 && v26 != -1073741275 && v26 < 0 )
          goto LABEL_105;
        while ( 1 )
        {
          v27 = PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)SourceString,
                  2,
                  (_DWORD)v62,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                  (__int64)&v63,
                  (__int64)P,
                  v52,
                  (__int64)&v53,
                  0);
          if ( v27 != -1073741789 )
            break;
          if ( v53 <= v52 )
          {
            v8 = -1073741823;
            goto LABEL_105;
          }
          ExFreePoolWithTag(P, 0);
          v52 = v53;
          P = (PVOID)ExAllocatePool2(256LL, v53, 1852141648LL);
          if ( !P )
          {
            v8 = -1073741670;
            goto LABEL_73;
          }
        }
        v8 = v27;
        if ( v27 >= 0 )
        {
          if ( v63 == 4099 && (v53 & 7) == 0 && v53 )
          {
            v31 = (const WNF_STATE_NAME *)P;
            v32 = v53 >> 3;
            do
            {
              ZwUpdateWnfStateData(v31++, 0LL, 0, 0LL, 0LL, 0, 0);
              --v32;
            }
            while ( v32 );
            v10 = 56LL;
            goto LABEL_11;
          }
        }
        else
        {
          if ( v27 == -1073741772 || v27 == -1073741275 )
            v8 = 0;
LABEL_73:
          if ( v8 < 0 )
            goto LABEL_105;
        }
      }
      if ( !v69[2] )
      {
        v28 = *(_QWORD *)(BugCheckParameter2 + 48);
        v53 = 4;
        if ( (int)CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    v28,
                    (_DWORD)Handle,
                    11,
                    (__int64)&v56,
                    (__int64)&v55,
                    (__int64)&v53,
                    0) >= 0
          && v56 == 4
          && v53 == 4
          && (v55 & 0x80000) != 0 )
        {
          v29 = *(_QWORD *)(BugCheckParameter2 + 48);
          v55 &= ~0x80000u;
          CmSetDeviceRegProp(PiPnpRtlCtx, v29, (_DWORD)Handle, 11, 4, (__int64)&v55, 4, 0);
        }
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
      && ((v30 = PnpCallDriverQueryServiceHelper(
                   &P,
                   &v52,
                   19,
                   (__int64)&DEVPKEY_Device_CompoundLowerFilters,
                   *(_QWORD *)(BugCheckParameter2 + 48),
                   (__int64)Handle,
                   0,
                   1,
                   v4,
                   (__int64)v69),
           v8 = v30,
           v30 == -1073741772)
       || v30 == -1073741275) )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x4000000LL);
    }
    else if ( v8 < 0 )
    {
LABEL_105:
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
      {
LABEL_106:
        v8 = 0;
        goto LABEL_44;
      }
      if ( v8 < 0 )
      {
        if ( v8 != -1073741772 )
          goto LABEL_44;
        if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
          goto LABEL_43;
        PipClearDevNodeProblem(BugCheckParameter2);
        v5 = 1;
      }
      else if ( *(_QWORD *)(v69[5] + 8LL) )
      {
        PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
        goto LABEL_43;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x20000000) == 0 )
      {
        v35 = PnpCallDriverQueryServiceHelper(
                &P,
                &v52,
                18,
                (__int64)&DEVPKEY_Device_CompoundUpperFilters,
                *(_QWORD *)(BugCheckParameter2 + 48),
                (__int64)Handle,
                0,
                4,
                v4,
                (__int64)v69);
        v8 = v35;
        if ( v35 == -1073741772 || v35 == -1073741275 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x20000000LL);
        }
        else if ( v35 < 0 )
        {
          goto LABEL_44;
        }
      }
      if ( v62 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
      {
        v36 = PnpCallDriverQueryServiceHelper(
                &P,
                &v52,
                18,
                (__int64)&DEVPKEY_DeviceClass_CompoundUpperFilters,
                (__int64)SourceString,
                (__int64)v62,
                1,
                5,
                v4,
                (__int64)v69);
        v8 = v36;
        if ( v36 == -1073741772 || v36 == -1073741275 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x40000000LL);
        }
        else if ( v36 < 0 )
        {
          goto LABEL_44;
        }
      }
      v8 = PiDmaGuardProcessPreAddDevice(v69, Handle);
      if ( v8 >= 0 )
      {
        v37 = 0LL;
        AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                           *(_QWORD **)(BugCheckParameter2 + 32),
                                           0x65706E50u);
        for ( i = 0; i < 6u; ++i )
        {
          while ( 1 )
          {
            if ( i == 3 )
            {
              Object = IoGetAttachedDeviceReferenceWithTag(*(_QWORD **)(BugCheckParameter2 + 32), 0x65706E50u);
              if ( v5 )
              {
                if ( !v69[5] )
                  PipSetDevNodeState(BugCheckParameter2, 773);
              }
            }
            v39 = (_QWORD *)v69[i + 2];
            for ( j = v39; j; j = (_QWORD *)j[1] )
            {
              v41 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
              *(_DWORD *)(*j + 16LL) |= 0x400u;
              if ( v41 < 0 )
              {
                if ( i == 3 )
                {
                  v7 = AttachedDeviceReferenceWithTag;
                  IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v37, 0);
                  v11 = v45;
                  *(_DWORD *)(BugCheckParameter2 + 392) = v45;
                  v10 = 31LL;
                  goto LABEL_12;
                }
              }
              else
              {
                if ( i == 3 )
                  v37 = *((_QWORD *)Object + 3);
                PipSetDevNodeState(BugCheckParameter2, 773);
              }
            }
            if ( i )
              break;
            if ( !v39 )
              break;
            v42 = *(_QWORD *)(BugCheckParameter2 + 48);
            v53 = 4;
            if ( (int)CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v42,
                        (_DWORD)Handle,
                        11,
                        (__int64)&v56,
                        (__int64)&v55,
                        (__int64)&v53,
                        0) < 0
              || v56 != 4
              || v53 != 4
              || (v55 & 0x80000) == 0 )
            {
              break;
            }
            v43 = *(_QWORD *)(BugCheckParameter2 + 48);
            v55 &= ~0x80000u;
            CmSetDeviceRegProp(PiPnpRtlCtx, v43, (_DWORD)Handle, 11, 4, (__int64)&v55, 4, 0);
            i = 1;
          }
        }
        v44 = !v37 || v5;
        v7 = AttachedDeviceReferenceWithTag;
        IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v37, v44);
        v46 = PipChangeDeviceObjectFromRegistryProperties(
                *(_QWORD *)(BugCheckParameter2 + 32),
                (int)Handle,
                SourceString,
                (__int64)v62,
                v5);
        if ( v46 < 0 )
        {
          v11 = (unsigned int)v46;
          v10 = 50LL;
LABEL_12:
          PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v10, v11);
          v8 = -1073741106;
          goto LABEL_44;
        }
        v48 = (_DWORD *)(BugCheckParameter2 + 452);
        v49 = (_DWORD *)(BugCheckParameter2 + 448);
        if ( (int)IopQueryLegacyBusInformation(
                    *(_QWORD *)(BugCheckParameter2 + 32),
                    v47,
                    BugCheckParameter2 + 448,
                    BugCheckParameter2 + 452) < 0 )
        {
          *v49 = -1;
          *v48 = -16;
        }
        else
        {
          IopInsertLegacyBusDeviceNode(BugCheckParameter2, (unsigned int)*v49, (unsigned int)*v48);
        }
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v50, *(_QWORD *)(BugCheckParameter2 + 48), 23LL);
        if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
          || (v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2), v8 >= 0) )
        {
          if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
          {
            v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
            goto LABEL_44;
          }
          goto LABEL_106;
        }
      }
LABEL_44:
      v6 = 6LL;
      goto LABEL_45;
    }
    if ( v62 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
    {
      v33 = PnpCallDriverQueryServiceHelper(
              &P,
              &v52,
              19,
              (__int64)&DEVPKEY_DeviceClass_CompoundLowerFilters,
              (__int64)SourceString,
              (__int64)v62,
              1,
              2,
              v4,
              (__int64)v69);
      v8 = v33;
      if ( v33 == -1073741772 || v33 == -1073741275 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x8000000LL);
      }
      else if ( v33 < 0 )
      {
        goto LABEL_105;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
    {
      v8 = -1073741772;
    }
    else
    {
      v34 = PnpCallDriverQueryServiceHelper(
              &P,
              &v52,
              5,
              0LL,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              3,
              v4,
              (__int64)v69);
      v8 = v34;
      if ( v34 == -1073741772 || v34 == -1073741275 )
      {
        v8 = -1073741772;
        PipSetDevNodeFlags(BugCheckParameter2, 0x10000000LL);
      }
    }
    goto LABEL_105;
  }
  v8 = -1073741823;
LABEL_45:
  v21 = &v69[2];
  do
  {
    v22 = *v21;
    if ( *v21 )
    {
      do
      {
        v23 = (PVOID *)v22;
        v22 = *(_QWORD *)(v22 + 8);
        if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
          v24 = PnpUnusedBootDriversCleanedUp == 0;
        else
          v24 = PnPBootDriversInitialized == 0;
        if ( !v24 )
          PnpUnloadAttachedDriver(*v23);
        ObfDereferenceObject(*v23);
        ExFreePoolWithTag(v23, 0);
      }
      while ( v22 );
      v6 = v68;
    }
    ++v21;
    v68 = --v6;
  }
  while ( v6 );
  if ( Handle )
    ZwClose(Handle);
  if ( v62 )
    ZwClose(v62);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x65706E50u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
