/*
 * XREFs of ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0065A44
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064B58 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002560C (WPP_RECORDER_SF_dd_ea_1C002560C.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002EE34 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisGetOrCreateFilterInstanceKey(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3,
        char a4,
        unsigned __int8 *a5,
        struct _UNICODE_STRING *Destination)
{
  struct _NDIS_FILTER_BLOCK *v7; // rbx
  struct _NDIS_MINIPORT_BLOCK *v8; // r14
  int v9; // edx
  unsigned int v10; // edi
  unsigned __int16 *Pool2; // r15
  __int16 v12; // ax
  _NDIS_FILTER_BLOCK *LowerFilter; // rbx
  NTSTATUS v15; // ebx
  ULONG i; // r14d
  NTSTATUS v17; // eax
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  int v19; // eax
  NTSTATUS RegistryValues; // ebx
  wchar_t *v21; // rax
  unsigned __int16 v22; // ax
  wchar_t *v23; // rax
  NTSTATUS RegistryKey; // eax
  wchar_t *Buffer; // rcx
  char v26[8]; // [rsp+30h] [rbp-D0h]
  char v27; // [rsp+50h] [rbp-B0h]
  char v28; // [rsp+51h] [rbp-AFh]
  char v29; // [rsp+52h] [rbp-AEh]
  char v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v35; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v38; // [rsp+ACh] [rbp-54h]
  HANDLE KeyHandle; // [rsp+B0h] [rbp-50h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING Source; // [rsp+F8h] [rbp-8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+140h] [rbp+40h] BYREF

  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v7 = a2;
  v32 = (char)a3;
  v8 = a3;
  *(_QWORD *)&GuidString.Length = 0LL;
  v9 = 4;
  GuidString.Buffer = 0LL;
  v10 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Pool2 = 0LL;
  *(_QWORD *)&SourceString.Length = 6946920LL;
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&v35.Length = 0LL;
  v35.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v38 = 0;
  v33 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x57u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)a3,
      v7);
  if ( !v8->BaseMiniport )
  {
    v10 = -1073741811;
    goto LABEL_16;
  }
  *a5 = 0;
  *Destination = 0LL;
  if ( RtlStringFromGUID(&v8->BaseMiniport->InterfaceGuid, &GuidString) )
    goto LABEL_15;
  v12 = a1->Length + 2;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = GuidString.Length
                                  + SourceString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + v12;
  v28 = 1;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, DestinationString.MaximumLength, 538985550);
  if ( !DestinationString.Buffer )
  {
    v10 = -1073741670;
    goto LABEL_16;
  }
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  RtlAppendUnicodeStringToString(&DestinationString, a1);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes) )
  {
    v10 = -1073741823;
    KeyHandle = 0LL;
LABEL_19:
    RtlFreeUnicodeString(&GuidString);
    goto LABEL_20;
  }
  LowerFilter = v7->LowerFilter;
  if ( !LowerFilter )
  {
LABEL_13:
    if ( !RtlStringFromGUID(&v8->InterfaceGuid, &UnicodeString) )
    {
      String1.Length = UnicodeString.Length;
      String1.MaximumLength = UnicodeString.MaximumLength;
      String1.Buffer = (wchar_t *)ExAllocatePool2(64LL, UnicodeString.MaximumLength, 538985550);
      if ( String1.Buffer )
      {
        v27 = 1;
        v15 = RtlUpcaseUnicodeString(&String1, &UnicodeString, 0);
        RtlFreeUnicodeString(&UnicodeString);
        if ( !v15 )
          goto LABEL_40;
      }
      else
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
LABEL_14:
    LOBYTE(v7) = (_BYTE)a2;
LABEL_15:
    v10 = -1073741823;
    goto LABEL_16;
  }
  while ( (LowerFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0 )
  {
    LowerFilter = LowerFilter->LowerFilter;
    if ( !LowerFilter )
      goto LABEL_13;
  }
  String1.Length = LowerFilter->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length;
  String1.MaximumLength = String1.Length + 2;
  String1.Buffer = (wchar_t *)ExAllocatePool2(64LL, (unsigned __int16)(String1.Length + 2), 538985550);
  if ( !String1.Buffer )
    goto LABEL_34;
  v27 = 1;
  memmove(String1.Buffer, LowerFilter->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer, String1.Length);
LABEL_40:
  Pool2 = (unsigned __int16 *)ExAllocatePool2(66LL, 536LL, 538985550);
  if ( Pool2 )
  {
    for ( i = 0; i <= 0x270F; ++i )
    {
      memset(Pool2, 0, 0x218uLL);
      ResultLength = 0;
      v17 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, Pool2, 0x216u, &ResultLength);
      if ( v17 == -2147483622 )
        break;
      if ( v17 )
        goto LABEL_68;
      v35.Length = Pool2[6];
      v35.Buffer = Pool2 + 8;
      v35.MaximumLength = v35.Length + 2;
      memset(QueryTable, 0, sizeof(QueryTable));
      QueryTable[0].Flags = 1;
      QueryTable[0].Name = Pool2 + 8;
      FilterDriver = a2->FilterDriver;
      if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion > 6u
        || FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == 6
        && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u )
      {
        v19 = 256;
        v38 = 0x1000000;
        v33 = 256;
      }
      else
      {
        v19 = v33;
      }
      QueryTable[1].Flags = v19 | 0x24;
      QueryTable[1].QueryRoutine = 0LL;
      QueryTable[1].Name = (wchar_t *)L"LowerComponent";
      QueryTable[1].EntryContext = &String2;
      QueryTable[2].Name = 0LL;
      QueryTable[1].DefaultType = v38;
      RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v26 = v33;
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          1u,
          0x58u,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          RegistryValues,
          *(_QWORD *)v26);
      }
      if ( RegistryValues )
        goto LABEL_68;
      if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
      {
        *a5 = 1;
        break;
      }
      if ( String2.Buffer )
      {
        ExFreePoolWithTag(String2.Buffer, 0);
        String2.Buffer = 0LL;
      }
    }
    if ( *a5 )
      goto LABEL_64;
    if ( a4 )
    {
      if ( i > 0x270F )
        goto LABEL_59;
      *(_DWORD *)&v35.Length = 655368;
      v21 = (wchar_t *)ExAllocatePool2(64LL, 10LL, 538985550);
      v35.Buffer = v21;
      if ( !v21 )
        goto LABEL_59;
      v29 = 1;
      if ( !RtlStringCchPrintfW(v21, (unsigned __int64)v35.MaximumLength >> 1, (wchar_t *)L"%04d", i) )
      {
LABEL_64:
        v22 = GuidString.Length
            + Source.Length
            + ndisParameterStr.Length
            + ndisFilterAdapterStr.Length
            + a1->Length
            + v35.Length
            + 2;
        Destination->MaximumLength = v22;
        v23 = (wchar_t *)ExAllocatePool2(64LL, v22, 538985550);
        Destination->Buffer = v23;
        if ( v23 )
        {
          RtlCopyUnicodeString(Destination, a1);
          RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
          RtlAppendUnicodeStringToString(Destination, &ndisFilterAdapterStr);
          RtlAppendUnicodeStringToString(Destination, &GuidString);
          RtlAppendUnicodeStringToString(Destination, &Source);
          RtlAppendUnicodeStringToString(Destination, &v35);
          if ( !*a5 )
          {
            RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)Destination->Buffer);
            Buffer = Destination->Buffer;
            if ( RegistryKey )
            {
LABEL_67:
              ExFreePoolWithTag(Buffer, 0);
              *Destination = 0LL;
              goto LABEL_68;
            }
            if ( RtlWriteRegistryValue(
                   1u,
                   (PCWSTR)Destination->Buffer,
                   L"LowerComponent",
                   1u,
                   String1.Buffer,
                   String1.Length + 2) )
            {
              Buffer = Destination->Buffer;
              goto LABEL_67;
            }
          }
LABEL_60:
          LOBYTE(v8) = v32;
          goto LABEL_35;
        }
LABEL_59:
        v10 = -1073741670;
        goto LABEL_60;
      }
    }
LABEL_68:
    LOBYTE(v8) = v32;
    goto LABEL_14;
  }
LABEL_34:
  v10 = -1073741670;
LABEL_35:
  LOBYTE(v7) = (_BYTE)a2;
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    goto LABEL_19;
LABEL_20:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v27 )
    ExFreePoolWithTag(String1.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v29 )
    ExFreePoolWithTag(v35.Buffer, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1u,
      0x59u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)v8,
      (char)v7,
      v10);
  return v10;
}
