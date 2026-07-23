/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x18007397C
 * Callers:
 *     LdrpInitializePolicy @ 0x180060340 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180073B70 (RtlQueryPackageClaims.c)
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
      v10 = &unk_180137264;
    }
    else if ( (a4->Flags & 0x10000) != 0 )
    {
      v10 = &unk_180137260;
    }
    else if ( (a4->Flags & 0x4000) != 0 )
    {
      v10 = &unk_180137268;
    }
    else if ( (a4->Flags & 4) != 0 )
    {
      v10 = &unk_180137244;
    }
    else if ( (a4->Flags & 0x400) != 0 )
    {
      v10 = &unk_180137254;
    }
    else if ( (a4->Flags & 0x800) != 0 )
    {
      v10 = &unk_180137258;
    }
    else if ( (a4->Flags & 0x40) != 0 )
    {
      v10 = &unk_180137250;
    }
    else if ( (a4->Flags & 0x1000) != 0 )
    {
      v10 = &unk_18013725C;
    }
    else
    {
      v10 = &unk_18013724C;
      if ( (a4->Flags & 8) == 0 )
        v10 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
    }
  }
  else
  {
    v10 = &unk_180137248;
  }
  *a3 = v10[11 * (a2 - 1)];
  return v9;
}
