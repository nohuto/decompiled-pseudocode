/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18003BE58
 * Callers:
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A610 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ecx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    v8 = 0;
LABEL_3:
    v9 = 0x10000;
    if ( (*(_BYTE *)a5 & 1) == 0 )
      goto LABEL_13;
    if ( (*(_BYTE *)a5 & 8) != 0 )
      goto LABEL_13;
    v10 = *a4;
    if ( (*a4 & 0x10000) != 0 )
      goto LABEL_13;
    if ( (v10 & 0x4000) == 0 )
    {
      if ( (v10 & 4) != 0 || (v10 & 0x400) != 0 )
        goto LABEL_13;
      if ( (v10 & 0x800) == 0 )
      {
        if ( (v10 & 0x40) != 0 )
        {
LABEL_13:
          *a3 = v9;
          return v8;
        }
        if ( (v10 & 0x1000) == 0 )
        {
          v9 = ((unsigned __int8)~*(_BYTE *)a4 >> 3) & 1 | 0x10000;
          goto LABEL_13;
        }
      }
    }
    v9 = 65537;
    goto LABEL_13;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
    goto LABEL_3;
  return v8;
}
