/*
 * XREFs of sub_140A304B4 @ 0x140A304B4
 * Callers:
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 * Callees:
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     sub_140A30510 @ 0x140A30510 (sub_140A30510.c)
 */

__int64 __fastcall sub_140A304B4(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  const UNICODE_STRING *v5; // rdx
  const UNICODE_STRING *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = qword_140D00AC8;
  v6 = 0LL;
  result = sub_1406C2248(qword_140D00AC8, a2, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    if ( (*(_DWORD *)&v6[4].Length & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( *(const UNICODE_STRING **)(v2 + 48) == v6 )
        *(_QWORD *)(v2 + 48) = 0LL;
      return sub_140A30510(v2, v5, v4);
    }
  }
  return result;
}
