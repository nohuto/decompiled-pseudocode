/*
 * XREFs of ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18008B938
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800080A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008B8E0 (-OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008BA10 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_UninitializedAllocation@V?$allocator@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@@utl@@QEAA@XZ @ 0x18004F840 (--1-$_UninitializedAllocation@V-$allocator@U-$_HashNode@U-$pair@QEAUResourceHandle__@ExecutionMo.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::QueueMessage(HANDLE *a1, int a2)
{
  HANDLE *v3; // rbx
  HANDLE *v5; // rax
  HANDLE **v6; // r8
  HANDLE ***v7; // rax
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  HANDLE *v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1 + 164;
  v5 = (HANDLE *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  v6 = (HANDLE **)v5;
  if ( v5 )
  {
    v12 = 0LL;
    *((_DWORD *)v5 + 4) = a2;
    v7 = (HANDLE ***)v3[1];
    v6[1] = (HANDLE *)v7;
    *v6 = v3;
    *v7 = v6;
    v3[1] = v6;
    v3[2] = (char *)v3[2] + 1;
  }
  utl::_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>::~_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>((void **)&v12);
  result = SetEvent(a1[163]);
  if ( (unsigned int)dword_1800DB1E0 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL);
    if ( result )
    {
      v12 = a1;
      v13 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v9,
               byte_1800C5674,
               v10,
               v11,
               (__int64)&v13,
               (__int64)&v12);
    }
  }
  return result;
}
