/*
 * XREFs of sub_14085CCD0 @ 0x14085CCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14085CCD0(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v7; // ebx
  unsigned int v8; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v7 = v4 + 1;
  if ( !*(_QWORD *)a4 || (unsigned __int8)sub_14042A5E0(a1, a3) )
  {
    *(_DWORD *)(a4 + 28) += v7;
    v8 = *(_DWORD *)(a4 + 24);
    if ( v8 > v7 )
    {
      sub_1402E0340(*(_WORD **)(a4 + 16), v8, a3, 0LL, 0LL, 2304);
      *(_QWORD *)(a4 + 16) += 2LL * v7;
      *(_DWORD *)(a4 + 24) -= v7;
    }
  }
  return 0LL;
}
