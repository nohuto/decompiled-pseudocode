/*
 * XREFs of PsspDumpObject_Section @ 0x18012AB00
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySection @ 0x1800A18D0 (NtQuerySection.c)
 */

__int64 __fastcall PsspDumpObject_Section(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v6; // [rsp+58h] [rbp+20h]
  int v7; // [rsp+5Ch] [rbp+24h]

  *a4 = 0;
  if ( a3 < 0x18 )
    return 3221225507LL;
  result = NtQuerySection();
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      return 2147483653LL;
    }
    else
    {
      *a4 = v6;
      return (unsigned int)result;
    }
  }
  else
  {
    *a4 = 0;
  }
  return result;
}
