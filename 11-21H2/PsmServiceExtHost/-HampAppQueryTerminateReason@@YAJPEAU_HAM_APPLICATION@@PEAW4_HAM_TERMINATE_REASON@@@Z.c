/*
 * XREFs of ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000BEEC
 * Callers:
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18000BE7C (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000BF54 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007ADFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 */

__int64 __fastcall HampAppQueryTerminateReason(struct _HAM_APPLICATION *a1, enum _HAM_TERMINATE_REASON *a2)
{
  int RegistryTerminateReason; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h]
  __int64 v12; // [rsp+88h] [rbp+20h]

  if ( (*((_DWORD *)a1 + 154) & 0x10000) != 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                              (const unsigned __int16 *)a1 + 48,
                              (void *)(*((_QWORD *)a1 + 11) + 228LL),
                              (enum _HAM_TERMINATE_REASON *)&v10);
  if ( RegistryTerminateReason >= 0 )
  {
    *(_DWORD *)a2 = v10;
    return 0;
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 0x400000000008LL, v5, v6) )
  {
    v9 = *((_QWORD *)a1 + 11);
    v11 = 0x1000000LL;
    v12 = v9 + 228;
    v10 = RegistryTerminateReason;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
      v8,
      &unk_1800C168C);
  }
  return (unsigned int)RegistryTerminateReason;
}
