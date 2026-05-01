/*
 * XREFs of ?HampSystemSetBamWindowStateProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18008EBD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180070F5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

__int64 __fastcall HampSystemSetBamWindowStateProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v6; // edi
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[4]; // [rsp+58h] [rbp-49h] BYREF
  int v14; // [rsp+5Ch] [rbp-45h] BYREF
  NTSTATUS v15; // [rsp+60h] [rbp-41h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-39h] BYREF
  __int64 v17; // [rsp+70h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-9h] BYREF
  _DWORD InputBuffer[2]; // [rsp+C8h] [rbp+27h] BYREF
  void *v22; // [rsp+D0h] [rbp+2Fh]
  int v23; // [rsp+D8h] [rbp+37h]
  int v24; // [rsp+DCh] [rbp+3Bh]

  FileHandle = 0LL;
  v6 = (int)a4;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Bam");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v8 >= 0 )
  {
    InputBuffer[1] = 0;
    v24 = 0;
    InputBuffer[0] = 1;
    v22 = a2;
    v23 = v6;
    v8 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220004u, InputBuffer, 0x18u, 0LL, 0);
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v17 = *((_QWORD *)a1 + 4);
    v13[0] = v6;
    v14 = a3;
    v15 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v9,
      byte_1800C6702,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)v13);
  }
  return (unsigned int)v8;
}
