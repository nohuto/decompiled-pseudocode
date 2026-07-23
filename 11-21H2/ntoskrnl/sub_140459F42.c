/*
 * XREFs of sub_140459F42 @ 0x140459F42
 * Callers:
 *     sub_1405609F8 @ 0x1405609F8 (sub_1405609F8.c)
 *     sub_140560AAC @ 0x140560AAC (sub_140560AAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140459F42(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = qword_140C468F0;
  v2 = 0LL;
  while ( (__int64 *)v1 != &qword_140C468F0 )
  {
    if ( *(_DWORD *)(v1 + 20) == a1 )
    {
      v2 = v1;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 192));
      return v2;
    }
    v1 = *(_QWORD *)v1;
  }
  return v2;
}
