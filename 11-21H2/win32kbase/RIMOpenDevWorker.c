/*
 * XREFs of RIMOpenDevWorker @ 0x1C004B0E0
 * Callers:
 *     RIMOpenDev @ 0x1C004AC3C (RIMOpenDev.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C004B24C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1C017D2A4 (WPP_RECORDER_AND_TRACE_SF_qdDSd.c)
 *     ApiSetGetgfSwitchInProgress @ 0x1C020DB88 (ApiSetGetgfSwitchInProgress.c)
 */

__int64 __fastcall RIMOpenDevWorker(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        ACCESS_MASK a3,
        ULONG a4,
        __int64 a5,
        unsigned int a6,
        void **FileHandle,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  char v8; // bp
  struct _OBJECT_ATTRIBUTES *v11; // rax
  unsigned int v13; // edi
  int v14; // r15d
  char v15; // si
  NTSTATUS File; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v21; // al
  int v22; // edx
  __int64 v23; // r11
  int v24; // r8d
  char v25; // r10
  unsigned int v26; // eax
  __int64 v27; // r8
  char v28; // al
  int v29; // edx
  __int64 v30; // r11
  int v31; // r8d
  char v32; // r10
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-98h]
  __int64 *FileAttributes; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER *CreateDisposition; // [rsp+38h] [rbp-80h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-48h] BYREF
  __int64 v37; // [rsp+78h] [rbp-40h] BYREF
  __int64 v38; // [rsp+80h] [rbp-38h] BYREF

  v8 = 0;
  v11 = a2;
  v13 = 0;
  v14 = 0;
  if ( a6 )
  {
    v15 = 1;
    while ( 1 )
    {
      File = ZwCreateFile(FileHandle, a3, v11, IoStatusBlock, 0LL, 0, a4, 3u, 0, 0LL, 0);
      v13 = File;
      if ( File != -1073741757 && File != -1073741790 )
        break;
      if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 && !(unsigned int)ApiSetGetgfSwitchInProgress() )
        break;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v8 = 1;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v21 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48), v17);
        LOBYTE(v22) = v8;
        WPP_RECORDER_AND_TRACE_SF_qdDSd(
          *(_QWORD *)(v23 + 24),
          v22,
          v24,
          (_DWORD)gRimLog,
          (_DWORD)AllocationSize,
          (_DWORD)FileAttributes,
          18,
          (_DWORD)CreateDisposition,
          a1,
          v25,
          v21,
          *(_QWORD *)(a1 + 216),
          v13);
      }
      v26 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48), *(unsigned __int8 *)(a1 + 48));
      LODWORD(FileAttributes) = v13;
      DbgPrintGDI(
        "RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %X..retry after 100ms",
        a1,
        v27,
        v26,
        *(_QWORD *)(a1 + 216),
        FileAttributes);
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
      if ( ++v14 >= a6 )
        return v13;
      v11 = a2;
      v8 = 0;
    }
    if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
    {
      v18 = *(unsigned __int8 *)(a1 + 48);
      v37 = *(_QWORD *)(a1 + 216);
      Interval.QuadPart = 0x1000000LL;
      v38 = RimDeviceTypeToRimInputTypeString(a1, v18);
      CreateDisposition = &Interval;
      FileAttributes = &v37;
      AllocationSize = (PLARGE_INTEGER)&v38;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v19,
        &unk_1C025CAAB);
    }
    if ( v13 == -1073741757 || v13 == -1073741790 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v15 = 0;
      }
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v28 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48), v17);
        LOBYTE(v29) = v15;
        WPP_RECORDER_AND_TRACE_SF_qdDSd(
          *(_QWORD *)(v30 + 24),
          v29,
          v31,
          (_DWORD)gRimLog,
          (_DWORD)AllocationSize,
          (_DWORD)FileAttributes,
          19,
          (_DWORD)CreateDisposition,
          a1,
          v32,
          v28,
          *(_QWORD *)(a1 + 216),
          v13);
      }
      if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
        KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
    }
  }
  return v13;
}
