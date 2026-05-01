/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800066B0
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18000682C (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x180006B00 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURIT.c)
 *     memset_0 @ 0x180007BE6 (memset_0.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(HANDLE TokenHandle, _BYTE *a2, bool *a3)
{
  ULONG v3; // ebx
  NTSTATUS InformationToken; // eax
  _QWORD *Heap; // rax
  _QWORD *v9; // rdi
  void *v10; // rsi
  int v11; // eax
  ULONG v12; // eax
  unsigned int v13; // ebp
  const UNICODE_STRING *v14; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    if ( is_mul_ok((unsigned int)Size, 0x10uLL) )
    {
      Heap = RtlAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               ((unsigned int)Size * (unsigned __int128)0x10uLL) >> 64,
               16LL * (unsigned int)Size);
      v9 = Heap;
      v10 = Heap;
      if ( Heap )
      {
        memset_0(Heap, 0, (unsigned int)Size);
        v11 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v10, Size, (PULONG)&Size);
        if ( v11 >= 0 )
        {
          if ( *((_DWORD *)v9 + 1) )
          {
            RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
            v13 = 0;
            if ( *((_DWORD *)v9 + 1) )
            {
              while ( 1 )
              {
                v14 = (const UNICODE_STRING *)(v9[1] + 40LL * v13);
                if ( v14[1].Length == 3 && !RtlCompareUnicodeString(&DestinationString, v14, 1u) )
                  break;
                if ( ++v13 >= *((_DWORD *)v9 + 1) )
                  goto LABEL_19;
              }
              *a2 = 1;
            }
          }
          goto LABEL_19;
        }
        v12 = RtlNtStatusToDosErrorNoTeb(v11);
LABEL_18:
        v3 = v12;
LABEL_19:
        ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v10);
        return v3;
      }
    }
    else
    {
      v10 = 0LL;
    }
    v12 = 8;
    goto LABEL_18;
  }
  if ( InformationToken )
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  else
    return 1359;
}
