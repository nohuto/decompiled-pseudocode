/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x140812494
 * Callers:
 *     IopGetRootDevices @ 0x140812228 (IopGetRootDevices.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     PpDevNodeInsertIntoTree @ 0x140366BB4 (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407901CC (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140795568 (PnpClearDeviceTemporaryProperties.c)
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14079BAC4 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PpDeviceRegistration @ 0x1407CF834 (PpDeviceRegistration.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8BB4 (PnpIsDeviceInstanceEnabled.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1407D9220 (PpDevCfgProcessDeviceOperations.c)
 *     PipAllocateDeviceNode @ 0x1407DA980 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E2018 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140801500 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x1408127CC (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PnpAllocateDeviceInstancePath @ 0x140812808 (PnpAllocateDeviceInstancePath.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140812848 (IopCreateRootEnumeratedDeviceObject.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // edi
  _QWORD *v7; // rax
  void *v8; // rdx
  __int64 result; // rax
  int DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v11; // r15
  _QWORD *v12; // rcx
  char *v13; // rdi
  int DeviceRegProp; // eax
  __int16 v15; // ax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r12
  PVOID v19; // r12
  int v20; // edi
  unsigned int v21; // edi
  void *Pool2; // rax
  void *v23; // r14
  __int64 FailedInstallProblemStatus; // r8
  __int64 v25; // rdx
  int v26; // eax
  PVOID v27; // r12
  int v28; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF
  PVOID v32; // [rsp+58h] [rbp-8h] BYREF
  int v33; // [rsp+B0h] [rbp+50h] BYREF
  int v34; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v34 = 0;
  v29 = 0;
  v32 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v20 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v20 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v21 = 8 * v6 + 1024;
    Pool2 = (void *)ExAllocatePool2(256LL, v21, 1684303952LL);
    v23 = Pool2;
    if ( !Pool2 )
    {
LABEL_66:
      DeviceInstancePath = -1073741670;
      goto LABEL_67;
    }
    memmove(Pool2, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v21 >> 3;
    *(_QWORD *)(a3 + 16) = v23;
  }
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x746C6644u);
  Object = v7;
  if ( v7 )
  {
    if ( !(unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v7, v7) )
    {
      ObfDereferenceObject(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&Object);
  if ( DeviceInstancePath < 0 )
    goto LABEL_67;
  v11 = (struct _DEVICE_OBJECT *)Object;
  v12 = Object;
  *((_DWORD *)Object + 12) |= 0x1000u;
  *(_DWORD *)(v12[39] + 32LL) |= 0x10u;
  if ( (unsigned int)PipAllocateDeviceNode((__int64)v12, (__int64)&v32) == -1073740946 || (v13 = (char *)v32) == 0LL )
  {
    IoDeleteDevice(v11);
    goto LABEL_66;
  }
  DeviceInstancePath = PnpAllocateDeviceInstancePath(v32, (unsigned int)SourceString->Length + 2);
  if ( DeviceInstancePath >= 0 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 40), SourceString);
    PipSetDevNodeFlags((__int64)v13, 17);
    PipSetDevNodeState((__int64)v13, 772);
    PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v13);
    ObfReferenceObject(v11);
    v33 = 0;
    v28 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *((_QWORD *)v13 + 6),
                      (__int64)KeyHandle,
                      11,
                      (__int64)&v34,
                      (__int64)&v33,
                      (__int64)&v28,
                      0);
    if ( DeviceRegProp < 0 )
    {
      FailedInstallProblemStatus = 3221226021LL;
      if ( DeviceRegProp != -1073741275 )
        goto LABEL_18;
      v25 = 1LL;
    }
    else
    {
      if ( v34 == 4 && v28 == 4 )
      {
        v15 = v33;
      }
      else
      {
        v15 = 0;
        v33 = 0;
      }
      if ( (v15 & 0x20) != 0 )
      {
        FailedInstallProblemStatus = 0LL;
        v25 = 18LL;
      }
      else if ( (v15 & 0x2000) != 0 )
      {
        FailedInstallProblemStatus = 0LL;
        v25 = 16LL;
      }
      else
      {
        if ( (v15 & 0x40) == 0 )
        {
LABEL_18:
          if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
          {
            v19 = P;
            if ( *((_DWORD *)P + 1) == 4
              && *((_DWORD *)P + 3) >= 4u
              && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            {
              PipSetDevNodeFlags((__int64)v13, 256);
            }
            ExFreePoolWithTag(v19, 0);
          }
          PnpQueryAndSaveDeviceNodeCapabilities((__int64)v13);
          if ( (*((_DWORD *)v13 + 140) & 0x4000) != 0
            && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 1) )
          {
            PipClearDevNodeProblem(v13);
            PipSetDevNodeProblem(v13, 29LL, 0LL);
          }
          v16 = *((_DWORD *)v13 + 99) & 0x6000;
          if ( PnpBootMode )
          {
            *((_DWORD *)v13 + 176) |= 0x1000u;
            v29 = 2;
          }
          PnpClearDeviceTemporaryProperties(*((_QWORD *)v13 + 6));
          if ( (v33 & 1) == 0 && (*((_DWORD *)v13 + 140) & 0x4000) == 0 )
          {
            if ( v16 )
            {
              if ( PiDevCfgMode )
                PiDevCfgProcessDevice(v13, KeyHandle, v29);
            }
            else
            {
              PpDevCfgProcessDeviceOperations((__int64)v13, KeyHandle);
            }
          }
          if ( (*((_DWORD *)v13 + 99) & 0x2000) != 0 && ((v26 = *((_DWORD *)v13 + 101), v26 == 22) || v26 == 29) )
          {
            v18 = (__int64)(v13 + 40);
          }
          else
          {
            v18 = (__int64)(v13 + 40);
            if ( !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, (unsigned __int16 *)v13 + 20, 1) )
            {
              PipClearDevNodeProblem(v13);
              PipSetDevNodeProblem(v13, 22LL, 0LL);
            }
          }
          LOBYTE(v17) = 1;
          PpDeviceRegistration(v18, v17, (__int64)(v13 + 56), 0);
          PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v13 + 4), v18);
          v32 = 0LL;
          if ( (int)PnpGetDeviceResourcesFromRegistry((__int64)v11, 0, 4, &v32, &v29) >= 0 )
          {
            v27 = v32;
            if ( v32 )
            {
              if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                          4LL,
                          *((_QWORD *)v13 + 4),
                          v32) >= 0 )
                PipSetDevNodeFlags((__int64)v13, 64);
              ExFreePoolWithTag(v27, 0);
            }
          }
          ObfReferenceObject(v11);
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v11;
          goto LABEL_6;
        }
        FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                     *((_QWORD *)v13 + 6),
                                                     (__int64)KeyHandle);
        v25 = 28LL;
      }
    }
    PipSetDevNodeProblem(v13, v25, FailedInstallProblemStatus);
    goto LABEL_18;
  }
  IoDeleteDevice(v11);
LABEL_67:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
