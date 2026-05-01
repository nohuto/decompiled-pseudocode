/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180090174
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18009000C (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18008FED4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 (__fastcall *v4)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned __int64 *); // rbx
  int ManagerType; // eax
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int8 v8; // bl
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  struct _RM_ACTIVITY_HOST *v12; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                                 + 88LL);
  ManagerType = RmpActivityHostGetManagerType(a1);
  result = v4(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             ManagerType,
             &v13);
  if ( (int)result >= 0 )
  {
    v7 = v13;
    if ( v13 <= *((_QWORD *)a1 + 154) )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      if ( (unsigned int)dword_1800DC1E0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
        {
          v14 = v7;
          v15 = v11;
          v12 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v9,
            byte_1800C51DE,
            v10,
            v7,
            (__int64)&v12,
            (__int64)&v15,
            (__int64)&v14);
          v7 = v13;
        }
      }
      *((_QWORD *)a1 + 154) = v7;
    }
    *a2 = v8;
    return 0LL;
  }
  return result;
}
