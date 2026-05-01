/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180013F90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002C34 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // [rsp+40h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v13[2]; // [rsp+50h] [rbp-30h] BYREF
  void *v14; // [rsp+58h] [rbp-28h]
  _DWORD SystemInformation[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+98h] [rbp+18h] BYREF

  v13[1] = 0;
  v14 = a2;
  v13[0] = 257;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v16 = v13;
  v17 = 16;
  v6 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
  {
    v12 = *((_QWORD *)a1 + 4);
    v18 = a3;
    v11 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v7,
      (int)&unk_1800C683A,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v18,
      (__int64)&v12);
  }
  return v6;
}
