/*
 * XREFs of RmSetProcessManagement @ 0x18001B6F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800011A8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@543@Z @ 0x180001294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U2@U1@@-$.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012D24 (-RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcContextLockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013518 (-RmpProcContextLockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcContextUnlockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013D48 (-RmpProcContextUnlockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcEntryDereference@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x18001407C (-RmpProcEntryDereference@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 *     ?RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180014CB8 (-RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@.c)
 *     ?RmpProcPropertiesValidateAndCapture@@YAJPEAU_RM_PROC_PROPERTIES@@0@Z @ 0x180014E28 (-RmpProcPropertiesValidateAndCapture@@YAJPEAU_RM_PROC_PROPERTIES@@0@Z.c)
 */

__int64 __fastcall RmSetProcessManagement(
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1,
        HANDLE SourceHandle,
        void *a3,
        int a4,
        struct _RM_PROC_PROPERTIES *a5)
{
  __int64 v8; // rcx
  struct _RM_PROC_ENTRY *v9; // rdi
  char v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  struct _RM_PROC_ENTRY *v13; // r12
  unsigned int LastError; // ebx
  DWORD ProcessId; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v24; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v25[3]; // [rsp+51h] [rbp-20h] BYREF
  int v26; // [rsp+54h] [rbp-1Dh] BYREF
  DWORD v27; // [rsp+58h] [rbp-19h] BYREF
  struct _RM_PROC_ENTRY *v28; // [rsp+60h] [rbp-11h] BYREF
  void *v29; // [rsp+68h] [rbp-9h] BYREF
  __m128i v30; // [rsp+70h] [rbp-1h] BYREF

  v29 = a3;
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn((__int64)a1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v8,
      byte_18002B69C);
  v9 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v10 = 6;
  v26 = 6;
  v11 = RmpProcPropertiesValidateAndCapture((__m128i *)a5, &v30);
  v13 = (struct _RM_PROC_ENTRY *)v30.m128i_i64[0];
  LastError = v11;
  if ( v11 >= 0 )
  {
    ProcessId = GetProcessId(SourceHandle);
    v27 = ProcessId;
    if ( ProcessId )
    {
      if ( (unsigned int)a4 > 5 )
      {
        LastError = -1073741582;
      }
      else
      {
        if ( a4 < 3 && (((unsigned __int16)v13 & 0x1C0) != 0 || ((unsigned __int16)v13 & 0x200) != 0)
          || !a4 && ((unsigned __int16)v13 & 0x400) != 0 )
        {
          LastError = -1073741776;
          goto LABEL_28;
        }
        v16 = RmpProcFindOrCreateEntry(a1, ProcessId, SourceHandle, v29, &v28);
        v9 = v28;
        LastError = v16;
        if ( v16 >= 0 )
        {
          v17 = RmpProcEntrySetLevel((__int64)v28, (unsigned int)a4, &v30, &v26);
          v10 = v26;
          LastError = v17;
          if ( v17 >= 0 )
          {
            if ( v26 < a4 )
            {
              RmpProcContextLockExclusive(a1, v18, v19);
              if ( (*((_DWORD *)a1 + 24) & 0x38u) >= 0x10 )
                RmpProcContextCheckQueueEmptyWorker(a1);
              RmpProcContextUnlockExclusive(a1);
            }
            LastError = 0;
          }
        }
      }
      if ( v9 )
        RmpProcEntryDereference(v9);
    }
    else if ( (int)GetLastError() > 0 )
    {
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    }
    else
    {
      LastError = GetLastError();
    }
  }
  else if ( v11 == -1073741811 )
  {
    LastError = -1073741581;
  }
LABEL_28:
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v12, 3LL) )
  {
    v29 = (void *)v30.m128i_i64[1];
    v26 = LastError;
    v24 = v10;
    v28 = v13;
    v25[0] = a4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v20,
      byte_18002B642,
      v21,
      v22,
      (__int64)&v27,
      (__int64)v25,
      (__int64)&v28,
      (__int64)&v29,
      (__int64)&v24,
      (__int64)&v26);
  }
  return LastError;
}
