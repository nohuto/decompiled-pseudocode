/*
 * XREFs of sub_1409EE650 @ 0x1409EE650
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409EE5BC @ 0x1409EE5BC (sub_1409EE5BC.c)
 */

__int64 __fastcall sub_1409EE650(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000000) != 0 )
    return 3221226243LL;
  if ( *(_QWORD *)(a1 + 1032) || (result = sub_1409EE5BC(a1), (int)result >= 0) )
  {
    if ( !**(_QWORD **)(a1 + 1032) )
    {
      _interlockedbittestandset(&dword_140C2BD48, 2u);
      result = sub_14042A5E0(v3, *(_QWORD *)(a1 + 1032));
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1032) + 8LL) = v3;
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x4000000u);
        return 0LL;
      }
      else
      {
        _interlockedbittestandreset(&dword_140C2BD48, 2u);
        **(_QWORD **)(a1 + 1032) = 0LL;
      }
      return result;
    }
    return 3221226243LL;
  }
  return result;
}
