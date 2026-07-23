/*
 * XREFs of sub_14054ABD0 @ 0x14054ABD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054AE18 @ 0x14054AE18 (sub_14054AE18.c)
 *     sub_14054B018 @ 0x14054B018 (sub_14054B018.c)
 */

__int64 __fastcall sub_14054ABD0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  if ( !(_DWORD)a3 || (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  if ( byte_140D06888 )
    return sub_14054B018(a1, a2, a3, a5, (__int64)a4);
  if ( (dword_140D0688C & 2) != 0 )
    return sub_14054AE18(a1, a2, a3, a5, a4);
  *a4 = 0;
  return 3221226021LL;
}
