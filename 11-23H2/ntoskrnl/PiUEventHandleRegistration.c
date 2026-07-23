/*
 * XREFs of PiUEventHandleRegistration @ 0x14077F88C
 * Callers:
 *     PiUEventHandleIoctl @ 0x14077F45C (PiUEventHandleIoctl.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14022C750 (RtlStringCchLengthW.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x1402AFB30 (PsGetCurrentThreadProcessId.c)
 *     PiUEventHashStringIntoBucket @ 0x14031D148 (PiUEventHashStringIntoBucket.c)
 *     PiUEventHashGuidIntoBucket @ 0x14031D1A0 (PiUEventHashGuidIntoBucket.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EE78 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14077F2E4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventInitClientRegistrationContext @ 0x140781EC4 (PiUEventInitClientRegistrationContext.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char v5; // bp
  __int64 inited; // rdi
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  void **v12; // r14
  size_t v13; // r11
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rdx
  __int64 *v18; // rax
  int v20; // ecx
  int v21; // ecx
  char *v22; // rax
  __int64 *v23; // rcx
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  char *v27; // rcx
  __int64 *v28; // rax
  int Object; // eax
  unsigned int v30; // eax
  char *v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v34[6]; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v33 = 0LL;
  v5 = 0;
  v34[0] = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v9 = -1073741811;
    goto LABEL_67;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v9 = -1073741670;
LABEL_67:
    inited = 0LL;
    goto LABEL_24;
  }
  *(_QWORD *)(inited + 48) = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 56));
  v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v9 < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_51;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_51;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_51;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_51;
  v12 = (void **)(a2 + 536);
  if ( v10 == 1 && (((unsigned __int64)*v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_51;
  v13 = 200LL;
  if ( v10 == 2 )
  {
    v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v13, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_51;
  }
  *(_DWORD *)(inited + 132) = *(_DWORD *)(a2 + 528);
  v14 = *(_DWORD *)(a2 + 528);
  if ( !v14 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)(inited + 24) = *(_OWORD *)v12;
    goto LABEL_17;
  }
  v20 = v14 - 1;
  if ( v20 )
  {
    v24 = v20 - 1;
    if ( !v24 || v24 == 1 )
    {
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        Object = PiDmGetObject(1LL, a2 + 536, (_QWORD *)(inited + 24));
        v9 = Object;
        if ( Object < 0 )
          goto LABEL_52;
      }
      goto LABEL_17;
    }
LABEL_51:
    v9 = -1073741811;
    goto LABEL_52;
  }
  if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v12, &v33, v34) < 0 )
    goto LABEL_51;
  v9 = PiDmGetObject(1LL, *(_QWORD *)(v33 + 8), (_QWORD *)(inited + 24));
  if ( v9 < 0 )
    goto LABEL_52;
  *(_QWORD *)(inited + 32) = v34[0];
  *(_BYTE *)(inited + 40) = 0;
LABEL_17:
  *(_QWORD *)a2 = *(_QWORD *)(inited + 88);
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v15 = *(_DWORD *)(a2 + 528);
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v16 = 13;
    else
      v16 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
    v17 = (char *)&PiUEventDevInterfaceClientList + 16 * v16;
    v18 = (__int64 *)*((_QWORD *)v17 + 1);
    if ( (char *)*v18 == v17 )
    {
      ++PiUEventDevInterfaceClientCount;
      *(_QWORD *)inited = v17;
      *(_QWORD *)(inited + 8) = v18;
      *v18 = inited;
      *((_QWORD *)v17 + 1) = inited;
LABEL_22:
      v5 = 1;
      goto LABEL_23;
    }
    goto LABEL_65;
  }
  v21 = v15 - 1;
  if ( !v21 )
  {
    v22 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(*(_QWORD *)(inited + 24) + 16LL));
    v23 = (__int64 *)*((_QWORD *)v22 + 1);
    if ( (char *)*v23 == v22 )
    {
      ++PiUEventDevHandleClientCount;
      *(_QWORD *)inited = v22;
      *(_QWORD *)(inited + 8) = v23;
      *v23 = inited;
      *((_QWORD *)v22 + 1) = inited;
      goto LABEL_22;
    }
LABEL_65:
    __fastfail(3u);
  }
  v25 = v21 - 1;
  if ( !v25 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v26 = 13;
    else
      v26 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
    v27 = (char *)&PiUEventDevInstanceClientList + 16 * v26;
    v28 = (__int64 *)*((_QWORD *)v27 + 1);
    if ( (char *)*v28 == v27 )
    {
      ++PiUEventDevInstanceClientCount;
      *(_QWORD *)inited = v27;
      *(_QWORD *)(inited + 8) = v28;
      *v28 = inited;
      *((_QWORD *)v27 + 1) = inited;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  if ( v25 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v30 = 13;
    else
      v30 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
    v31 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v30;
    v32 = (__int64 *)*((_QWORD *)v31 + 1);
    if ( (char *)*v32 == v31 )
    {
      ++PiUEventDevInstancePropertyClientCount;
      *(_QWORD *)inited = v31;
      *(_QWORD *)(inited + 8) = v32;
      *v32 = inited;
      *((_QWORD *)v31 + 1) = inited;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  v9 = -1073741811;
LABEL_23:
  ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  if ( v9 < 0 )
  {
LABEL_52:
    PiUEventFreeClientRegistrationContext((char *)inited, v5);
    goto LABEL_67;
  }
LABEL_24:
  *(_QWORD *)(a1 + 32) = inited;
  return (unsigned int)v9;
}
