/*
 * XREFs of sub_14079FBD4 @ 0x14079FBD4
 * Callers:
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402EF444 @ 0x1402EF444 (sub_1402EF444.c)
 *     sub_1402EF5FC @ 0x1402EF5FC (sub_1402EF5FC.c)
 *     sub_1402EFF90 @ 0x1402EFF90 (sub_1402EFF90.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_14079FBD4(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  _QWORD *result; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  sub_1402EFF90(a1);
  sub_1402EF5FC(a1);
  sub_1402AC800(a1);
  v2 = sub_1402EF444(a1, 1);
  v4 = v2;
  if ( v2 )
  {
    v6 = v2;
    do
    {
      v7 = v6 - 2;
      v6 = (_QWORD *)*v6;
      if ( v7[5] )
        sub_14042A5E0(v7, v3);
      else
        ExFreePoolWithTag(v7, 0);
    }
    while ( v6 != v4 );
  }
  result = sub_1402EF444(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
