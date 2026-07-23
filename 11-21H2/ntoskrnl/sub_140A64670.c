/*
 * XREFs of sub_140A64670 @ 0x140A64670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A64670(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // rcx

  if ( a2 != **(_DWORD **)(a1 + 352) )
    return 3221225485LL;
  result = 0LL;
  if ( a2 )
  {
    v6 = 0LL;
    v7 = a2;
    do
    {
      v8 = *a3;
      v6 += 16LL;
      ++a3;
      *(_QWORD *)(v6 + *(_QWORD *)(a1 + 352)) = v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
