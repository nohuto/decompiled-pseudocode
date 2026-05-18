/*
 * XREFs of ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x1800058FC
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800044C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x18000403C (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x1800058E8 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180005FEC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800076CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 MapDwmVirtualAccountAndAdjustPrivileges(void)
{
  int v0; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  NTSTATUS v3; // ebx
  int v4; // r9d
  ULONG SubAuthority2; // [rsp+20h] [rbp-49h]
  void *SubAuthority3; // [rsp+28h] [rbp-41h]
  int v8; // [rsp+60h] [rbp-9h] BYREF
  PSID v9; // [rsp+68h] [rbp-1h] BYREF
  PSID v10; // [rsp+70h] [rbp+7h] BYREF
  PSID Sid; // [rsp+78h] [rbp+Fh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+17h] BYREF
  struct _UNICODE_STRING v13; // [rsp+90h] [rbp+27h] BYREF
  struct _UNICODE_STRING v14; // [rsp+A0h] [rbp+37h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Sid = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = StringCchPrintfW(gwszDwmAccountName, 0x1EuLL, L"DWM-%d", NtCurrentPeb()->SessionId);
  v2 = v0;
  if ( v0 < 0 )
  {
    SubAuthority2 = 529;
    goto LABEL_17;
  }
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v13, L"Window Manager Group");
  RtlInitUnicodeString(&v14, gwszDwmAccountName);
  v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v3 >= 0 )
  {
    v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &v10);
    if ( v3 < 0 )
    {
      SubAuthority2 = 559;
      goto LABEL_4;
    }
    v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 3u, 0x5Au, 0, NtCurrentPeb()->SessionId, 0, 0, 0, 0, 0, &v9);
    if ( v3 < 0 )
    {
      SubAuthority2 = 572;
      goto LABEL_4;
    }
    v0 = AddSidMappingToLsa(&DestinationString, 0LL, Sid, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v8);
    v2 = v0;
    if ( v0 < 0 )
    {
      SubAuthority2 = 574;
    }
    else if ( LsaCollisionResult(v8)
           || (v0 = AddSidMappingToLsa(&DestinationString, &v13, v10, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v8),
               v2 = v0,
               v0 >= 0) )
    {
      v0 = AddSidMappingToLsa(&DestinationString, &v14, v9, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v8);
      v2 = v0;
      if ( v0 >= 0 )
        goto LABEL_19;
      SubAuthority2 = 590;
    }
    else
    {
      SubAuthority2 = 586;
    }
LABEL_17:
    v4 = v0;
    goto LABEL_18;
  }
  SubAuthority2 = 546;
LABEL_4:
  v2 = v3 | 0x10000000;
  v4 = v2;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(v1, &dword_180010850, 2u, v4, SubAuthority2, SubAuthority3);
LABEL_19:
  if ( v9 )
    RtlFreeSid(v9);
  if ( v10 )
    RtlFreeSid(v10);
  if ( Sid )
    RtlFreeSid(Sid);
  return v2;
}
