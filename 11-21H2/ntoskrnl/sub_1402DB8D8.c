/*
 * XREFs of sub_1402DB8D8 @ 0x1402DB8D8
 * Callers:
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 *     sub_140A91AD0 @ 0x140A91AD0 (sub_140A91AD0.c)
 *     sub_140A91EDC @ 0x140A91EDC (sub_140A91EDC.c)
 *     sub_140A9F0C0 @ 0x140A9F0C0 (sub_140A9F0C0.c)
 *     sub_140A9F1DC @ 0x140A9F1DC (sub_140A9F1DC.c)
 *     sub_140AA144C @ 0x140AA144C (sub_140AA144C.c)
 *     sub_140AA1590 @ 0x140AA1590 (sub_140AA1590.c)
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 * Callees:
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8360 @ 0x1402D8360 (sub_1402D8360.c)
 *     sub_1402D8398 @ 0x1402D8398 (sub_1402D8398.c)
 *     sub_1402D8440 @ 0x1402D8440 (sub_1402D8440.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 */

__int64 __fastcall sub_1402DB8D8(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *(_QWORD *)a1;
  sub_1402D8440(a1, (__int64)&Buffer);
  v6 = sub_1402D8398(a1, Buffer);
  sub_1402D8360(a2);
  v7 = 192 * v6;
  sub_1402D8304(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(192 * v6 + *(_QWORD *)(a1 + 16)), &Buffer);
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 192 * v6 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  sub_1402D82D0(v7 + *(_QWORD *)(a1 + 16), a2);
  return v9;
}
