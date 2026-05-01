/*
 * XREFs of ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800487C0
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180048680 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18003E4EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SstpStateChangeTriage(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned int v9; // r8d
  __int64 v10; // r11
  int v11; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-34h] BYREF
  int v18[12]; // [rsp+48h] [rbp-30h] BYREF

  v7 = 0;
  v9 = a4[54];
  if ( !v9 )
    goto LABEL_6;
  while ( 1 )
  {
    v10 = 8LL * v7;
    if ( *(_QWORD *)&a4[v10 + 6] == a1 )
      break;
    if ( ++v7 >= v9 )
      goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(struct _WNF_STATE_NAME, _QWORD, struct _WNF_TYPE_ID *, _DWORD *, const void *, unsigned int))&a4[v10 + 8])(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v11 >= 0 )
LABEL_6:
    v11 = 0;
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v17 = a2;
    v16[0] = v7;
    v18[0] = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v13,
      byte_1800C6633,
      v14,
      v15,
      (__int64)v18,
      (__int64)v16,
      (__int64)&v17);
  }
  return (unsigned int)v11;
}
