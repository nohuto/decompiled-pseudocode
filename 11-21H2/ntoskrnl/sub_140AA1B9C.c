/*
 * XREFs of sub_140AA1B9C @ 0x140AA1B9C
 * Callers:
 *     sub_140AA1E50 @ 0x140AA1E50 (sub_140AA1E50.c)
 *     sub_140AA1EB0 @ 0x140AA1EB0 (sub_140AA1EB0.c)
 * Callees:
 *     sub_1402423D0 @ 0x1402423D0 (sub_1402423D0.c)
 */

volatile signed __int32 *__fastcall sub_140AA1B9C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  volatile signed __int32 *v4; // rbx
  unsigned __int64 v5; // rdx

  _InterlockedAdd(&dword_140D57870, 1u);
  v3 = 0;
  while ( 1 )
  {
    v4 = (volatile signed __int32 *)((char *)&unk_140D5A290
                                   + 80 * (((unsigned __int8)_InterlockedExchangeAdd(&dword_140D57874, 1u) + 1) & 0xF));
    if ( !_InterlockedCompareExchange(v4, 1, 0) )
      break;
    if ( (unsigned int)++v3 >= 0x10 )
      return 0LL;
  }
  if ( v4 )
  {
    v5 = qword_140D57660;
    *((_BYTE *)v4 + 8) = KeGetCurrentIrql();
    if ( ((v5 & 0xFFFFFFFFFFFFFFFCuLL) != 0 || !*(_BYTE *)(a1 + 94)) && (v4[1] & 1) != 0 )
    {
      sub_1402423D0(*((_DWORD **)v4 + 4), v5, a3);
      *((_DWORD *)v4 + 1) |= 2u;
    }
    _InterlockedAdd(&dword_140D5786C, 1u);
  }
  return v4;
}
