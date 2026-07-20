/*
 * XREFs of SmpConfigureExecute @ 0x1400192D0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x14000741C (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureExecute(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *v6; // rbx
  __int64 result; // rax

  v6 = (_DWORD *)a6;
  result = SmpSaveRegistryValue(a6 + 40, a3, 0LL, 1u, (__int64)&a6);
  if ( (int)result >= 0 )
  {
    ++*v6;
    v6[1] += *(unsigned __int16 *)(a6 + 16) + 2;
  }
  return result;
}
