/*
 * XREFs of BapdWriteEtwEvents @ 0x1403B6E4C
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1403CCD08 (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x1408087A4 (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     BapdpParseEventParts @ 0x1403B719C (BapdpParseEventParts.c)
 *     BapdRegisterEtwProvider @ 0x1403B7244 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 *     BapdpWriteEventDataToRegistry @ 0x140A5496C (BapdpWriteEventDataToRegistry.c)
 */

__int64 __fastcall BapdWriteEtwEvents(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  GUID *v3; // r14
  REGHANDLE v4; // r15
  REGHANDLE v5; // rdi
  NTSTATUS v6; // r12d
  int v7; // eax
  int *v8; // r13
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  REGHANDLE v13; // r14
  __int64 v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // eax
  char v20; // [rsp+48h] [rbp-49h]
  GUID *v21; // [rsp+50h] [rbp-41h]
  ULONG UserDataCount; // [rsp+58h] [rbp-39h] BYREF
  int Data; // [rsp+5Ch] [rbp-35h] BYREF
  REGHANDLE v24; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  REGHANDLE v26; // [rsp+78h] [rbp-19h] BYREF
  REGHANDLE RegHandle; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-1h] BYREF

  UserDataCount = 0;
  v2 = a1;
  v28 = a1 + (unsigned int)a2;
  Data = 0;
  v3 = &NullGuid;
  RegHandle = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  LOBYTE(a2) = 1;
  v21 = &NullGuid;
  DestinationString = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, a2, &RegHandle);
  if ( v6 < 0 )
    goto LABEL_35;
  v20 = 0;
  v7 = BapdRegisterEtwProvider(&BOOT_PROVIDER_GUID, 0LL, &v26);
  v4 = v26;
  v6 = v7;
  if ( v7 < 0 )
    goto LABEL_35;
  while ( v2 < v28 )
  {
    if ( *(_DWORD *)(v2 + 8) != 6 )
      goto LABEL_20;
    v8 = (int *)(v2 + 68);
    BapdpParseEventParts(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)&UserDataCount);
    v10 = (_QWORD *)(v2 + 32);
    v11 = *(_QWORD *)(v2 + 32);
    v12 = BOOTENV_ETW_PROVIDER - v11;
    if ( BOOTENV_ETW_PROVIDER == v11 )
      v12 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
    if ( v12 )
    {
      v16 = BOOT_PROVIDER_GUID - v11;
      if ( BOOT_PROVIDER_GUID == v11 )
        v16 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v2 + 40);
      if ( v16 )
      {
        v17 = *(_QWORD *)&v3->Data1 - v11;
        if ( *(_QWORD *)&v3->Data1 == v11 )
          v17 = *(_QWORD *)v3->Data4 - *(_QWORD *)(v2 + 40);
        if ( v17 )
        {
          if ( v5 )
          {
            EtwUnregister(v5);
            v24 = 0LL;
          }
          LOBYTE(v9) = *(_BYTE *)(v2 + 51) != 11;
          v19 = BapdRegisterEtwProvider(v2 + 32, v9, &v24);
          v5 = v24;
          v6 = v19;
          if ( v19 < 0 )
            goto LABEL_35;
          v13 = v24;
          v21 = (GUID *)(v2 + 32);
          if ( *(_BYTE *)(v2 + 51) == 11 )
            EtwSetInformation(v24, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
        }
        else
        {
          v13 = v5;
        }
      }
      else
      {
        v13 = v4;
        if ( !v20 && *(_BYTE *)(v2 + 51) == 11 )
        {
          EtwSetInformation(v4, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
          v20 = 1;
        }
      }
    }
    else
    {
      v13 = RegHandle;
    }
    if ( EtwEventEnabled(v13, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
    {
      v6 = EtwWriteEx(
             v13,
             (PCEVENT_DESCRIPTOR)(v2 + 48),
             0LL,
             0,
             (LPCGUID)((v2 + 16) & -(__int64)(*(_BYTE *)(v2 + 15) != 0)),
             0LL,
             UserDataCount,
             &UserData);
      if ( v6 < 0 )
        goto LABEL_35;
    }
    v14 = BOOTENV_ETW_PROVIDER - *v10;
    if ( BOOTENV_ETW_PROVIDER == *v10 )
      v14 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
    if ( v14 )
      goto LABEL_25;
    switch ( *(_WORD *)(v2 + 48) )
    {
      case 0xB:
        v15 = L"POSTTime";
LABEL_24:
        RtlInitUnicodeString(&DestinationString, v15);
        BapdpWriteEventDataToRegistry((PVOID)(v2 + 68));
LABEL_25:
        v3 = v21;
        goto LABEL_20;
      case 0x10:
        goto LABEL_53;
      case 0x14:
        if ( !*v8 )
          ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0LL);
        goto LABEL_25;
      case 0x1D:
LABEL_53:
        ExBootAppFailureStatus = *v8;
        goto LABEL_25;
      case 0x20:
        v15 = L"BootmgrUserInputTime";
        goto LABEL_24;
    }
    v3 = v21;
    if ( *(_WORD *)(v2 + 48) == 158 )
      ExBootAppErrorDiagCode = *v8;
LABEL_20:
    v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  if ( (qword_140C15C78 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BootmgrUserInputTime");
    BapdpWriteEventDataToRegistry(&Data);
    RtlInitUnicodeString(&DestinationString, L"POSTTime");
    BapdpWriteEventDataToRegistry(&Data);
  }
LABEL_35:
  if ( RegHandle )
    EtwUnregister(RegHandle);
  if ( v4 )
    EtwUnregister(v4);
  if ( v5 )
    EtwUnregister(v5);
  return (unsigned int)v6;
}
