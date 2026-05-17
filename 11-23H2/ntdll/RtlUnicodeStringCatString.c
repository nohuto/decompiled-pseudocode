/*
 * XREFs of RtlUnicodeStringCatString @ 0x1800EA864
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800EAA68 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker_0 @ 0x1800EA8F4 (RtlWideCharArrayCopyStringWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 3221225485LL;
  v3 = a1[1];
  if ( (v3 & 1) != 0 || *a1 > v3 || v3 == 0xFFFF || !*((_QWORD *)a1 + 1) && (*a1 || v3) )
    return 3221225485LL;
  v4 = *((_QWORD *)a1 + 1);
  v5 = (unsigned __int64)*a1 >> 1;
  v6 = (unsigned __int64)a1[1] >> 1;
  v8 = 0LL;
  result = RtlWideCharArrayCopyStringWorker_0(v4 + 2 * v5, v6 - v5, &v8);
  *a1 = 2 * (v8 + v5);
  return result;
}
