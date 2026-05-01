/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002E49C
 * Callers:
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x18002E578 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800871F0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002D37C (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DC88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int (*v4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  int v5; // ebx
  char v6; // dl
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // r9
  char v10; // al
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  char v14; // [rsp+70h] [rbp+20h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  if ( (*((_BYTE *)a1 + 1260) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a1 + 1256) & 8) != 0 )
    {
      *a2 = 0LL;
      v16 = 0LL;
      goto LABEL_5;
    }
    v4 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
  }
  else
  {
    v4 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
  }
  v16 = 0LL;
  v5 = RmHamHostActOnProcesses(a1, 4096, 1, v4, &v16);
  if ( v5 < 0 )
  {
    v16 = -1LL;
    goto LABEL_6;
  }
  *a2 = v16;
LABEL_5:
  v5 = 0;
LABEL_6:
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v10 = v6 & (*((_DWORD *)a1 + 315) >> 4);
    v12 = v9;
    v14 = v10;
    v13 = *((_QWORD *)a1 + 4);
    v15 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v7,
      (unsigned int)&unk_1800C369D,
      v8,
      v9,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v14);
  }
  return (unsigned int)v5;
}
