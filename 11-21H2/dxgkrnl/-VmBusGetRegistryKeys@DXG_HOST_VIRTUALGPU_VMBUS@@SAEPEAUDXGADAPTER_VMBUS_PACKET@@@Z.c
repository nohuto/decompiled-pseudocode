/*
 * XREFs of ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E6A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0019CC4 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C004A2B4 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0051310 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C7B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1C0301D90 (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0301DD4 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0303A38 (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0304254 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetRegistryKeys(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rbx
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // r9
  __int64 v5; // r13
  unsigned int v6; // r14d
  _DWORD *v7; // r15
  unsigned int *v8; // r12
  __int64 v9; // rsi
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  const wchar_t *v11; // r9
  NTSTATUS v12; // eax
  wchar_t *v13; // r8
  wchar_t *v14; // r9
  __int16 v15; // r10
  __int64 v16; // rdx
  __int16 v17; // ax
  size_t v18; // rcx
  NTSTATUS inserted; // eax
  int v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // r9
  ULONG v24; // ebx
  ULONG Values; // ecx
  ULONG v26; // r13d
  __int64 v27; // rax
  NTSTATUS v28; // eax
  unsigned int *v29; // rbx
  int appended; // eax
  const wchar_t *v31; // r9
  unsigned int v32; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  __int64 ResultLengtha; // [rsp+28h] [rbp-E0h]
  ULONG v36; // [rsp+30h] [rbp-D8h]
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *ppszDest; // [rsp+78h] [rbp-90h] BYREF
  size_t pcchDestLength; // [rsp+80h] [rbp-88h] BYREF
  size_t pcchDest; // [rsp+88h] [rbp-80h] BYREF
  wchar_t *v43[2]; // [rsp+90h] [rbp-78h] BYREF
  void *DeviceRegKey; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v46[8]; // [rsp+D8h] [rbp-30h] BYREF
  DXGPUSHLOCK *v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E8h] [rbp-20h]
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+F0h] [rbp-18h] BYREF
  char v50; // [rsp+128h] [rbp+20h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v47);
  v2 = *((_QWORD *)v1 + 10);
  v3 = 0;
  v48 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 5761LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5761LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_GETREGISTRYKEYS>((__int64)v1);
  if ( !v5 )
    goto LABEL_60;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v50;
  v6 = 130040;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  v43[1] = (wchar_t *)v43;
  v43[0] = (wchar_t *)v43;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  v7 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = (unsigned int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL, v4);
  if ( v8 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v1 + 10) + 16LL)
                                                                             + 216LL));
    v9 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 2u, 0x20019u, &DeviceRegKey);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)v9 >= 0 )
    {
      v12 = RtlUnicodeStringCopyString(&DestinationString, (wchar_t *)(v5 + 24));
      v9 = v12;
      if ( v12 >= 0 )
      {
        ppszDest = 0LL;
        pcchDest = 0LL;
        pcchDestLength = 0LL;
        LODWORD(v9) = RtlUnicodeStringValidateDestWorker(
                        &DestinationString,
                        &ppszDest,
                        &pcchDest,
                        &pcchDestLength,
                        (const size_t)ResultLength,
                        v36);
        if ( (int)v9 >= 0 )
        {
          v15 = pcchDestLength;
          v13 = (wchar_t *)&unk_1C0102218;
          v16 = 0x7FFFLL;
          LODWORD(v9) = 0;
          v14 = &ppszDest[pcchDestLength];
          v17 = 0;
          v18 = pcchDest - pcchDestLength;
          if ( pcchDest != pcchDestLength )
          {
            while ( v16 )
            {
              if ( *v13 )
              {
                *v14++ = *v13++;
                --v16;
                ++v17;
                if ( --v18 )
                  continue;
              }
              if ( !v18 && v16 && *v13 )
                LODWORD(v9) = -2147483643;
              break;
            }
          }
          DestinationString.Length = 2 * (v15 + v17);
        }
        if ( (int)v9 < 0 )
        {
          WdLogSingleEntry1(2LL, (int)v9);
          v11 = L"Failed to append null char to CurrentRegistryPath for VmBusGetRegistryKeys (status = 0x%I64x).";
          ResultLengtha = (int)v9;
LABEL_9:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, ResultLengtha, 0LL, 0LL, 0LL, 0LL);
LABEL_52:
          v1 = a1;
          v6 = 130040;
          goto LABEL_53;
        }
        inserted = DXG_REGISTRY_KEY_LIST::InsertHead(
                     (DXG_REGISTRY_KEY_LIST *)v43,
                     &DestinationString,
                     (__int64)v13,
                     (__int64)v14);
        v9 = inserted;
        if ( inserted >= 0 )
        {
          while ( 1 )
          {
            if ( (wchar_t **)v43[0] == v43 )
              goto LABEL_51;
            v20 = DXG_REGISTRY_KEY_LIST::ReadNextPath(v43, &DestinationString);
            v9 = v20;
            if ( v20 < 0 )
            {
              WdLogSingleEntry1(2LL, v20);
              v31 = L"Failed to initialize subkey string for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_50;
            }
            ObjectAttributes.RootDirectory = DeviceRegKey;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v21 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
            v9 = v21;
            if ( v21 < 0 )
              break;
            LODWORD(ppszDest) = 0;
            v22 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, (PULONG)&ppszDest);
            v9 = v22;
            if ( v22 < 0 )
            {
              WdLogSingleEntry1(2LL, v22);
              v31 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
LABEL_50:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_51:
              v7 = 0LL;
              goto LABEL_52;
            }
            v24 = KeyInformation.MaxValueDataLen + 2 * (KeyInformation.MaxValueNameLen + 12);
            LODWORD(pcchDest) = v24;
            v7 = (_DWORD *)operator new[](v24, 0x4B677844u, 256LL, v23);
            if ( !v7 )
            {
              LODWORD(v9) = -1073741801;
              WdLogSingleEntry1(6LL, 5871LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Cannot allocate memory for KEY_VALUE_FULL_INFORMATION",
                5871LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_52;
            }
            Values = KeyInformation.Values;
            v26 = 0;
            v27 = *v8;
            if ( KeyInformation.Values )
            {
              while ( (_DWORD)v27 != 42 )
              {
                memset(v7, 0, v24);
                LODWORD(pcchDestLength) = 0;
                v28 = ZwEnumerateValueKey(KeyHandle, v26, KeyValueFullInformation, v7, v24, (PULONG)&pcchDestLength);
                v9 = v28;
                if ( v28 < 0 )
                {
                  WdLogSingleEntry1(2LL, v28);
                  v11 = L"Failed to Enumerate Value for VmBusGetRegistryKeys (status = 0x%I64x).";
                  goto LABEL_8;
                }
                v29 = &v8[774 * *v8];
                RtlStringCbCopyUnicodeString((char *)v29 + 2056, 0x208uLL, &DestinationString);
                memmove(v29 + 644, v7 + 5, (unsigned int)v7[4]);
                memmove(v29 + 2, (char *)v7 + (unsigned int)v7[2], (unsigned int)v7[3]);
                ++v26;
                v29[774] = v7[1];
                v29[775] = v7[3];
                v24 = pcchDest;
                v27 = *v8 + 1;
                *v8 = v27;
                Values = KeyInformation.Values;
                if ( v26 >= KeyInformation.Values )
                  goto LABEL_36;
              }
              WdLogSingleEntry1(2LL, (unsigned int)v9);
              v11 = L"Maximum number of KeyValues reached, aborting VmBusGetRegistryKeys (status = 0x%I64x).";
              ResultLengtha = (unsigned int)v9;
              goto LABEL_9;
            }
LABEL_36:
            if ( !KeyInformation.SubKeys && !Values )
            {
              RtlStringCbCopyUnicodeString((char *)&v8[774 * v27 + 514], 0x208uLL, &DestinationString);
              ++*v8;
            }
            appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys(
                         (DXG_REGISTRY_KEY_LIST *)v43,
                         KeyHandle,
                         &KeyInformation,
                         &DestinationString);
            v9 = appended;
            if ( appended < 0 )
            {
              WdLogSingleEntry1(2LL, appended);
              v11 = L"Failed to Append SubKeys for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_8;
            }
            if ( KeyHandle )
              ZwClose(KeyHandle);
            operator delete[](v7);
            KeyHandle = 0LL;
          }
          WdLogSingleEntry1(2LL, v21);
          v31 = L"Failed to open PnP registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
          goto LABEL_50;
        }
        WdLogSingleEntry1(2LL, inserted);
        v11 = L"Failed to insert root registry key name into list for VmBusGetRegistryKeys (status = 0x%I64x).";
      }
      else
      {
        WdLogSingleEntry1(2LL, v12);
        v11 = L"Failed to copy root registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      v11 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
    }
LABEL_8:
    ResultLengtha = v9;
    goto LABEL_9;
  }
  LODWORD(v9) = -1073741801;
  WdLogSingleEntry1(6LL, 5781LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
    5781LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_53:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v32 = *v8;
  v8[1] = v9;
  if ( v32 < 0x2A )
    v6 = 3096 * v32 + 8;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), v8, v6);
  operator delete[](v8);
  operator delete[](v7);
  v3 = 1;
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v43);
LABEL_60:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
  return v3;
}
