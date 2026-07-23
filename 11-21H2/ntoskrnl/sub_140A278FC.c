/*
 * XREFs of sub_140A278FC @ 0x140A278FC
 * Callers:
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A278FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rcx

  sub_14042A5E0(a1, a2);
  result = LODWORD((*off_140C093B0)[2]);
  if ( *(_DWORD *)(a5 + 16) == (_DWORD)result )
  {
    v8 = *(_QWORD *)a5 - (*off_140C093B0)[0];
    if ( *(_QWORD *)a5 == (*off_140C093B0)[0] )
      v8 = *(_QWORD *)(a5 + 8) - (*off_140C093B0)[1];
    if ( !v8 )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
