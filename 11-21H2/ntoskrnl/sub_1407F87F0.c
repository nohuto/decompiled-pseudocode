/*
 * XREFs of sub_1407F87F0 @ 0x1407F87F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407F8854 @ 0x1407F8854 (sub_1407F8854.c)
 */

__int64 __fastcall sub_1407F87F0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8

  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v2 = (__int64)a2;
    *(_DWORD *)v2 = *(_DWORD *)v2;
  }
  *a2 = sub_1407F8854();
  return 0LL;
}
