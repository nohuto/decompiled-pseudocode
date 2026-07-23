/*
 * XREFs of sub_1406BCB10 @ 0x1406BCB10
 * Callers:
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 *     sub_1406BC9D0 @ 0x1406BC9D0 (sub_1406BC9D0.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 */

__int64 __fastcall sub_1406BCB10(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  _BYTE *v3; // r8

  if ( a1 != *((_QWORD *)KeGetCurrentThread() + 68) )
    return 3221225659LL;
  v1 = *(_QWORD *)(a1 + 1304);
  if ( !v1 )
    return 3221225473LL;
  v2 = sub_140287970(v1);
  *v3 = *(_BYTE *)(*(_QWORD *)v2 + 15LL) >> 4;
  return 0LL;
}
