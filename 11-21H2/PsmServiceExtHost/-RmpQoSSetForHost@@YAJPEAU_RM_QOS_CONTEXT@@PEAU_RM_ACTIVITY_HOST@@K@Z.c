/*
 * XREFs of ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18004510C
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180044DC0 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180091FAC (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180044C94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpQoSSetForHost(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(char *, _QWORD, char *, _QWORD, _QWORD, int, _BYTE *); // rbx
  int ManagerType; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[36]; // [rsp+40h] [rbp-78h] BYREF
  int v15; // [rsp+64h] [rbp-54h]
  __int64 v16; // [rsp+90h] [rbp-28h]
  int v17; // [rsp+C8h] [rbp+10h] BYREF
  bool v18; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+20h] BYREF

  if ( a3 )
    v5 = *((unsigned __int8 *)a1 + 32);
  else
    v5 = 0LL;
  memset_0(v14, 0, 0x60uLL);
  v6 = *((_QWORD *)a2 + 6);
  v15 = 1;
  v16 = v5;
  v7 = *(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, _BYTE *))(*(_QWORD *)(v6 + 40) + 136LL);
  ManagerType = RmpActivityHostGetManagerType(a2);
  v9 = v7(
         (char *)a2 + 552,
         *((unsigned int *)a2 + 155),
         (char *)a2 + 88,
         *((unsigned int *)a2 + 156),
         *((_QWORD *)a2 + 4),
         ManagerType,
         v14);
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), 0);
  if ( v9 < 0 )
  {
    if ( !a3 )
      *((_BYTE *)a2 + 1212) &= ~4u;
  }
  else
  {
    *((_BYTE *)a2 + 1212) &= ~4u;
    *((_BYTE *)a2 + 1212) |= 4 * (a3 & 1);
    v9 = 0;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64));
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 17LL) )
  {
    v19 = *((_QWORD *)a2 + 4);
    v17 = v9;
    v18 = a3 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v10,
      byte_1800C5CBA,
      v11,
      v12,
      (__int64)&v17,
      (__int64)&v19,
      (__int64)&v18);
  }
  return (unsigned int)v9;
}
