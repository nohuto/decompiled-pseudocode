/*
 * XREFs of RtlImageRvaToVa @ 0x18008E9E0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180034310 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v8; // r10
  unsigned int v9; // r8d

  if ( a4 )
  {
    v8 = (_DWORD *)*a4;
    if ( *a4 )
    {
      v9 = v8[3];
      if ( a3 >= v9 && a3 < v9 + v8[4] )
        goto LABEL_6;
    }
  }
  result = RtlSectionTableFromVirtualAddress(a1, a2, a3);
  v8 = (_DWORD *)result;
  if ( result )
  {
    if ( !a4 )
      return a2 + a3 - v8[3] + (unsigned int)v8[5];
LABEL_6:
    *a4 = v8;
    return a2 + a3 - v8[3] + (unsigned int)v8[5];
  }
  return result;
}
