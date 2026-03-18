/*
 * XREFs of EngMapFile @ 0x1C02870F0
 * Callers:
 *     <none>
 * Callees:
 *     bMapFile @ 0x1C02875C0 (bMapFile.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v4; // rbx
  ULONG_PTR v6; // rdi

  v4 = 0LL;
  v6 = Win32AllocPoolZInit(80LL, 1818846791LL);
  if ( v6 )
  {
    if ( (unsigned int)bMapFile(pwsz) )
    {
      *piFile = v6;
      return *(PVOID *)(v6 + 8);
    }
    else
    {
      *piFile = 0LL;
      Win32FreePool(v6);
    }
  }
  return v4;
}
