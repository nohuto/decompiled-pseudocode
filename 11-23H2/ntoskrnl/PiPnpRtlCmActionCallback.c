/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x140788B20
 * Callers:
 *     <none>
 * Callees:
 *     _CmClassPropertyRead @ 0x14020BB18 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyRead @ 0x14022B3E4 (_CmDevicePropertyRead.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     _CmDevicePropertyWrite @ 0x14031E7F8 (_CmDevicePropertyWrite.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memcmp @ 0x1403DA350 (memcmp.c)
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x1405617E8 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     _CmClassPropertyWrite @ 0x140673E28 (_CmClassPropertyWrite.c)
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBEA4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CC080 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1406CD45C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1406CF6C0 (RtlGUIDFromString.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406D43D4 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8120 (PiDmGetObject.c)
 *     PnpIsNullGuid @ 0x140786834 (PnpIsNullGuid.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407880B4 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1407890E0 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140789228 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140789314 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140789358 (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpSetObjectProperty @ 0x140796B7C (_PnpSetObjectProperty.c)
 *     PiDmListAddObject @ 0x1407BE520 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C21F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1407FBADC (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1407FBD5C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x1407FC004 (PiDmGetCmObjectListFromCache.c)
 *     PiDmListAddList @ 0x140882474 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408827B0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14088438C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x1408843F0 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14095A324 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14095A368 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14095A3C8 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14095A474 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A5AC (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14095A85C (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x14095AD6C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14095AEBC (PiDmListRemoveObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const wchar_t *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // eax
  void *Pool2; // r12
  int v23; // r9d
  __int64 v24; // rcx
  int DeviceRegProp; // eax
  int v26; // esi
  bool v27; // sf
  unsigned int v28; // eax
  _WORD *v29; // rdx
  int v30; // eax
  __int64 v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  size_t v37; // rsi
  int v38; // eax
  char *v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r14d
  __int64 v44; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int v46; // ebx
  unsigned int v47; // eax
  __int64 v48; // r9
  int v49; // r9d
  __int64 v50; // rcx
  WCHAR *v51; // rsi
  bool v52; // al
  __int64 v53; // r8
  bool IsNullGuid; // al
  __int64 v55; // r8
  _QWORD *v56; // rax
  _DWORD *v57; // rdx
  _QWORD *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  int v62; // eax
  int v63; // eax
  int Object; // esi
  __int64 *v65; // r14
  __int64 v66; // rcx
  _QWORD *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  char v72[8]; // [rsp+50h] [rbp-39h] BYREF
  size_t Size; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  __int64 v75; // [rsp+70h] [rbp-19h]
  char v76; // [rsp+78h] [rbp-11h]
  int v77; // [rsp+79h] [rbp-10h]
  __int16 v78; // [rsp+7Dh] [rbp-Ch]
  char v79; // [rsp+7Fh] [rbp-Ah]
  GUID Guid; // [rsp+80h] [rbp-9h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v18 = a4 - 14;
    if ( !v18 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          if ( *(int *)a6 < 0 )
            return 0;
          v67 = *(_QWORD **)(a6 + 8);
          v72[0] = 0;
          v68 = v67[1];
          if ( v68 )
          {
            if ( *v67 )
            {
              PiDmListRemoveObject(4LL, v68, *v67, v72);
              if ( v72[0] )
                PiDmListRemoveList(v69, v67[1], v70, *v67);
            }
          }
        }
        else
        {
          if ( a3 != 6 || *(int *)a6 < 0 )
            return 0;
          v67 = *(_QWORD **)(a6 + 8);
          v71 = v67[1];
          if ( v71 && *v67 )
            PiDmListRemoveObject(6LL, v71, *v67, v72);
        }
        PiPnpRtlFreePanelRemoveInfo(v67);
        return 0;
      }
      if ( a3 == 5 )
      {
        v66 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(v66, a2, &Size);
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        v50 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(v50, a2, &Size);
      }
LABEL_114:
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList >= 0 )
      {
        *(_QWORD *)(a6 + 8) = Size;
        return v9;
      }
      goto LABEL_31;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_30:
      if ( FilteredDeviceInterfaceList != -1073741802 )
      {
LABEL_31:
        *(_DWORD *)a6 = FilteredDeviceInterfaceList;
        return (unsigned int)-1073741536;
      }
      return 0;
    }
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      Size = 0LL;
      Object = PiDmGetObject(5LL, (__int64)a2, &Size);
      if ( Object < 0 )
        goto LABEL_167;
      v65 = (__int64 *)Size;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v75 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = a1;
      do
      {
        v76 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   4,
                   v65,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)&DestinationString);
      }
      while ( Object >= 0 && v76 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      Size = 0LL;
      Object = PiDmGetObject(6LL, (__int64)a2, &Size);
      if ( Object < 0 )
        goto LABEL_167;
      v65 = (__int64 *)Size;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v75 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = a1;
      do
      {
        v76 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   6,
                   v65,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)&DestinationString);
      }
      while ( Object >= 0 && v76 );
    }
    if ( v65 )
      PiDmObjectRelease((char *)v65);
LABEL_167:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      *(_QWORD *)&Guid.Data1 = 0LL;
      Size = 0LL;
      v37 = 0LL;
      v72[0] = 0;
      v38 = PiDmGetObject(5LL, (__int64)a2, &Guid);
      v39 = *(char **)&Guid.Data1;
      if ( v38 >= 0 )
      {
        v40 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &Size);
        v37 = Size;
        if ( v40 >= 0 )
        {
          PiDmListAddObject(4LL, v39, Size, v72);
          if ( !v72[0] )
            PiDmListAddList(v41, v39, v42, v37);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      *(_QWORD *)&Guid.Data1 = 0LL;
      Size = 0LL;
      v37 = 0LL;
      v62 = PiDmGetObject(6LL, (__int64)a2, &Guid);
      v39 = *(char **)&Guid.Data1;
      if ( v62 >= 0 )
      {
        v63 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &Size);
        v37 = Size;
        if ( v63 >= 0 )
          PiDmListAddObject(6LL, v39, Size, v72);
      }
    }
    if ( v39 )
      PiDmObjectRelease(v39);
    if ( !v37 )
      return 0;
    goto LABEL_92;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v28 = CmMapCmObjectTypeToPnpObjectType(a3);
      v30 = PiDmAddCacheReferenceForObject(v28, v29, 0LL);
      *(_DWORD *)a6 = v30;
      return (v30 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v35 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v35, v36);
      return 0;
    }
    Size = 0LL;
    v43 = CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v43, v44, &Size) < 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    v37 = Size;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v37, 0LL);
    v46 = *(_DWORD *)(v37 + 32);
    *(_DWORD *)(v37 + 32) = v46 | 1;
    ExReleasePushLockEx((__int64 *)v37, 0LL);
    KeLeaveCriticalRegion();
    if ( (v46 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject(v43, a2);
LABEL_92:
    PiDmObjectRelease((char *)v37);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v51 = *(WCHAR **)(a6 + 8);
        DestinationString = 0LL;
        Guid = 0LL;
        RtlInitUnicodeString(&DestinationString, v51 + 2);
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
          Guid = 0LL;
        if ( *(int *)a6 < 0 )
        {
          if ( (byte_140C0E20A & 0x10) != 0 )
          {
            IsNullGuid = PnpIsNullGuid(&Guid);
            McTemplateK0zjdd_EtwWriteTransfer(
              (unsigned int)-!IsNullGuid,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceDelete_Failure,
              v55,
              a2,
              (unsigned __int64)&Guid & -(__int64)!IsNullGuid,
              *(_DWORD *)v51,
              *(_DWORD *)a6);
          }
        }
        else if ( (byte_140C0E20A & 8) != 0 )
        {
          v52 = PnpIsNullGuid(&Guid);
          McTemplateK0zjdd_EtwWriteTransfer(
            (unsigned int)-!v52,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceDelete_Success,
            v53,
            a2,
            (unsigned __int64)&Guid & -(__int64)!v52,
            *(_DWORD *)v51,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 )
        {
          if ( v51[2] )
          {
            Size = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              a1,
              (_DWORD)v51 + 4,
              2,
              0LL,
              (__int64)DEVPKEY_DeviceClass_LastDeleteDate,
              16,
              (__int64)&Size,
              8,
              0);
          }
          if ( CmIsRootEnumeratedDevice(a2) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            if ( DestinationString.Length >= 2u )
            {
              if ( *DestinationString.Buffer )
              {
                v56 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
                if ( v56 )
                {
                  v57 = (_DWORD *)v56[8];
                  if ( v57 )
                    *v57 |= 1u;
                  ObfDereferenceObject(v56);
                }
              }
            }
          }
        }
        if ( v51 )
          ExFreePoolWithTag(v51, 0x47706E50u);
      }
      else if ( a3 == 3 )
      {
        v58 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v58 )
        {
          v59 = v58[1];
          if ( v59 )
            PiDmListRemoveObject(0LL, v59, *v58, 0LL);
          v60 = v58[2];
          if ( v60 )
            PiDmListRemoveObject(1LL, v60, *v58, 0LL);
          v61 = v58[3];
          if ( v61 )
            PiDmListRemoveObject(2LL, v61, *v58, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v58);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      Size = 0LL;
      FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      Size = 0LL;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &Size);
    }
    goto LABEL_114;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
    goto LABEL_30;
  }
  v13 = v12 - 5;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v9;
    if ( a5 != 1 )
    {
      if ( *(int *)a6 < 0 )
        return v9;
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        *(_DWORD *)(a6 + 28),
        *(PCWSTR *)(a6 + 32),
        *(_DWORD *)(a6 + 40));
      if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        v32 = *(_QWORD **)(a6 + 8);
        if ( *v32 )
        {
          v33 = v32[1];
          if ( v33 )
            PiDmListRemoveObject(5LL, v33, *v32, 0LL);
          v34 = v32[2];
          if ( v34 )
            PiDmListAddObject(5LL, v34, *v32, 0LL);
        }
        PiPnpRtlFreeInstallerClassChangeInfo(v32);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v21 = *(_DWORD *)(a6 + 40), Pool2 = 0LL, Guid.Data1 = 0, !v21)
       || (Pool2 = (void *)ExAllocatePool2(256LL, v21, 1198550608LL)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_61:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_62:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v31 = 0LL;
        Size = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v31 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v31, &Size);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = Size;
          return v9;
        }
        goto LABEL_31;
      }
      v47 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v47, v48);
      v27 = (v9 & 0x80000000) != 0;
