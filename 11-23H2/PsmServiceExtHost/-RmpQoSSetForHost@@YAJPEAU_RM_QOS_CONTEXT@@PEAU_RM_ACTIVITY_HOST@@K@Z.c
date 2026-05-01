/*
 * XREFs of ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DF04
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DE3C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DB5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpQoSSetForHost(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[36]; // [rsp+40h] [rbp-88h] BYREF
  int v14; // [rsp+64h] [rbp-64h]
  __int64 v15; // [rsp+90h] [rbp-38h]
  int v16; // [rsp+D8h] [rbp+10h] BYREF
  bool v17; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+20h] BYREF

  if ( a3 )
    v5 = *((unsigned __int8 *)a1 + 32);
  else
    v5 = 0LL;
  memset_0(v13, 0, 0x60uLL);
  v6 = *((_QWORD *)a2 + 6);
  v15 = v5;
  v7 = *((_QWORD *)a2 + 4);
  v14 = 1;
  v8 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, int, _BYTE *))(*(_QWORD *)(v6 + 40) + 136LL))(
         (char *)a2 + 552,
         *((unsigned int *)a2 + 155),
         (char *)a2 + 88,
         *((unsigned int *)a2 + 156),
         v7,
         *((_BYTE *)a2 + 656) != 0 ? 4 : 0,
         v13);
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), 0);
  if ( v8 >= 0 )
  {
    *((_BYTE *)a2 + 1220) ^= (*((_BYTE *)a2 + 1220) ^ (4 * a3)) & 4;
    v8 = 0;
  }
  else if ( !a3 )
  {
    *((_BYTE *)a2 + 1220) &= ~4u;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64));
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 17LL) )
  {
    v18 = *((_QWORD *)a2 + 4);
    v16 = v8;
    v17 = a3 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v9,
      byte_1800C643E,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v18,
      (__int64)&v17);
  }
  return (unsigned int)v8;
}
