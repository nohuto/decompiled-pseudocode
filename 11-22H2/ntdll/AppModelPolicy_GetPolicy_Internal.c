/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x18006E364
 * Callers:
 *     LdrpInitializePolicy @ 0x180078710 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18006E550 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v9; // r8d
  _DWORD *v10; // rax

  PackageClaims = RtlQueryPackageClaims(-4, 0, 0, 0, 0LL, 0LL, (__int64)a4, (__int64)a5);
  v9 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
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
    else if ( (*a4 & 0x10000) != 0 )
    {
      v10 = &unk_18013B7F0;
    }
    else if ( (*a4 & 0x4000) != 0 )
    {
      v10 = &unk_18013B7F8;
    }
    else if ( (*(_BYTE *)a4 & 4) != 0 )
    {
      v10 = &unk_18013B7D4;
    }
    else if ( (*a4 & 0x40400) != 0 )
    {
      v10 = &unk_18013B7E4;
    }
    else if ( (*a4 & 0x800) != 0 )
    {
      v10 = &unk_18013B7E8;
    }
    else if ( (*(_BYTE *)a4 & 0x40) != 0 )
    {
      v10 = &unk_18013B7E0;
    }
    else if ( (*a4 & 0x1000) != 0 )
    {
      v10 = &unk_18013B7EC;
    }
    else
    {
      v10 = &unk_18013B7DC;
      if ( (*(_BYTE *)a4 & 8) == 0 )
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
