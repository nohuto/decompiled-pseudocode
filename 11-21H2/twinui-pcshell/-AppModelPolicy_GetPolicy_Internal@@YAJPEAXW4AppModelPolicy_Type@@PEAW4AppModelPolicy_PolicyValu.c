/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1804E767C
 * Callers:
 *     ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1804E8214 (-GetWindowingPolicy@ViewSizePreferenceHelpers@@YA-AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // edx
  int v9; // eax

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
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
LABEL_11:
        v9 = 196609;
LABEL_16:
        *a3 = v9;
        return v8;
      }
      if ( (*a4 & 0x10000) == 0 && (*a4 & 0x4000) == 0 && (*(_BYTE *)a4 & 4) == 0 && (*a4 & 0x400) == 0 )
      {
        if ( (*a4 & 0x800) != 0 )
          goto LABEL_11;
        if ( (*(_BYTE *)a4 & 0x40) == 0 && (*a4 & 0x1000) == 0 )
        {
          v9 = (*(unsigned __int8 *)a4 >> 2) & 2 | 0x30001;
          goto LABEL_16;
        }
      }
    }
    v9 = 196608;
    goto LABEL_16;
  }
  return v8;
}
