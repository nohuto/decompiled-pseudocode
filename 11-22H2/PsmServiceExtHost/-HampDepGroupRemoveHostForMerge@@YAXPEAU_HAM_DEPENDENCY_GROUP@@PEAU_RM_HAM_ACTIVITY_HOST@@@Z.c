/*
 * XREFs of ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D148
 * Callers:
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D55C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BD24 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DC70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

void __fastcall HampDepGroupRemoveHostForMerge(volatile signed __int64 *P, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  char *v2; // rbx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // rcx
  char v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = (char *)a2 + 720;
  RtlRbRemoveNode(P + 7, (char *)a2 + 720);
  *((_QWORD *)v2 + 2) = -1LL;
  if ( (((unsigned __int64)*((unsigned int *)a2 + 166) >> 26) & 7) == 0 )
    --*((_DWORD *)P + 23);
  if ( HampHostIsSuspendWaiter(a2, v5) )
  {
    v8 = *((_DWORD *)P + 22) - 1;
    *((_DWORD *)P + 22) = v8;
    if ( (unsigned int)dword_1800DB218 > 5 )
    {
      v11 = v8;
      v10 = 0;
      v9 = 32LL;
      if ( a2 )
        v9 = (__int64)a2 - 32;
      v12 = *(_QWORD *)v9;
      v13 = *P;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v9,
        byte_1800BF5FD,
        v6,
        v7,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v10);
    }
  }
  HampDepGroupDereference(P);
  *((_QWORD *)a2 + 88) = 0LL;
}
