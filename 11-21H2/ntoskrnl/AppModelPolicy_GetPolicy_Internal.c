/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x140203E24
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1406718F8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v11; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    v8 = 0;
    goto LABEL_4;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
LABEL_4:
    if ( (*a5 & 1) == 0 )
    {
LABEL_5:
      v9 = 3014656;
LABEL_6:
      *a3 = v9;
      return v8;
    }
    if ( (*a5 & 8) == 0 )
    {
      v11 = *a4;
      if ( (*a4 & 0x10000) != 0 )
        goto LABEL_5;
      if ( (v11 & 0x4000) != 0 || (v11 & 4) != 0 )
      {
        v9 = 3014658;
        goto LABEL_6;
      }
      if ( (v11 & 0x400) == 0 && (v11 & 0x800) == 0 )
      {
        if ( (v11 & 0x40) != 0 )
          goto LABEL_5;
        v9 = 3014656;
        if ( (*a4 & 0x1000) != 0 )
          goto LABEL_6;
      }
    }
    v9 = 3014657;
    goto LABEL_6;
  }
  return v8;
}
