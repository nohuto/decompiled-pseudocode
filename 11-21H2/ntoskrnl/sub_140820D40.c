/*
 * XREFs of sub_140820D40 @ 0x140820D40
 * Callers:
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 *     sub_140820D40 @ 0x140820D40 (sub_140820D40.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140820D40 @ 0x140820D40 (sub_140820D40.c)
 */

__int64 __fastcall sub_140820D40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = 0LL;
  if ( !*(_DWORD *)(a1 + 56) || *(_BYTE *)(a1 + 136) == 8 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    result = sub_14042A5E0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 24LL) + 8LL), *(_QWORD *)(a1 + 112));
    if ( (int)result >= 0 )
      return sub_140820D40(v2);
  }
  return result;
}
