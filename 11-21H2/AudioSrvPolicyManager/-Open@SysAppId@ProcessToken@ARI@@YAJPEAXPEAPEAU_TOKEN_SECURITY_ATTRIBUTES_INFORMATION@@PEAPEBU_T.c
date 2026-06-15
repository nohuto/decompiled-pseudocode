/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1800419E0
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800417A4 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x180041588 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURIT.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        const UNICODE_STRING **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  NTSTATUS InformationToken; // eax
  PVOID Heap; // rax
  PVOID v10; // rdi
  int v11; // eax
  ULONG v12; // ebx
  __int64 v13; // rbx
  const UNICODE_STRING *v14; // rsi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  Size = (size_t)a4;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken != -1073741789 )
  {
    if ( InformationToken )
      return RtlNtStatusToDosErrorNoTeb(InformationToken);
    else
      return 1359;
  }
  if ( !is_mul_ok((unsigned int)Size, 0x10uLL) )
  {
    v10 = 0LL;
    goto LABEL_16;
  }
  Heap = RtlAllocateHeap(
           NtCurrentPeb()->ProcessHeap,
           ((unsigned int)Size * (unsigned __int128)0x10uLL) >> 64,
           16LL * (unsigned int)Size);
  v10 = Heap;
  if ( !Heap )
  {
LABEL_16:
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v10);
    return 8;
  }
  memset_0(Heap, 0, (unsigned int)Size);
  v11 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v10, Size, (PULONG)&Size);
  if ( v11 >= 0 )
  {
    if ( *((_DWORD *)v10 + 1)
      && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v13 = 0LL, *((_DWORD *)v10 + 1)) )
    {
      while ( 1 )
      {
        v14 = (const UNICODE_STRING *)(*((_QWORD *)v10 + 1) + 40 * v13);
        if ( !RtlCompareUnicodeString(&DestinationString, v14, 1u) )
          break;
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *((_DWORD *)v10 + 1) )
          goto LABEL_13;
      }
      *a3 = v14;
      *a2 = v10;
      ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(0LL);
      return 0;
    }
    else
    {
LABEL_13:
      ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v10);
      return 1168;
    }
  }
  else
  {
    v12 = RtlNtStatusToDosErrorNoTeb(v11);
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v10);
    return v12;
  }
}
