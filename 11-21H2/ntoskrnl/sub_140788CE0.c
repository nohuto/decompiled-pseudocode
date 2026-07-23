/*
 * XREFs of sub_140788CE0 @ 0x140788CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140788CE0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  *a3 = 0;
  v4 = 0;
  if ( *(_QWORD *)a2 )
  {
    return (unsigned int)sub_14042A5E0(a1, *(_QWORD *)(a2 + 8));
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v5) );
    v6 = *(_DWORD *)(a2 + 24);
    v7 = v5 + 1;
    *(_DWORD *)(a2 + 28) += v7;
    if ( v6 > v7 )
    {
      sub_1402E0340(*(_WORD **)(a2 + 16), v6, *(const WCHAR **)(a1 + 16), 0LL, 0LL, 2304);
      *(_QWORD *)(a2 + 16) += 2LL * v7;
      *(_DWORD *)(a2 + 24) -= v7;
    }
  }
  return v4;
}
