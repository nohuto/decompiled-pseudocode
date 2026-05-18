/*
 * XREFs of sub_180012F30 @ 0x180012F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012F30(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = a1 - (_QWORD)a2;
  v3 = 27LL;
  do
  {
    *(_DWORD *)((char *)a2 + v2 + 72) = *a2;
    ++a2;
    --v3;
  }
  while ( v3 );
  return 0LL;
}
