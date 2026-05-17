/*
 * XREFs of RtlImageRvaToVa @ 0x1800F5AD0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180028E30 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _DWORD *v7; // r10
  unsigned int v8; // r8d
  __int64 result; // rax

  if ( a4 )
  {
    v7 = (_DWORD *)*a4;
    if ( *a4 )
    {
      v8 = v7[3];
      if ( a3 >= v8 && a3 < v8 + v7[4] )
        goto LABEL_7;
    }
  }
  result = RtlSectionTableFromVirtualAddress(a1, a2, a3);
  v7 = (_DWORD *)result;
  if ( !result )
    return result;
  if ( a4 )
LABEL_7:
    *a4 = v7;
  return a2 + a3 - v7[3] + (unsigned int)v7[5];
}
