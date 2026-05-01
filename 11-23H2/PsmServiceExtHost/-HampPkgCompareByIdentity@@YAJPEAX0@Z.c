/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x18000C760
 * Callers:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180031CA0 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     memcmp_0 @ 0x180053496 (memcmp_0.c)
 */

int __fastcall HampPkgCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  char *v3; // rdi
  int result; // eax
  unsigned int v5; // eax
  const void *v6; // rsi
  ULONG v7; // edi
  ULONG v8; // eax

  if ( !a2 )
    a2 = 0LL;
  v3 = (char *)(a2 + 48);
  result = _wcsicmp(a1, a2 + 48);
  if ( !result )
  {
    v5 = *((_DWORD *)a1 + 50);
    if ( v5 < *((_DWORD *)v3 + 50) )
    {
      return -1;
    }
    else if ( v5 > *((_DWORD *)v3 + 50) )
    {
      return 1;
    }
    else
    {
      v6 = v3 + 132;
      v7 = RtlLengthSid(v3 + 132);
      v8 = RtlLengthSid((PSID)(a1 + 66));
      if ( v8 < v7 )
      {
        return -1;
      }
      else if ( v8 > v7 )
      {
        return 1;
      }
      else
      {
        return memcmp_0(a1 + 66, v6, v8);
      }
    }
  }
  return result;
}
