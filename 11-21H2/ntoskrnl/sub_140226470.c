/*
 * XREFs of sub_140226470 @ 0x140226470
 * Callers:
 *     sub_14069F3D4 @ 0x14069F3D4 (sub_14069F3D4.c)
 * Callees:
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 */

__int64 __fastcall sub_140226470(__int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[1] )
  {
    v1 = a1 + 2;
    v2 = *a1;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      return sub_1406BF450(v2, v1);
    else
      return sub_1407C97C0(v2, v1);
  }
  return result;
}
