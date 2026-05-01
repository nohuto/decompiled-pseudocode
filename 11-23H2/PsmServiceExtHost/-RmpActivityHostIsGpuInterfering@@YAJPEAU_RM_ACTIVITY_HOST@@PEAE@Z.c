/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18008BCE4
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008BB8C (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18008AEAC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // bl
  __int64 v7; // rcx
  __int64 v8; // r9
  struct _RM_ACTIVITY_HOST *v9; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 88LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
             &v10);
  if ( (int)result >= 0 )
  {
    v5 = v10;
    if ( v10 <= *((_QWORD *)a1 + 155) )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      {
        v11 = v5;
        v12 = v8;
        v9 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v7,
          byte_1800C5962,
          v5,
          v8,
          (__int64)&v9,
          (__int64)&v12,
          (__int64)&v11);
        v5 = v10;
      }
      *((_QWORD *)a1 + 155) = v5;
    }
    *a2 = v6;
    return 0LL;
  }
  return result;
}
