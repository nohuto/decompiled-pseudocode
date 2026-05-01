/*
 * XREFs of ?HamSrvHostIdStoreDereferenceEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180002A6C
 * Callers:
 *     PsmHamDereferenceHostId @ 0x180002A60 (PsmHamDereferenceHostId.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002B50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall HamSrvHostIdStoreDereferenceEntry(struct _HAM_HOSTID_ENTRY *a1)
{
  __int64 v2; // rdi
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _HAM_HOSTID_ENTRY *v6; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C1947, 0, 0, 2u, &v7);
  v2 = *((_QWORD *)a1 + 11);
  CemRcObjectDereference(a1);
  if ( (unsigned int)dword_1800DB218 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
    {
      v5 = v2;
      v6 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DB218,
        (unsigned int)&unk_1800C028A,
        v3,
        v4,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
