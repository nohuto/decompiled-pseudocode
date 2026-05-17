/*
 * XREFs of RtlUnicodeStringCatString @ 0x1800EA1D8
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800EA3D8 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker_0 @ 0x1800EA264 (RtlWideCharArrayCopyStringWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 3221225485LL;
  v3 = a1[1];
  if ( (v3 & 1) != 0 )
    return 3221225485LL;
  if ( *a1 > (unsigned __int16)v3 )
    return 3221225485LL;
  if ( (_WORD)v3 == 0xFFFF )
    return 3221225485LL;
  v4 = *((_QWORD *)a1 + 1);
  if ( !v4 && (*a1 || (_WORD)v3) )
    return 3221225485LL;
  v5 = *a1;
  v7 = 0LL;
  v5 >>= 1;
  result = RtlWideCharArrayCopyStringWorker_0(v4 + 2 * v5, (v3 >> 1) - v5, &v7);
  *a1 = 2 * (v7 + v5);
  return result;
}
