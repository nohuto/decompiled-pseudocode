/*
 * XREFs of PctGetPlatformCtrInfo @ 0x1C00260F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PctGetPlatformCtrInfo(unsigned int a1, _QWORD *a2, wchar_t **a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  wchar_t **v5; // rcx

  if ( a1 > 4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = 0;
    v5 = &(&PctPlatformCounterCfg)[6 * (int)a1];
    *a2 = L"RAPL";
    *a3 = *v5;
    *a4 = *((_DWORD *)v5 + 10);
  }
  return v4;
}
