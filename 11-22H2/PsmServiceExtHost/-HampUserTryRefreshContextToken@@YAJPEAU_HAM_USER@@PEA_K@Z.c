/*
 * XREFs of ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180042360
 * Callers:
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180011354 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001FAE0 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180042420 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x18004245C (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z @ 0x1800424AC (-HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x180080C9C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$07@@U3@@-$_tlg.c)
 */

__int64 __fastcall HampUserTryRefreshContextToken(struct _HAM_USER *a1, unsigned __int64 *a2)
{
  char *v2; // r15
  unsigned int v5; // r12d
  __int64 v6; // rsi
  int v7; // edi
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  char *v15; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+40h] BYREF
  int v17; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp+58h] BYREF

  v2 = (char *)a1 + 88;
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 20) + 88LL);
  HampUserAcquireLockExclusive(a1);
  while ( 1 )
  {
    v6 = *((_QWORD *)a1 + 23);
    HampUserReleaseLockExclusive(a1);
    v7 = HampSystemQueryUserContextToken(v5, v2, &v18);
    if ( v7 < 0 )
      break;
    HampUserAcquireLockExclusive(a1);
    if ( v6 == *((_QWORD *)a1 + 23) )
    {
      v8 = v18;
      *((_DWORD *)a1 + 48) |= 2u;
      *((_QWORD *)a1 + 23) = v8;
      HampUserReleaseLockExclusive(a1);
      v7 = 0;
      *a2 = v18;
      break;
    }
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v14 = *a2;
    v13 = v6;
    v15 = v2;
    v16 = v5;
    v17 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v9,
      (unsigned int)&unk_1800C2F0C,
      v10,
      v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
  return (unsigned int)v7;
}
