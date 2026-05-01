/*
 * XREFs of sub_180002B58 @ 0x180002B58
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002B58(__int64 a1, __int64 a2, int *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v8 = 0;
    *a4 = 0;
    *a3 = 0;
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
      v9 = 65537;
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
