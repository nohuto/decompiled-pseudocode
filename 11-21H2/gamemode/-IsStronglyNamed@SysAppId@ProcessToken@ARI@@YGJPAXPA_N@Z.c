/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100062F5
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100063E5 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 * Callees:
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YGPAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@I@Z @ 0x100065FA (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YGPAU_TOKEN_SECURITY_ATTRIBUTES_INFOR.c)
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YGXPAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x10006628 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YGXPAU_TOKEN_SECURITY.c)
 *     _memset @ 0x10007471 (_memset.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(void *a1, _BYTE *a2)
{
  ULONG v2; // ebx
  NTSTATUS v4; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  const UNICODE_STRING *v11; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-14h] BYREF
  _BYTE *v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  ULONG ReturnLength; // [esp+18h] [ebp-4h] BYREF

  v2 = 0;
  v13 = a2;
  *a2 = 0;
  v4 = NtQueryInformationToken(a1, TokenSecurityAttributes, 0, 0, &ReturnLength);
  if ( v4 == -1073741789 )
  {
    v6 = (_DWORD *)ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(ReturnLength);
    v7 = v6;
    if ( !v6 )
    {
      v2 = 8;
      goto LABEL_18;
    }
    memset(v6, 0, ReturnLength);
    v8 = NtQueryInformationToken(a1, TokenSecurityAttributes, v7, ReturnLength, &ReturnLength);
    if ( v8 < 0 )
    {
      v2 = RtlNtStatusToDosErrorNoTeb(v8);
      goto LABEL_18;
    }
    if ( v7[1] )
    {
      RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
      v9 = 0;
      if ( v7[1] )
      {
        v10 = 0;
        v14 = 0;
        do
        {
          v11 = (const UNICODE_STRING *)(v10 + v7[2]);
          if ( v11[1].Length == 3 )
          {
            if ( !RtlCompareUnicodeString(&DestinationString, v11, 1u) )
            {
              *v13 = 1;
              break;
            }
            v10 = v14;
          }
          ++v9;
          v10 += 24;
          v14 = v10;
        }
        while ( v9 < v7[1] );
      }
    }
LABEL_18:
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v7);
    return v2;
  }
  else if ( v4 )
  {
    return RtlNtStatusToDosErrorNoTeb(v4);
  }
  else
  {
    return 1359;
  }
}
