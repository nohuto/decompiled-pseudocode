/*
 * XREFs of ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C00663D0
 * Callers:
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0022FBC (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x1C0030B44 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064B58 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x1C00666C8 (-ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z.c)
 */

__int64 __fastcall ndisSetAllFilterDefaultParameters(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int8 a4)
{
  ULONG v4; // r15d
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rdi
  int v11; // edx
  unsigned __int16 *Pool2; // rax
  ULONG i; // edx
  NTSTATUS v14; // eax
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING v17; // [rsp+60h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+77h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  Destination.Length = 0;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 0;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  v10 = 0LL;
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x52u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
  Destination.MaximumLength = DestinationString.Length + a3->Length + 2 + a1->Length;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550);
  if ( !Destination.Buffer )
    goto LABEL_4;
  RtlCopyUnicodeString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, a1);
  RtlAppendUnicodeStringToString(&Destination, a3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) )
  {
    KeyHandle = 0LL;
    goto LABEL_17;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(66LL, 536LL, 538985550);
  v10 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x218uLL);
    for ( i = 0; ; i = v4 )
    {
      v14 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v10, 0x216u, &ResultLength);
      if ( v14 == -2147483622 )
        break;
      if ( v14 )
      {
        v9 = -1073741823;
        break;
      }
      v17.Length = v10[6];
      v17.MaximumLength = v17.Length + 2;
      v17.Buffer = v10 + 8;
      v9 = ndisSetFilterDefaultParameter(a2, KeyHandle, &v17, a4);
      if ( v9 )
        break;
      ++v4;
      memset(v10, 0, 0x218uLL);
      ResultLength = 0;
    }
  }
  else
  {
LABEL_4:
    v9 = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_17:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0x53u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
