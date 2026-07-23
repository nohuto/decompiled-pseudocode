/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x18006E364
 * Callers:
 *     LdrpInitializePolicy @ 0x180078710 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18006E550 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned __int32 v9; // r8d
  _DWORD *v10; // rax

  PackageClaims = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v9 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    a4->Flags = 0;
    v9 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v9;
  }
  if ( (*(_BYTE *)a5 & 1) != 0 )
  {
    if ( (*(_BYTE *)a5 & 8) != 0 )
    {
      v10 = &unk_18013B7F4;
    }
    else if ( (a4->Flags & 0x10000) != 0 )
    {
      v10 = &unk_18013B7F0;
    }
    else if ( (a4->Flags & 0x4000) != 0 )
    {
      v10 = &unk_18013B7F8;
    }
    else if ( (a4->Flags & 4) != 0 )
    {
      v10 = &unk_18013B7D4;
    }
    else if ( (a4->Flags & 0x40400) != 0 )
    {
      v10 = &unk_18013B7E4;
    }
    else if ( (a4->Flags & 0x800) != 0 )
    {
      v10 = &unk_18013B7E8;
    }
    else if ( (a4->Flags & 0x40) != 0 )
    {
      v10 = &unk_18013B7E0;
    }
    else if ( (a4->Flags & 0x1000) != 0 )
    {
      v10 = &unk_18013B7EC;
    }
    else
    {
      v10 = &unk_18013B7DC;
      if ( (a4->Flags & 8) == 0 )
        v10 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
    }
  }
  else
  {
    v10 = &unk_18013B7D8;
  }
  *a3 = v10[11 * (a2 - 1)];
  return v9;
}
