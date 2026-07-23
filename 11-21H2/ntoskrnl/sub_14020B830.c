/*
 * XREFs of sub_14020B830 @ 0x14020B830
 * Callers:
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_140B2AC4C @ 0x140B2AC4C (sub_140B2AC4C.c)
 * Callees:
 *     sub_14020C4B8 @ 0x14020C4B8 (sub_14020C4B8.c)
 *     sub_1402AACD0 @ 0x1402AACD0 (sub_1402AACD0.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 */

__int64 __fastcall sub_14020B830(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a2 + 2;
  v2 = sub_1402AACD0(0LL, a2);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 184) -= 144LL;
    v4 = *(_QWORD *)(v2 + 184);
    *(_BYTE *)(v2 + 67) -= 2;
    *(_BYTE *)(v2 + 66) -= 2;
    *(_QWORD *)(v2 + 200) = v4;
    if ( (unsigned __int8)sub_14020C4B8() )
      sub_140556BE4(v3);
  }
  return v3;
}
