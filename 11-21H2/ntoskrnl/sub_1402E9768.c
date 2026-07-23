/*
 * XREFs of sub_1402E9768 @ 0x1402E9768
 * Callers:
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402E96B0 @ 0x1402E96B0 (sub_1402E96B0.c)
 *     sub_14045C260 @ 0x14045C260 (sub_14045C260.c)
 * Callees:
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033A4C0 @ 0x14033A4C0 (sub_14033A4C0.c)
 */

__int64 __fastcall sub_1402E9768(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  unsigned int v6; // r8d
  __int64 v7; // rcx

  LOBYTE(v2) = sub_14033A410(a1, a2);
  result = sub_14033A4C0(v3, v2);
  if ( !(_DWORD)result )
  {
    v6 = (*(_DWORD *)(v5 + 16) >> 5) & 0x1F;
    if ( _bittest64((const signed __int64 *)(v5 + 40), 0x28u) || *(__int64 *)(v5 + 8) <= 0 )
    {
      v7 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( *(_QWORD *)(v7 + 1264) )
      {
        if ( sub_140234F14(v7, *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) )
          return (unsigned int)dword_140015AB0[v6];
      }
      return v6;
    }
    else
    {
      return (unsigned int)dword_140015AB0[v6];
    }
  }
  return result;
}
