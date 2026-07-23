/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1402268D8
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1406B7CF4 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140226150 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        void *a1,
        __int64 a2,
        int *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax
  ULONG Flags; // eax
  bool v12; // zf

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    a4->Flags = 0;
    v8 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v8;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v9 = 3014657;
    }
    else
    {
      Flags = a4->Flags;
      if ( (a4->Flags & 0x10000) != 0 )
      {
        v9 = 3014656;
      }
      else if ( (Flags & 0x4000) != 0 )
      {
        v9 = 3014658;
      }
      else if ( (Flags & 4) != 0 )
      {
        v9 = 3014658;
      }
      else if ( (Flags & 0x40400) != 0 )
      {
        v9 = 3014657;
      }
      else if ( (Flags & 0x800) != 0 )
      {
        v9 = 3014657;
      }
      else if ( (Flags & 0x40) != 0 )
      {
        v9 = 3014656;
      }
      else if ( (Flags & 0x1000) != 0 )
      {
        v9 = 3014656;
      }
      else
      {
        v12 = (Flags & 8) == 0;
        v9 = 3014657;
        if ( !v12 )
          v9 = 3014657;
      }
    }
  }
  else
  {
    v9 = 3014656;
  }
  *a3 = v9;
  return v8;
}
