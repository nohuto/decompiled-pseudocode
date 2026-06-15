/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180045E28
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180045CA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x180045950 (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180045A84 (-Free@ARI@@YAXPEAX@Z.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  NTSTATUS InformationToken; // eax
  PVOID v9; // rax
  void *v10; // rdx
  PVOID v11; // rbx
  ULONG v12; // edi
  int v13; // eax
  __int64 i; // rdi
  struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *v15; // rsi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  Size = (size_t)a4;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken == -1073741789 )
  {
    v9 = ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>((unsigned int)Size);
    v11 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, (unsigned int)Size);
      v13 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v11, Size, (PULONG)&Size);
      if ( v13 >= 0 )
      {
        if ( *((_DWORD *)v11 + 1) )
        {
          RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v11 + 1); i = (unsigned int)(i + 1) )
          {
            v15 = (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *)(*((_QWORD *)v11 + 1) + 40 * i);
            if ( !RtlCompareUnicodeString(&DestinationString, (PCUNICODE_STRING)v15, 1u) )
            {
              *a3 = v15;
              *a2 = v11;
              ARI::Free(0LL, v10);
              return 0;
            }
          }
        }
        v12 = 1168;
      }
      else
      {
        v12 = RtlNtStatusToDosErrorNoTeb(v13);
      }
    }
    else
    {
      v12 = 8;
    }
    ARI::Free(v11, v10);
    return v12;
  }
  else if ( InformationToken )
  {
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  }
  else
  {
    return 1359;
  }
}
