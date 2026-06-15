/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18001EF74
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v9; // r8d
  _DWORD *v10; // rax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v9 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v9 = 0;
    *a4 = 0;
    *a3 = 0;
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
      v10 = &unk_18004EE54;
    }
    else if ( (*a4 & 0x10000) != 0 )
    {
      v10 = &unk_18004EE50;
    }
    else if ( (*a4 & 0x4000) != 0 )
    {
      v10 = &unk_18004EE58;
    }
    else if ( (*(_BYTE *)a4 & 4) != 0 )
    {
      v10 = &unk_18004EE34;
    }
    else if ( (*a4 & 0x400) != 0 )
    {
      v10 = &unk_18004EE44;
    }
    else if ( (*a4 & 0x800) != 0 )
    {
      v10 = &unk_18004EE48;
    }
    else if ( (*(_BYTE *)a4 & 0x40) != 0 )
    {
      v10 = &unk_18004EE40;
    }
    else if ( (*a4 & 0x1000) != 0 )
    {
      v10 = &unk_18004EE4C;
    }
    else
    {
      v10 = &unk_18004EE3C;
      if ( (*(_BYTE *)a4 & 8) == 0 )
        v10 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
    }
  }
  else
  {
    v10 = &unk_18004EE38;
  }
  *a3 = v10[11 * (a2 - 1)];
  return v9;
}
