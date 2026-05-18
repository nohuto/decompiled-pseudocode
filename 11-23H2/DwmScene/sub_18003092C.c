/*
 * XREFs of sub_18003092C @ 0x18003092C
 * Callers:
 *     sub_180036F90 @ 0x180036F90 (sub_180036F90.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_18003092C(__int64 *a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax

  v6 = sub_18001C190();
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  *a1 = v6;
  return a1;
}
