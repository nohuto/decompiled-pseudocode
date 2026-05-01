/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180011110
 * Callers:
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C850 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    v8 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v8;
  }
  if ( (*(_BYTE *)a5 & 1) != 0 )
  {
    if ( (*(_BYTE *)a5 & 8) != 0 )
    {
      v9 = 0x10000;
    }
    else if ( (*a4 & 0x10000) != 0 )
    {
      v9 = 0x10000;
    }
    else if ( (*a4 & 0x4000) != 0 )
    {
      v9 = 65537;
    }
    else if ( (*(_BYTE *)a4 & 4) != 0 )
    {
      v9 = 0x10000;
    }
    else if ( (*a4 & 0x40400) != 0 )
    {
      v9 = 0x10000;
    }
    else if ( (*a4 & 0x800) != 0 )
    {
      v9 = 65537;
    }
    else if ( (*(_BYTE *)a4 & 0x40) != 0 )
    {
      v9 = 0x10000;
    }
    else if ( (*a4 & 0x1000) != 0 )
    {
      v9 = 65537;
    }
    else
    {
      v9 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      if ( (*(_BYTE *)a4 & 8) != 0 )
        v9 = 0x10000;
    }
  }
  else
  {
    v9 = 0x10000;
  }
  *a3 = v9;
  return v8;
}
