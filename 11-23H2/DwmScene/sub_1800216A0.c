/*
 * XREFs of sub_1800216A0 @ 0x1800216A0
 * Callers:
 *     sub_180021BDC @ 0x180021BDC (sub_180021BDC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_1800216A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001C190();
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 48);
  }
  *a1 = v4;
  return a1;
}
