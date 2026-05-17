/*
 * XREFs of RtlEndEnumerationHashTable @ 0x180083E10
 * Callers:
 *     RtlEndWeakEnumerationHashTable @ 0x180101740 (RtlEndWeakEnumerationHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEndEnumerationHashTable(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 **v3; // r8
  __int64 result; // rax

  --*(_DWORD *)(a1 + 28);
  v2 = (__int64 *)*a2;
  if ( (__int64 *)*a2 != a2 )
  {
    if ( (__int64 *)v2[1] != a2 || (v3 = (__int64 **)a2[1], *v3 != a2) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (__int64)v3;
    if ( *(_QWORD *)a2[3] == a2[3] )
      --*(_DWORD *)(a1 + 24);
  }
  result = 24LL;
  a2[3] = 0LL;
  return result;
}
