/*
 * XREFs of sub_14091D0F0 @ 0x14091D0F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14069E26C @ 0x14069E26C (sub_14069E26C.c)
 */

__int64 __fastcall sub_14091D0F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax

  v4 = sub_14069E26C(a1, *(_DWORD *)(a3 + 16), *(_QWORD *)(a3 + 8));
  if ( v4 == -1073741267 )
  {
    *(_DWORD *)a3 = -1073741267;
    return 0LL;
  }
  if ( v4 >= 0 )
    return 0LL;
  *(_DWORD *)a3 = v4;
  return 1LL;
}