LABEL_50:
      if ( v27 )
        return v9;
      goto LABEL_62;
    }
    LODWORD(Size) = *(_DWORD *)(a6 + 40);
    if ( a3 == 1 )
    {
      v23 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v23 - 1) > 0x24 || !CmDevicePropertyRead(a3 - 1, v23) || CmDevicePropertyWrite(v24, v23) )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)a2,
                          *(_QWORD *)(a6 + 16),
                          v23,
                          (__int64)&Guid,
                          (__int64)Pool2,
                          (__int64)&Size,
                          0);
        goto LABEL_42;
      }
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_94;
      v49 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v49 - 1) > 0x24 || !CmClassPropertyRead(v49) || CmClassPropertyWrite(v49) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)a2,
                          *(_QWORD *)(a6 + 16),
                          v49,
                          (__int64)&Guid,
                          (__int64)Pool2,
                          (__int64)&Size);
LABEL_42:
        v26 = DeviceRegProp;
        if ( DeviceRegProp >= 0 )
        {
          if ( Guid.Data1 != *(_DWORD *)(a6 + 28) || (_DWORD)Size != *(_DWORD *)(a6 + 40) )
            goto LABEL_93;
          if ( !memcmp(Pool2, *(const void **)(a6 + 32), (unsigned int)Size) )
          {
LABEL_46:
            *(_DWORD *)a6 = v26;
            v9 = -1073741536;
            goto LABEL_47;
          }
        }
        if ( v26 == -1073741275 )
        {
          if ( !*(_DWORD *)(a6 + 40) )
            goto LABEL_46;
LABEL_94:
          v9 = 0;
LABEL_47:
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
          v27 = (v9 & 0x80000000) != 0;
          if ( v9 )
            goto LABEL_50;
          goto LABEL_61;
        }
LABEL_93:
        if ( v26 == -1073741790 )
          goto LABEL_46;
        goto LABEL_94;
      }
    }
    v26 = -1073741790;
    goto LABEL_46;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    return 0;
  }
  if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
    goto LABEL_14;
  FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                  a3,
                                  (_DWORD)a2,
                                  a3,
                                  *(_DWORD *)(a6 + 24),
                                  *(_QWORD *)(a6 + 32),
                                  *(_QWORD *)(a6 + 40),
                                  *(_QWORD *)(a6 + 48));
  if ( FilteredDeviceInterfaceList >= 0
    || FilteredDeviceInterfaceList == -1073741789
    || FilteredDeviceInterfaceList == -1073741275
    || FilteredDeviceInterfaceList == -1073741772 )
  {
    goto LABEL_31;
  }
  v9 = 0;
LABEL_14:
  if ( !*(_QWORD *)(a6 + 16) )
  {
    v15 = CmMapCmObjectTypeToPnpObjectType(a3);
    PiPnpRtlCacheObjectBaseKey(a1, a2, v15, v16);
  }
  return v9;
}
