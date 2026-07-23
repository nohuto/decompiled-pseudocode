/*
 * XREFs of sub_1406E9440 @ 0x1406E9440
 * Callers:
 *     <none>
 * Callees:
 *     sub_14077D2F8 @ 0x14077D2F8 (sub_14077D2F8.c)
 */

__int64 __fastcall sub_1406E9440(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 result; // rax

  v3 = a2 + 2;
  result = sub_14077D2F8(*a2, *(_QWORD *)(a1 + 16), 0, a2[1], (__int64)(a2 + 2));
  if ( (int)result >= 0 )
    *a3 = *v3;
  return result;
}
