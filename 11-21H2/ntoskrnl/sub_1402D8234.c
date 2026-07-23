/*
 * XREFs of sub_1402D8234 @ 0x1402D8234
 * Callers:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 *     sub_140A91A50 @ 0x140A91A50 (sub_140A91A50.c)
 *     sub_140A91C30 @ 0x140A91C30 (sub_140A91C30.c)
 *     sub_140A9F0C0 @ 0x140A9F0C0 (sub_140A9F0C0.c)
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 * Callees:
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8360 @ 0x1402D8360 (sub_1402D8360.c)
 *     sub_1402D8398 @ 0x1402D8398 (sub_1402D8398.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall sub_1402D8234(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = sub_1402D8398(a1, *a3);
  sub_1402D8360(a2);
  v6 *= 192LL;
  sub_1402D8304(v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + v6 + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v6 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return sub_1402D82D0(v6 + *(_QWORD *)(a1 + 16), a2);
}
