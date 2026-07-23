/*
 * XREFs of sub_140540520 @ 0x140540520
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140540520(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = sub_14042A5E0(*a3 + 0x4000LL, *(_QWORD *)(a2 + 8));
  if ( (int)result >= 0 )
  {
    result = a3[3];
    *(_DWORD *)(result + 4) |= 2u;
  }
  return result;
}
